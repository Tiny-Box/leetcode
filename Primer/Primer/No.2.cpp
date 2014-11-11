//
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
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> getRow(int rowIndex) 
{
	int aspros, defteros;
	aspros = defteros = 0;
	queue<int> tmp;
	vector<int> Pascal;

	if (rowIndex == 0)
	{
		Pascal.push_back(1);
		return Pascal;
	}

	tmp.push(0);
	tmp.push(1);
	tmp.push(1);

	for (int i = 1; i < rowIndex; i++)
	{
		tmp.push(0);
		do
		{
			aspros = tmp.front();
			if (!tmp.empty())
				tmp.pop();
			defteros = tmp.front();
			tmp.push(aspros + defteros);
		} while (defteros != 0);
	}
	tmp.pop();
	while (!tmp.empty())
	{
		Pascal.push_back(tmp.front());
		tmp.pop();
	}

	return Pascal;
}

//int main()
//{
//	int length = 10;
//	vector<int> tmp;
//	vector<int> mystack;
//	for (int i = 0; i < length / 2; i++)
//	{
//		tmp.push_back(i + 1);
//	}
//    int	len = tmp.size() - 1;
//	for (int i = 0; i < length / 2 - 1; i++)
//	{
//		tmp.push_back(tmp.at(len - i - 1));
//	}
//	
//	for (int i = 0; i < tmp.size(); i++)
//	{
//		cout << tmp.at(i) << endl;
//	}
//
//	cout << ("请输入希望的三角层数：") << endl;
//	int num = 0;
//	cin >> num;
//	mystack = getRow(num);
//	//cout << ("您输入的是:") << num << endl;
//	//cout << '1' << endl;
//	//queue<int> cyc;
//	//int left, right;
//	//left = right = 0;
//	//cyc.push(0);     //设置循环队列首部有一个0，从而使得right值能都得到第一个有效数值
//	//cyc.push(1);
//	//cyc.push(1);     //初始循环队列为 0,1,1，这是开始迭代钱的初始值，以后每次由right值遍历有效数字并输出，right值为0时说明当前层输出完毕
//
//	//for (int floor = 1; floor<num; floor++){
//
//	//	cyc.push(0);     //每一次开始迭代之前，保证上一层尾部设置标志0
//	//	do{
//	//		left = cyc.front();
//	//		if (!cyc.empty())
//	//			cyc.pop();
//	//		right = cyc.front();
//	//		if (right != 0)
//	//			cout << right << ' ';
//	//		else
//	//			cout << endl;
//	//		cyc.push(left + right);
//	//	} while (right != 0);     //right值取到0，说明当前层已经输出完毕
//
//	//}//end for
//	//cyc.pop();
//	//while (!cyc.empty())
//	//{
//	//	mystack.push_back(cyc.front());
//	//	cyc.pop();
//	//}
//	//cout << '\n';
//
//	for (int i = 0; i < mystack.size(); i++)
//	{
//		cout << mystack[i] << ' ';
//	}
//
//
//
//	
//	system("PAUSE");
//}