#include <cstdio>
#include <iostream>
#include <string.h>
#include<cstdlib>
#include <vector>
#include <algorithm>  
#include <functional>

#define MAXSIZE 100 //假设物体总数
#define M 15 //背包的载荷能力
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

//算法核心，贪心算法
void GREEDY(int sortResult[])
{
	float c = b;
	int i = 0;
	int temp = 0;

	//for (i = 0; i < n; i++)//准备输出结果
	//{
	//	x[i] = 0;
	//}

	for (i = 0; i < n; i++)
	{
		//for (int j = 0; j<n; j++)
		//	if (sortResult[j] == i + 1)
		//	{
		//		temp = j;//得到取物体的顺序
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

		//x[temp] = 1;//若合适则取出
		//c -= w[temp];//将容量相应的改变
	}

	s = i;
	//if (i <= n)//使背包充满
	//{
	//	x[temp] = c / w[temp];        //取某件物品的一部分
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

	//for (i = 0; i < n; i++)//对映射数组赋初值0
	//{
	//	sortResult[i] = 0;
	//}

	//for (i = 0; i < n; i++)
	//{
	//	float temp = 0;

	//	index = i;

	//	//找到性价比最高的商品，并保存下标
	//	for (j = 0; j < n; j++)
	//	{
	//		if ((temp < e[j].p) && (sortResult[j] == 0))
	//		{
	//			temp = e[j].p;
	//			index = j;
	//		}
	//	}

	//	//对w[i]作标记
	//	if (sortResult[index] == 0)
	//	{
	//		sortResult[index] = ++k;
	//	}
	//}


	return;
}

//得到本算法的所有输入信息
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
	cout << "映射数组sortResult：" << endl;
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


	getData();    //获取数据

	sort(sortResult);        //得到映射数组，数组中按照物品单位重量的价值从大到小的顺序做了标记，方便取物品

	GREEDY(sortResult);    //按照映射数组标记的顺序取物品，和总重量比较

	output(x, n);
	system("pausE");
	return 0;
}