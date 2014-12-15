
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
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> Pro;
vector<int> Product;

int getProduct(int A[], int p, int q, int n)
{
	int tmp = A[p];
	for (int i = 0; i < n-1; i++)
	{
		if (A[i] <= A[i + 1])
			tmp *= A[i+1];
		else
			return tmp;
	}

	return tmp;
}


int maxProduct(int A[], int n) 
{
	vector<int> Product;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		//Product.push_back(getProduct(A, i, n));
	}

	tmp = Product[0];
	for (vector<int>::iterator i = Product.begin()+1; i != Product.end(); i++)
	{
		tmp = (tmp>*i) ? (tmp) : (*i);
	}

	return tmp;
}

//int getProduct_ite(int A[], int i, int j)
//{
//	int tmp = A[i];
//	for (; i < j-1; i++)
//	{
//		if (A[i] <= A[i + 1])
//			tmp *= A[i + 1];
//		else
//			return tmp;
//	}
//
//	return tmp;
//}

int getProduct_ite(int A[], int i, int j, bool &flag)
{
	int tmp = A[i];
	for (; i < j; i++)
	{
		if (A[i] <= A[i + 1])
			tmp *= A[i + 1];
		else
		{
			flag = true;
			return tmp;
		}
			
	}

	return tmp;
}

int maxProduct_ite(int A[], int n)
{
	Pro.clear();
	Product.clear();
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			bool flag = false;
			Product.push_back(getProduct_ite(A, i, j, flag));
			Pro[to_string(i+1) + "," + to_string(j)] = getProduct_ite(A, i, j, flag);
			if (flag == true)
				j = n + 1;
		}
	}

	for (vector<int>::iterator i = Product.begin(); i != Product.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << endl;

	for (map<string, int>::iterator i = Pro.begin(); i != Pro.end(); i++)
	{
		cout << i->first << " : " << i->second << endl;
	}
	cout << endl;

	tmp = Product[0];
	for (vector<int>::iterator i = Product.begin() + 1; i != Product.end(); i++)
	{
		tmp = (tmp>*i) ? (tmp) : (*i);
	}

	return tmp;
}

int maxProduct_c(int A[], int n) {
	if (n < 1) return 0;
	int r = A[0];
	int max_p = A[0];
	// min存在的意义是为了负数成对的情况下反转
	int min_p = A[0];
	for (int i = 1; i<n; i++){
		int a = max_p*A[i];
		int b = min_p*A[i];
		// c存在的意义是为了有零的情况下重启
		int c = A[i];
		max_p = max(max(a, b), c);
		min_p = min(min(a, b), c);
		if (max_p > r) r = max_p;
	}
	return r;
}

void main()
{
	vector<int> tmp;
	int A[7] = { 1, 2, 0, 5, 6, 7, 8 };
	maxProduct_c(A, 7);
	int B[5] = { 2, -2, 5, -4, 1 };
	maxProduct_c(B, 5);

	int C[3] = { -4, -3, -2 };
	maxProduct_c(C, 3);

	system("PAUSE");
}

