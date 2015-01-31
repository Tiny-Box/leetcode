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

bool cmp(const string &a, const string &b)
{
	//if (a.length() != b.length())
	//{
	//	return a.length() - b.length() > 0;
	//}
	//else
	//{
	//	return atoi(a.c_str()) > atoi(b.c_str());
	//}
	return stod(a + b) > stod(b + a);
}

string ItoS(int n)
{
	string s = "";
	if (n == 0)
		return "0";

	for (; n != 0; n /= 10)
	{
		s += (n % 10 + '0');
	}

	reverse(s.begin(), s.end());
	return s;
}

void vectorout(vector<string> v)
{
	for (vector<string>::iterator i = v.begin(); i != v.end(); ++i)
	{
		/* code */
		cout << *i << " ";
	}
}

string sortv(std::vector<string> v, char i)
{
	if (i == '0')
		return "0";

	sort(v.begin(), v.end(), cmp);

	string tmp = "";
	for (std::vector<string>::iterator i = v.begin(); i != v.end(); ++i)
	{
		/* code */
		//cout << *i << " ";
		tmp += *i;
	}
	//cout << tmp << endl;
	return tmp;
}

string largestNumber(vector<int> &num) 
{
	map<char, vector<string> > hash;
	for (vector<int>::iterator i = num.begin(); i != num.end(); ++i)
	{
		/* code */
		string tmp = ItoS(*i);
		hash[tmp[0]].push_back(tmp);
	}
	
	std::set<char> first;
	for (map<char, std::vector<string> >::iterator i = hash.begin(); i != hash.end(); ++i)
	{
		/* code */
		first.insert(i->first);
	}

	string lnumber = "";
	for (set<char>::reverse_iterator i = first.rbegin(); i != first.rend(); ++i)
	{
		/* code */
		lnumber += sortv(hash[*i], *i);
		//cout << "lnumber is : " << lnumber << endl;
	}

	// cout << lnumber << endl;
	
	 //// output test
	 //for (map<char, std::vector<string> >::iterator i = hash.begin(); i != hash.end(); ++i)
	 //{
	 //	/* code */
	 //	cout << i->first << " =>";
	 //	vectorout(i->second);
	 //	cout << endl;
	 //}

	 //for (set<char>::reverse_iterator i = first.rbegin(); i != first.rend(); ++i)
	 //{
	 //	/* code */
	 //	cout << *i << " " ;
	 //	cout << endl;
	 //}
	return lnumber;
}

int main(int argc, char const *argv[])
{
	vector<int> v;

	//int test[100] = { 57, 76, 70, 64, 94, 87, 92, 63, 1, 4, 20, 90, 98, 93, 76, 13, 59, 61, 84, 90, 95, 89, 16, 96, 18, 32, 82, 82, 73, 16, 66, 10, 25, 23, 58, 24, 82, 20, 18, 92, 31, 14, 10, 72, 94, 87, 64, 43, 51, 22, 53, 18, 34, 18, 12, 82, 79, 76, 33, 14, 53, 3, 25, 65, 60, 96, 15, 67, 13, 32, 26, 77, 88, 16, 84, 52, 40, 70, 95, 21, 48, 46, 24, 63, 92, 63, 93, 21, 12, 93, 62, 48, 66, 21, 92, 57, 32, 49, 78, 80 };

	//for (int i = 0; i < 100; ++i)
	//{
	//	v.push_back(test[i]);
	//}
	v.push_back(0);
	v.push_back(0);
	cout << largestNumber(v);
	system("pause");
	return 0;
}
