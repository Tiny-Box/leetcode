#include <cstdio>
#include <iostream>
#include <string.h>
#include<cstdlib>
#include <vector>
#include <algorithm>  
#include <functional>

#define MAXSIZE 100 //������������
#define M 15 //�������غ�����
using namespace std;


struct person
{
	int i;
	char sex;
	float v;
	float s;
	float p;
}e[MAXSIZE];
int n, x, y, b, s;
int pf[MAXSIZE];
int pm[MAXSIZE];
int result[MAXSIZE];
int sortResult[MAXSIZE];

bool lessmark(const person& stItem1, const person& stItem2)  
{  
    return stItem1.p < stItem2.p;  
}  

//�㷨���ģ�̰���㷨
void GREEDY(int sortResult[])
{
	float c = b;
	int i = 0;
	int temp = 0;

	//for (i = 0; i < n; i++)//׼��������
	//{
	//	x[i] = 0;
	//}

	for (i = 0; i < n; i++)
	{
		//for (int j = 0; j<n; j++)
		//	if (sortResult[j] == i + 1)
		//	{
		//		temp = j;//�õ�ȡ�����˳��
		//		break;
		//	}
		if (e[sortResult[i]].sex == 'F' && x > 0)
		{
			result[i] = sortResult[i];
			c -= e[sortResult[i]].s;
			x -= 1;
		}
		if (e[sortResult[i]].sex == 'M' && y > 0)
		{
			result[i] = sortResult[i];
			c -= e[sortResult[i]].s;
			y -= 1;
		}
		if (e[sortResult[i]].s > c && x == 0 && y == 0)
		{
			break;
		}

		//x[temp] = 1;//��������ȡ��
		//c -= w[temp];//��������Ӧ�ĸı�
	}

	s = i;
	//if (i <= n)//ʹ��������
	//{
	//	x[temp] = c / w[temp];        //ȡĳ����Ʒ��һ����
	//}

	return;
}

void sort(int sortResult[])
{
	int i = 0, j = 0;
	int index = 0, k = 0;

	vector<person> sum;
	for (i = 0; i < n; i++)
		sum.push_back(e[i]);


	sort(sum.begin(), sum.end(), lessmark);
	
	for (i = 0; i < n; i++)
	{
		sortResult[i] = sum[i].i;
	}

	//for (i = 0; i < n; i++)//��ӳ�����鸳��ֵ0
	//{
	//	sortResult[i] = 0;
	//}

	//for (i = 0; i < n; i++)
	//{
	//	float temp = 0;

	//	index = i;

	//	//�ҵ��Լ۱���ߵ���Ʒ���������±�
	//	for (j = 0; j < n; j++)
	//	{
	//		if ((temp < e[j].p) && (sortResult[j] == 0))
	//		{
	//			temp = e[j].p;
	//			index = j;
	//		}
	//	}

	//	//��w[i]�����
	//	if (sortResult[index] == 0)
	//	{
	//		sortResult[index] = ++k;
	//	}
	//}


	return;
}

//�õ����㷨������������Ϣ
void getData()
{
	int i = 0;

	cout << "please input the basic element: " << endl;
	cin >> n >> x >> y >> b;

	cout << "person: " << endl;
	for (i = 0; i < n; i++)
	{
		cin >> e[i].sex;
		cin >> e[i].v >> e[i].s;
		e[i].p = e[i].v / e[i].s;
		e[i].i = i;
	}

	return;
}

void output(float x[], int n)
{
	int i, vsum, ssum;
	vsum = 0;
	ssum = 0;
	cout << endl << "result: " << endl;
	for (i = 0; i < s; i++)
	{
		vsum += e[result[i]].v; ssum += e[result[i]].s;
	}
	cout << vsum << " " << ssum << endl;
	cout << "ӳ������sortResult��" << endl;
	for (i = 0; i < n; i++)
		cout << sortResult[i] + 1 << "  ";

	//printf("\n\nafter arithmetic data: advise method\n");
	//for (i = 0; i < n; i++)
	//{
	//	printf("x[%d]\t", i);
	//}

	//printf("\n");
	//for (i = 0; i < n; i++)
	//{
	//	printf("%2.3f\t", x[i]);
	//}
	
	return;
}

int main()
{
	float p[MAXSIZE], w[MAXSIZE], x[MAXSIZE];
	int i = 0, n = 0, X = 0, Y = 0, B = 0;


	getData();    //��ȡ����

	sort(sortResult);        //�õ�ӳ�����飬�����а�����Ʒ��λ�����ļ�ֵ�Ӵ�С��˳�����˱�ǣ�����ȡ��Ʒ

	GREEDY(sortResult);    //����ӳ�������ǵ�˳��ȡ��Ʒ�����������Ƚ�

	output(x, n);
	system("pausE");
	return 0;
}