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
//

#include <iostream>
#include <string>
#include <algorithm> 
#include <map>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int idx[4][4];

void edgedfs(int r, int c, vector<vector<char>> &board, int m, int n)
{
	if (r < 0 || r >= m || c < 0 || c >= n)	return;
	if (idx[r][c] == -1 || board[r][c] != 'o') return;
	idx[r][c] = -1;
	for (size_t dr = -1; dr <= 1; dr++)
	{
		for (size_t dc = -1; dc <= 1; dc++)
		{
			if (dr == 0 || dc == 0) edgedfs(r + dr, c + dc, board, m, n);
		}
	}
}

void dfs(int r, int c, int m, int n, vector<vector<char>> &board)
{
	if (r < 0 || r >= m || c < 0 || c >= n)	return;
	if (idx[r][c] == -1 || board[r][c] != 'o') return;
	board[r][c] = 'x';
	idx[r][c] = 1;
	for (size_t dr = -1; dr <= 1; dr++)
	{
		for (size_t dc = -1; dc <= 1; dc++)
		{
			if (dr == 0 || dc == 0) dfs(r + dr, c + dc, m, n, board);
		}
	}
}

void solve(vector<vector<char>> &board) {


	//memset(idx, 0, sizeof(idx));
	int n = board.size();
	int m = board[0].size();
	//if (n != 0)
	//{
	//	int m = board[0].size();
	//	for (size_t i = 0; i < m; i++)
	//	{
	//		edgedfs(i, n - 1, board, m, n);
	//		edgedfs(i, 0, board, m, n);
	//	}
	//	for (size_t i = 0; i < n; i++)
	//	{
	//		edgedfs(0, i, board, m, n);
	//		edgedfs(m - 1, i, board, m, n);
	//	}

	//	for (size_t i = 0; i < m; i++)
	//	{
	//		for (size_t j = 0; j < n; j++)
	//		{
	//			if (idx[i][j] == 0 && board[i][j] == 'o') dfs(i, j, m, n, board);
	//		}
	//	}

	//	//for (size_t i = 0; i < m; i++)
	//	//{
	//	//	for (size_t j = 0; j < n; j++)
	//	//	{
	//	//		cout << board[i][j] << " ";
	//	//	}
	//	//	cout << endl;
	//	//}

	//	//for (size_t i = 0; i < m; i++)
	//	//{
	//	//	for (size_t j = 0; j < n; j++)
	//	//	{
	//	//		cout << idx[i][j] << " ";
	//	//	}
	//	//	cout << endl;
	//	//}
	//}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << idx[j][i] << " ";
		}
		cout << endl;
	}


}

//void edgedfs(int r, int c, vector<vector<char>> &board)
//{
//	if (r < 0 || r >= m || c < 0 || c >= n)	return;
//	if (idx[r][c] == -1 || board[r][c] != 'o') return;
//	idx[r][c] = -1;
//	for (size_t dr = -1; dr <= 1; dr++)
//	{
//		for (size_t dc = -1; dc <= 1; dc++)
//		{
//			if (dr == 0 || dc == 0) edgedfs(r + dr, c + dc, board);
//		}
//	}
//}
//
//void dfs(int r, int c)
//{
//	if (r < 0 || r >= m || c < 0 || c >= n)	return;
//	if (idx[r][c] == -1 || board[r][c] != 'o') return;
//	board[r][c] = 'x';
//	idx[r][c] = 1;
//	for (size_t dr = -1; dr <= 1; dr++)
//	{
//		for (size_t dc = -1; dc <= 1; dc++)
//		{
//			if (dr == 0 || dc == 0) dfs(r + dr, c + dc);
//		}
//	}
//}


int main()
{

	vector<vector<char>> board(4, vector<char> (6, 'x'));
	string a[4] = { "XOXOXO", "OXOXOX", "XOXOXO", "OXOXOX" };
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			board[i][j] = a[i][j];
		}
	}
	//board[1][1] = 'o'; board[2][1] = 'o'; board[2][2] = 'o'; board[1][3] = 'o';
	//memset(idx, 0, sizeof(idx));
	//for (size_t i = 0; i < m; i++)
	//{
	//	edgedfs(i, n - 1, board);
	//	edgedfs(i, 0, board);
	//}
	//for (size_t i = 0; i < n; i++)
	//{
	//	edgedfs(0, i, board);
	//	edgedfs(m - 1, i, board);
	//}

	//for (size_t i = 0; i < m; i++)
	//{
	//	for (size_t j = 0; j < n; j++)
	//	{
	//		cout << idx[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//int cnt = 0;
	//for (size_t i = 0; i < m; i++)
	//{
	//	for (size_t j = 0; j < n; j++)
	//	{
	//		if (idx[i][j] == 0 && board[i][j] == 'o') dfs(i, j);
	//	}
	//}

	solve(board);

	system("pause");
	return 0;
}

