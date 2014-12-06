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

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<time.h>
#include<queue>
using namespace std;

int reverse(int x)
{
	int flag = 0;

	if (x == -2147483647 - 1)
	{
		return 0;
	}

	if (x < 0)
	{
		flag = 1;	x = 0 - x;
	}


	if (x % 10 == 0)
	{
		while (x % 10 == 0 && x != 0)
			x /= 10;
	}
	int i;
	for (i = 0; x != 0; x /= 10)
	{
		if (double(i * 10 + x % 10) > 214748364 && x >= 10)
			return 0;
		else
			i = i * 10 + x % 10;
	}

	return (flag == 0) ? (i) : (0 - i);
}

bool isPalindrome2(int x) 
{
	if (x < 0)
		return false;
	

	return x == reverse(x);
}

int digit(int x, int i){
	// digit at index, 0-indexed
	// assert i >= 0;
	// assert i < length(x);
	// trim off all digits from 0 to i-1
	int quotient = (int)(x / pow((double)10, (double)i));
	// return ith digit
	return quotient % 10;
}
int length(int x){
	int length = 0;
	while (x != 0){
		x /= 10;
		length++;
	}
	return length;
}
bool isPalindrome(int x) {
	// This logic is very similar to the string version of solving the problem
	// The runtime is O(n) and the space complexity is O(1)

	// String sent = (new Integer(x)).toString();
	// int start =  0;
	// int end = sent.length()-1;
	// while(start < end){
	//     if (sent.charAt(start++) != sent.charAt(end--)){
	//       return false; 
	//     }
	// }
	// return true;

	if (x < 0) return false;
	int end = length(x) - 1;
	int start = 0;
	while (start < end) {
		if (digit(x, start++) != digit(x, end--)){
			return false;
		}
	}
	return true;



}

int main()
{
	clock_t start, finish;
	start = clock();
	cout << isPalindrome(122222221);
	finish = clock();
	cout << start << " " << finish << " " << (double)(finish - start)/CLOCKS_PER_SEC << endl;

	start = clock();
	cout << isPalindrome2(122222221);
	finish = clock();
	cout << start << " " << finish << " " << (double)(finish - start) / CLOCKS_PER_SEC << endl;
	getchar();
	return 0;
}

