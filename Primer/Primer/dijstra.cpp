#include<iostream>
#include<vector>

using namespace std;
using std::iostream;  
using std::cout;
using std::cin;
using std::endl;

const int maxnum = 10000;
const int maxint = 999999;

//�����鶼���±�1��ʼ
int dist[maxnum]; //��ʾ��ǰ�㵽ԭ������·������
int prev[maxnum]; //��¼��ǰ���ǰһ�����
int c[maxnum][maxnum]; //��¼ͼ�������·������
int xi[maxnum];
int yi[maxnum];


void Dijstra(int n, int v, int *dist, int *prev, int c[maxnum][maxnum])
{
	bool s[maxnum]; //�Ƿ�Ӧ�ô浽S������
	for (int i = 1; i <= n; i++)
	{
		dist[i] = c[v][i];
		s[i] = 0; //��ʼ��δ�ù��õ�
		if (dist[i] == maxint)
			prev[i] = 0;
		else
			prev[i] = v;
	}
	dist[v] = 0;
	s[v] = 1;
	// ���ν�δ����S���ϵĽ���У�ȡdist[]��Сֵ�Ľ�㣬������S��
	// һ��S����������V�ж��㣬dist�ͼ�¼�˴�Դ�㵽������������֮������·������
	// ע���Ǵӵڶ����ڵ㿪ʼ����һ��ΪԴ��
	for (int i = 2; i <= n; i++)
	{
		int tmp = maxint;
		int u = v;
		//�ҳ���ǰδʹ�õĵ�J ��dist[j]����Сֵ
		for (int j = 1; j <= n; j++)
			if (!s[j] && dist[j]<tmp)
			{
			u = j;   // u���浱ǰ�ڽӵ��о�����С�ĵ�ĺ���
			tmp = dist[j];
			}
		s[u] = 1; //��ʾ��u�Ѵ���S������
		//����dist
		for (int j = 1; j <= n; j++)
			if ((!s[j]) && c[u][j]<maxint)
			{
			int newdist = dist[u] + c[u][j];
			if (newdist<dist[j])
			{
				dist[j] = newdist;
				prev[j] = u;
			}
			}
	}

}


//���Ҵ�ԭ��v���յ�u��·���������
void  searchPath(int *prev, int v, int u)
{
	int que[maxnum];
	int tot = 1;
	int sum = 0;
	que[tot] = u;
	tot++;
	int tmp = prev[u];
	while (tmp != v)
	{
		que[tot] = tmp;
		tot++;
		tmp = prev[tmp];
	}
	que[tot] = v;
	for (int i = tot; i > 1; --i)
	{
			sum += c[que[i]][que[i - 1]];
	}
	cout << endl << sum << endl;
	for (int i = tot; i >= 1; --i)
		if (i != 1)
			cout << que[i] << "->";
		else
			cout << que[i] << endl;
}





int main()
{


	int n;
	//�������±궼��1��ʼ
	//����������
	cin >> n;
	////����·����
	//cin >> line;
	int p, q; //����p ��q���㼰��·������
	//��ʼ��c[][]Ϊmaxint
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			c[i][j] = maxint;

	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		xi[i] = x;
		yi[i] = y;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int xmin = abs(xi[i] - xi[j]);
			int ymin = abs(yi[i] - yi[j]);
			c[i][j] = (xmin > ymin) ? (ymin) : (xmin);
		}
	}

	for (int i = 1; i <= n; ++i)
		dist[i] = maxint;

	Dijstra(n, 1, dist, prev, c);

	//���·������
	
	cout<<dist[n]<<endl;

}