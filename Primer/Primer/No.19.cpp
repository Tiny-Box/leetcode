//                                                     /*[*/#include<stdio.h>//
//                         #include<stdlib.h>//]++++[->++[->+>++++<<]<][(c)2013]
//                        #ifndef                                           e//[o
//                       #include<string.h>//]![misaka.c,size=3808,crc=d0ec3b36][
//                      #define e                                           0x1//
//                     typedef struct{int d,b,o,P;char*q,*p;}f;int p,q,d,b,_=0//|
//                  #include __FILE__//]>>>[->+>++<<]<[-<<+>>>++<]>>+MISAKA*IMOUTO
//                #undef e//[->[-<<+<+<+>>>>]<<<<<++[->>+>>>+<<<<<]>+>+++>+++[>]]b
//             #define e(c)/**/if((_!=__LINE__?(_=__LINE__):0)){c;}//[20002,+[-.+]
//            ,O,i=0,Q=sizeof(f);static f*P;static FILE*t;static const char*o[]={//
//          "\n\40\"8oCan\40not\40open %s\n\0aaFbfeccdeaEbgecbbcda6bcedd#e(bbed$bbd",
//        "a6bgcdbbccd#ead$c%bcdea7bccde*b$eebbdda9bsdbeccdbbecdcbbcceed#eaa&bae$cbe",
//       "e&cbdd$eldbdeedbbdede)bdcdea&bbde1bedbbcc&b#ccdee&bdcdea'bbcd)e'bad(bae&bccd",
//      "e&bbda1bdcdee$bbce#b$c&bdedcd%ecdca4bhcdeebbcd#e$b#ecdcc$bccda7bbcc#e#d%c*bbda",
//     ">bad/bbda"};static int S(){return(o[p][q]);}static/**/int/**/Z=0  ;void/**/z(int//
//    l){if(/**/Z-l){Z=l;q++;if(p<b*5&&!S()){p+=b;q=0;}}}int main(int I,    /**/char**l){//
//   d=sizeof(f*);if(1<(O=_)){b=((sizeof(o)/sizeof(char*))-1)/4;q=22; p=     0;while(p<b*5){
//  /*<*/if(Z-1){d=S()>96;i=S()-(d?96:32) ;q++;if(p<b*5&&!S()){p+=b;  q=      0;}Z=1;}/*[[*/
//  while(i){_=o[0][S()-97];I=_-10?b:1;   for( ;I--;)putchar(_ );if   (!      --i||d)z(~i );}
// if(p==b*5&&O){p-=b;O--;}}return 0U;   }if(! (P=( f*)calloc /*]*/  (Q        ,I)))return 1;
// {;}for(_=p=1;p<I;p++){e(q=1);while    (q<   p&&  strcmp(  l[p     ]         ,l[(q)]))++  q;
// t=stdin;if(q<p){(void)memcpy/* "      */    (&P  [p],&P   [q     ]          ,Q);continue ;}
//if(strcmp(l[p],"-")){t=fopen(l         [     p]   ,"rb"   )                  ;if(!t ){{;}  ;
//printf(05+*o,l[p ]);return+1;                      {;}                       }}_=b= 1<<16   ;
//*&O=5;do{if(!(P[p].q=realloc   (P[p].q,(P[p].P     +=       b)+1))){return   01;}O   &=72   /
//6/*][*/;P[p].o+=d=fread(P[p]      .q       +P[     p           ].       o,  1,b,t)   ;}//
// while(d==b)      ;P [p].q[       P[       p]                  .o       ]=  012;d    =0;
// e(fclose(t        )  );P         [p]      .p                  =P[      p]  .q;if    (O)
// {for(;d<P[            p]          .o     ;d=                   q+     1)    {q=     d;
//  while(q<P[                        p].o&&P[                    p].q[q]-     10     ){
//  q++;}b=q-d;                         _=P                         [p].        d     ;
//  if(b>_){/*]b                                                                */
//   P[p].d=b;}{;                                                                }
//   #undef/*pqdz'.*/  e//                                                      ;
//   #define/*s8qdb]*/e/**/0                                                   //
//   //<<.<<.----.>.<<.>++.++<                                              .[>]
//   /*P[*/P[p].b++;continue;}}}t=                                       stdout;
//  for (p=1;p<I;p++){/**/if(P[p].b>i                               ){i=P[p].b;}}
// if  (O){for(p=0;p<i;p++){q=0;/*[*/while(I               >++q){_=P[q].p-P[q ].q;
//b=   0;if(_<P[q ].o){while(012-*P[q].p)     {putchar(*(P[q].p++));b++;}P[q]. p++;
//}   ;while (P[  q].d>b++)putchar(040);}             putchar(10);}return 0;}p   =1;
//   for(;   p<I   ;p++)fwrite(P[p] .q,P[              p].o,1,t);return 0 ;}//
//  #/*]     ]<.    [-]<[-]<[- ]<[    -]<               [-  ]<;*/elif  e    //b
// |(1        <<     ( __LINE__        /*               >>   `*//45))  |     01U
//             #                       /*               */     endif            //
//

//#include<iostream>
//#include<algorithm>
//#include <ctime>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int Initial_State[10][10];
//vector<vector<int>> Initial_State_;
//int hole[81];
//int test[9][9];
//int nHole, N, num, X, Y, FillNum, Cnum;

//bool get_Initial_State(int i, int j)  //搜索第（ i , j ）位置处可以存储的数字,找到解则返回true，否则返回false
//{
//	if (i > 9 || j > 9)
//		return true;
//
//	for (int k = 1; k <= 9; ++k)
//	{
//		bool can = true;                // can 变量用于记录数字k能否放在 ( i , j ) 处 
//		for (int m = 1; m < i; ++m)
//			if (Initial_State[m][j] == k)  // 检查同一列是否出现过数字k
//			{
//			can = false;
//			break;
//			}
//		if (can)
//			for (int n = 1; n < j; ++n)
//				if (Initial_State[i][n] == k)  // 检查同一行是否出现过数字k
//				{
//			can = false;
//			break;
//				}
//		if (can)
//		{
//			int up1 = (i / 3) * 3 + 3; // (i,j)方格所在的3×3小方格i坐标的上限
//			int up2 = (j / 3) * 3 + 3;   // (i,j)方格所在的3×3小方格在j坐标的上限
//
//			if (i % 3 == 0)    //这是针对特殊情况的处理
//				up1 = i;
//			if (j % 3 == 0)
//				up2 = j;
//
//			for (int p = up1 - 2; p <= up1; ++p)  /* 检查在3×3的小方格中是否出现了同一个数字 */
//			{
//				if (can == false)   /* 跳出外层循环 */
//					break;
//				for (int q = up2 - 2; q <= up2; ++q)
//					if (Initial_State[p][q] == k)
//					{
//					can = false;
//					break;
//					}
//			}
//		}
//		if (can)
//		{
//			Initial_State[i][j] = k;
//			if (j<9)
//			{
//				if (get_Initial_State(i, j + 1))   /* 到同一行的下一位置开始搜索 */
//					return true;
//			}
//			else
//			{
//				if (i < 9)
//				{
//					if (get_Initial_State(i + 1, 1))    /* 到下一行的第一个空格开始搜索 */
//						return true;
//				}
//				else
//					return true;  /* i >= 9  && j >= 9  , 搜索结束 */
//
//			}
//			Initial_State[i][j] = 0;   /* 关键这一步：找不到解就要回复原状，否则会对下面的搜索造成影响 */
//		}
//	}
//	return false;  /*  1到9都尝试过都不行，则返回递归的上一步 */
//}
//
//void start()
//{
//	srand(unsigned(time(NULL)));  /* 产生random_shuffle的随机数种子 */
//	for (int i = 1; i <= 9; ++i)
//		for (int j = 1; j <= 9; ++j)
//			Initial_State[i][j] = 0;
//
//	for (int i = 1; i <= 9; ++i)
//		Initial_State[1][i] = i;
//
//	random_shuffle(&(Initial_State[1][1]), &(Initial_State[1][10]));  /* 第一行随机排列产生 */
//
//	get_Initial_State(1, 1);  /* 从第二行开始搜索 */
//}


//void print()
//{
//	for (int m = 0; m<9; m++)
//	{
//		cout << endl;
//		for (int n = 0; n<9; n++)
//		{
//			cout << test[m][n] << " ";
//		}
//	}
//}
//
////bPack方法
////判断是否可将 n 填入 M[y][x] 里
//bool bPack(int x, int y, int n)
//{
//	//for循环
//	//纵横判断
//	for (int i = 0; i<N; i++)                 //若 M[0~N-1][x]
//		if (n == test[x][i] || n == test[i][y])   //或 M[y][0~N-1] 中已存在 n
//			return false;                   //则返回 false
//
//	//for循环
//	//区域判断
//	int D_X, D_Y, OrderNum;
//	OrderNum = 9 * (x + 1) + (y + 1);
//	D_X = ((int)(x / 3)) * 3;
//	D_Y = ((int)(y / 3)) * 3;
//	for (int count = 0; count != 9; count++)
//	{
//		if (D_X == x && D_Y == y)
//			continue;
//		if (test[(D_X + count / 3)][(D_Y + count % 3)] == n)
//			return false;
//	}
//
//	//返回结果
//	return true;
//}
//
//
////fill方法
////此方法用来填充完整已有数子的数独	
//void fill(int num)
//{
//	if (Cnum == 81)
//	{
//		//print();
//		return;  //表示填满返回
//	}
//	if (test[Cnum / 9][Cnum % 9] != 0)
//	{
//		++Cnum;
//		fill(Cnum);    //位置不为0,填充下一个
//		return;
//	}
//	else
//	{
//		//从1到9里面选择数字填进去
//		for (int x = 1; x != 11; x++)	//x=10 是哨兵
//		{
//			if (Cnum == 81)
//			{
//				return;  //表示填满返回
//			}
//			if (x == 10 && Cnum != 0)
//			{
//				--Cnum;
//				test[(Cnum / 9)][(Cnum % 9)] = 0;
//				return;
//			}
//
//			if (bPack((Cnum / 9), (Cnum % 9), x))
//			{
//				test[(Cnum / 9)][(Cnum % 9)] = x;
//				++Cnum;
//				fill(Cnum);
//			}
//		}
//	}
//
//}
//
//
//
//
//void Generator(vector<vector<char>> &tmp)
//{
//	Cnum = 0; N = 9; nHole = 0;
//	int count = 0;
//	num = 10 + (int)(rand() % 6 + 10);  //产生10到16之间的随机数,不包括16,也就是10到15的整数
//
//	//while循环
//	//尝试在数组中填入符合数独规则的数字
//	//以此来减少树的分支,提高效率
//
//	while (count != num)
//	{
//		X = (int)(rand() % 9);
//		Y = (int)(rand() % 9);
//		FillNum = 1 + (int)(rand() % 9);
//		if (bPack(X, Y, FillNum) == true)
//		{
//			test[X][Y] = FillNum;
//			count++;
//		}
//	}
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			/*Initial_State[i + 1][j + 1] = (tmp[i][j] == '.') ? (0) : (tmp[i][j] - '0');*/
//			test[i][j] = (tmp[i][j] == '.') ? (0) : (tmp[i][j] - '0');
//		}
//	}
//
//}
//
//
//void PrintVecter(vector<vector<char>> &tmp)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			Initial_State[i + 1][j + 1] = (tmp[i][j] == '.') ? (0) : (tmp[i][j] - '0');
//		}
//	}
//}
//
//int main()
//{
//	char a[9][9] = { { '5', '3', '.', '.', '7', '.', '.', '.', '.' }
//		, { '6', '.', '.', '1', '9', '5', '.', '.', '.' }
//		, { '.', '9', '8', '.', '.', '.', '.', '6', '.' }
//		, { '8', '.', '.', '.', '6', '.', '.', '.', '3' }
//		, { '4', '.', '.', '8', '.', '3', '.', '.', '1' }
//		, { '7', '.', '.', '.', '2', '.', '.', '.', '6' }
//		, { '.', '6', '.', '.', '.', '.', '2', '8', '.' }
//		, { '.', '.', '.', '4', '1', '9', '.', '.', '5' }
//	, { '.', '.', '.', '.', '8', '.', '.', '7', '9' } };
//	vector<vector<char>> tmp;
//	vector<char> tmp_;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			tmp_.push_back(a[i][j]);
//		}
//		tmp.push_back(tmp_);
//		tmp_.clear();
//	}
//
//	//PrintVecter(tmp);
//	Generator(tmp);
//	fill(Cnum);
//
//	//for (int i = 0; i < 9; ++i)
//	//{
//	//	for (int j = 0; j < 9; ++j)
//	//		cout << test[i][j] << " ";
//	//	cout << endl;
//	//}
//	//cout << endl;
//
//	getchar();
//	return 0;
//}

#include<iostream>
#include<fstream>
#include<stdexcept>
#include<vector>
#include <time.h>

using namespace std;
static bool sign = false;

class sudo
{
public:
	void getArray();
	bool checkArray(int num, int i, int j);
	void fillArray(int n);
	friend ifstream &open_file(ifstream &in, string &file);
	void displayArray();
	bool Check(int n, int key);
	void DFS(int n);
private:
	int Array[9][9];

};
void sudo::getArray()
{
	//string file_name;
	//cout << "plesae input the filename" << endl;
	//cin >> file_name;
	//ifstream in;
	//open_file(in, file_name);
	//if (!in)
	//	throw runtime_error("cannot open the file !");
	//int number;
	//for (int i = 0; i<9; i++)
	//	for (int j = 0; j<9; j++){
	//	in >> number;
	//	Array[i][j] = number;
	//	}

	char a[9][9] = { { '5', '3', '.', '.', '7', '.', '.', '.', '.' }
		, { '6', '.', '.', '1', '9', '5', '.', '.', '.' }
		, { '.', '9', '8', '.', '.', '.', '.', '6', '.' }
		, { '8', '.', '.', '.', '6', '.', '.', '.', '3' }
		, { '4', '.', '.', '8', '.', '3', '.', '.', '1' }
		, { '7', '.', '.', '.', '2', '.', '.', '.', '6' }
		, { '.', '6', '.', '.', '.', '.', '2', '8', '.' }
		, { '.', '.', '.', '4', '1', '9', '7', '.', '5' }
	, { '.', '.', '.', '.', '8', '.', '.', '7', '9' } };
	//string a[9] = { "..4...63.", ".........", "5......9.", "...56....", "4.3.....1", "...7.....", "...5.....", ".........", "........." };
	vector<vector<char>> tmp;
	vector<char> tmp_;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			tmp_.push_back(a[i][j]);
		}
		tmp.push_back(tmp_);
		tmp_.clear();
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			/*Initial_State[i + 1][j + 1] = (tmp[i][j] == '.') ? (0) : (tmp[i][j] - '0');*/
			Array[i][j] = (tmp[i][j] == '.') ? (0) : (tmp[i][j] - '0');
		}
	}
}
void sudo::fillArray(int n)
{

	int row = n / 9;
	int column = n % 9;
	if (n>80)
	{
		sign = true;
		return;
	}
	if (Array[row][column] != 0)
		fillArray(n + 1);
	else
	{
		for (int num = 1; num<10; num++)
		{
			if (checkArray(num, n / 9, n % 9))
			{
				Array[row][column] = num;
				fillArray(n + 1);
				if (sign)
					return;
				else
					Array[row][column] = 0;
			}

		}
	}
}

bool sudo::checkArray(int num, int i, int j)
{
	//for (int column = 0; column<9; column++){
	//	if (Array[i][column] == num)
	//		return false;
	//}
	//for (int row = 0; row<9; row++){
	//	if (Array[row][j] == num)
	//		return false;
	//}
	//int spare_i = i % 3;
	//int spare_j = j % 3;
	//for (int row = i - spare_i; row < i + 3 - spare_i; row++)
	//{
	//	for (int column = j - spare_j; column < j + 3 - spare_j; column++)
	//	{
	//		if (Array[row][column] == num)
	//		{
	//			return false;
	//		}
	//	}
	//}

	//return true;

	//for循环
	//纵横判断
	for (int k = 0; k<9; k++)                 //若 M[0~N-1][x]
		if (num == Array[i][k] || num == Array[k][j])   //或 M[y][0~N-1] 中已存在 n
			return false;                   //则返回 false

	//for循环
	//区域判断
	int D_X, D_Y, OrderNum;
	OrderNum = 9 * (i + 1) + (j + 1);
	D_X = ((int)(i / 3)) * 3;
	D_Y = ((int)(j / 3)) * 3;
	for (int count = 0; count != 9; count++)
	{
		if (D_X == i && D_Y == j)
			continue;
		if (Array[(D_X + count / 3)][(D_Y + count % 3)] == num	)
			return false;
	}

	//返回结果
	return true;
}
void sudo::displayArray()
{
	cout << "the Array after filled :" << endl;
	for (int i = 0; i<9; i++){
		for (int j = 0; j<9; j++)
			cout << Array[i][j] << "  ";
		cout << endl;
	}

	cout << sign << endl;
}

int A[9][9];
static bool flag = false;
void Generator(vector<vector<char>> &tmp)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			A[i][j] = (tmp[i][j] == '.') ? (0) : (tmp[i][j] - '0');
		}
	}
}

bool CheckNum(int num, int i, int j)
{
	for (int column = 0; column<9; column++)
	{
		if (A[i][column] == num)
			return false;
	}
	for (int row = 0; row<9; row++)
	{
		if (A[row][j] == num)
			return false;
	}
	int spare_i = i % 3;
	int spare_j = j % 3;
	for (int row = i - spare_i; row < i + 3 - spare_i; row++)
	{
		for (int column = j - spare_j; column < j + 3 - spare_j; column++)
		{
			if (A[row][column] == num)
			{
				return false;
			}
		}
	}

	return true;
}

void FillNum(int n)
{
	int row = n / 9;
	int column = n % 9;
	if (n>80)
	{
		flag = true;
		return;
	}
	if (A[row][column] != 0)
		FillNum(n + 1);
	else
	{
		for (int num = 1; num<10; num++)
		{
			if (CheckNum(num, n / 9, n % 9))
			{
				A[row][column] = num;
				FillNum(n + 1);
				if (sign)
					return;
				else
					A[row][column] = 0;
			}

		}
	}
}

bool isValidSudoku(vector<vector<char> > &board) 
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			A[i][j] = (board[i][j] == '.') ? (0) : (board[i][j] - '0');
		}
	}

	FillNum(0);

	return flag;
}

class Solution {
public:
	bool isValidSudoku(vector<vector<char>> &board) {
		bool num[9];
		for (int k = 0; k < 3; k++) {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					num[j] = false;
				}
				for (int j = 0; j < 9; j++) {
					char c = getChar(i, j, k, board);
					if (c == '.') {
						continue;
					}
					if (num[c - '1']) {
						return false;
					}
					else {
						num[c - '1'] = true;
					}
				}
			}
		}
		return true;
	}

protected:
	static char getChar(int pi, int pj, int meth, vector<vector<char> > &board) {
		switch (meth) {
		case 0:
			return board[pi][pj];
		case 1:
			return board[pj][pi];
		case 2:
			return board[pi / 3 * 3 + pj % 3][pi % 3 * 3 + pj / 3];
		default:
			return '.';
		}
	}
};

static char GetChar(int pi, int pj, int meth, vector<vector<char> > &board) {
	switch (meth) {
	case 0:
		return board[pi][pj];
	case 1:
		return board[pj][pi];
	case 2:
		return board[pi / 3 * 3 + pj % 3][pi % 3 * 3 + pj / 3];
	default:
		return '.';
	}
}

bool IsValidSudoku(vector<vector<char>> &board) {
	bool num[9];
	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				num[j] = false;
			}
			for (int j = 0; j < 9; j++) {
				char c = GetChar(i, j, k, board);
				if (c == '.') {
					continue;
				}
				if (num[c - '1']) {
					return false;
				}
				else {
					num[c - '1'] = true;
				}
			}
		}
	}
	return true;
}

int main()
{
	sudo array;
	array.getArray();
	//用clock()来计时  毫秒  
	clock_t  clockBegin, clockEnd;
	clockBegin = clock();
	array.fillArray(0);
	clockEnd = clock();
	printf("%d\n", clockEnd - clockBegin);
	array.displayArray();

	vector<vector<char>> board = ["..4...63.", ".........", "5......9.", "...56....", "4.3.....1", "...7.....", "...5.....", ".........", "........."];
	getchar();
	return 0;
}

