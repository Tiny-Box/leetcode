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

using namespace std;

void DIV(int divident, int divisor, int precision)
{
	if (divisor == 0) //除数为零，显示错误信息并结束程序 
	{
		cout << "Zero divisor error!\n"; exit(system("pause"));
	}
	if ((divident < 0) ^ (divisor < 0)) cout << '-'; //两数若异号，先印出负号 
	if (divident < 0)  divident = -divident; //被除数取其绝对值 
	if (divisor < 0)  divisor = -divisor; ////除数取其绝对值
	cout << divident / divisor; //印出整数部份 
	if (divident %= divisor) cout << '.'; //若带有小数，印出小数点 
	//迴圈印出小数部份，直到除尽或已抵指定位数
	while ((divident %= divisor) && precision--)
		cout << ((divident *= 10) / divisor);
	cout << "\n";
}

bool isPrime(int n)  
{  
    if(n==1||n==2||n==3)    return true;  
    for(int i =2 ;i<n;i++)  
    {  
        if(n%i==0)  return false;  
    }  
    return true;  
} 


bool isRepeating(int numerator,int denominator)  
{  
    int simpleNum = 0;  
    int simpleDen = 0;  
    if(numerator<denominator)  
    {  
        for(int i = numerator;i>0;i--)  
        {  
            if(numerator%i==0&&denominator%i==0)  
            {  
                simpleNum = numerator/i;  
                simpleDen = denominator/i;  
                break;  
            }  
        }  
    }  
    else  
    {  
        for(int i = denominator;i>0;i--)  
        {  
            if(numerator%i==0&&denominator%i==0)  
            {  
                simpleNum = numerator/i;  
                simpleDen = denominator/i;  
                break;  
            }  
        }  
    }  
    //如果分数化简后分母除了2,5之外还有素因数，就是无限循环小数  
    for(int i = 2;i<=simpleDen;i++)  
    {  
        if(simpleDen%i==0)  
        {  
            if(isPrime(i))  
            {  
                if(i!=2&&i!=5)  return true;  
            }  
        }  
    }  
    return false;  
}  

string decpart(int n, int d)
{
	char c;
	c = (n *= 10) / d + '0';
	string tmp = "";
	tmp += c;
	map<string, int> hash;

	n = n % d;
	while ( n % d != 0)
	{
		if (c == n / d + '0')
		{
			if (hash[tmp] == 1)
			{
				tmp = "";
				for (map<string, int>::iterator i = hash.begin(); i != hash.end(); i++)
					tmp += (*i).first;
				return tmp;
			}
			else
			{
				hash[tmp] = 1;
				tmp = "";
			}

		}
		else
		{
			tmp += n / d + '0';
 			n = n % d;
		}
		n *= 10;
	}
	tmp += n / d + '0';
	return tmp;
}

string fractionToDecimal(int numerator, int denominator) 
{
	string intpart = "";

	if (numerator >= denominator)
	{
		char tmp[20];
		_itoa_s(numerator / denominator, tmp, 10);
		intpart = tmp;
		
	}

	

	return intpart;
}



int main(int argc, char const *argv[])
{
	int a = 100;
	int b = 59;
	cout << (isRepeating(a, b) ? ("Yes") : ("No")) << endl;
	cout << decpart(1, 7) << endl;
	//cout << fractionToDecimal(a, b) << endl;
	//double c = double(a) / double(b);
	//DIV(a, b, 200);
	//cout << c << endl;
	system("pause");
	return 0;
}
