#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <malloc.h>

using namespace std;

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

void qsorttest(int *data)
{
	qsort(data, 10000000, sizeof(int), compare);
}

void lambdatest(vector<int> data)
{
	sort(data.begin(), data.end(), [](int a, int b){ return a > b; });
	sort(data.begin(), data.end(), [](int a, int b){ return a < b; });

}

void functiontest(vector<int> data)
{
	sort(data.begin(), data.end(), function<bool(int, int)>([](int a, int b){return a > b; }));
	sort(data.begin(), data.end(), function<bool(int, int)>([](int a, int b){return a < b; }));
}

int main()
{
	vector<int> data(10000000, 0);

	
	for (auto &c : data)
		c = rand() % 1000;


	functiontest(data);
	lambdatest(data);
	//qsorttest(&data[0]);
	/*vector<int> data_2 = data;
	vector<int> data_3 = data;
	vector<int> data_4 = data;
*/
/*
	sort(data.begin(), data.end(), [](int a, int b){ return a > b; });
	sort(data_2.begin(), data_2.end(), [](int a, int b){ return a < b; });
	sort(data_3.begin(), data_3.end(), function<bool(int, int)>([](int a, int b){return a > b; }));
	sort(data_4.begin(), data_4.end(), function<bool(int, int)>([](int a, int b){return a < b; }));*/
	/*for (auto c : data)
		cout << c << endl;*/

	//system("pause");
	return 0;
}