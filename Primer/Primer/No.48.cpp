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

bool isPalindrome(string s)
{
	string tmp = s;
	reverse(tmp.begin(), tmp.end());

	return tmp.compare(s) == 0;
}

class Solution {
public:

	void dfs(string s, vector< vector<int> > &palindrome, vector< vector<string> > &res, int idx, vector<string>& tmp)
	{
		if (idx == s.size()) {
			res.push_back(tmp);
			return;
		}

		for (int i = 0; i < palindrome[idx].size(); ++i) {
			tmp.push_back(s.substr(idx, palindrome[idx][i] - idx + 1));
			dfs(s, palindrome, res, palindrome[idx][i] + 1, tmp);
			tmp.pop_back();
		}
	}



	vector<vector<string> > partition(string s)
	{
		std::vector<std::vector<string> > res;
		std::vector< std::vector<int> > palindrome(s.size(), vector<int>());
		vector< vector<bool> > mtx(s.size(), vector<bool>(s.size(), false));

		for (int len = 1; len <= s.size(); ++len) {
			for (int i = 0; i < s.size() - len + 1; ++i) {
				if (len == 1) {
					mtx[i][i] = true;
					palindrome[i].push_back(i);
				}
				else if (len == 2 && s[i] == s[i + 1]) {
					mtx[i][i + 1] = true;
					palindrome[i].push_back(i + 1);
				}
				else if (s[i] == s[i + len - 1] && mtx[i + 1][i + len - 2]) {
					mtx[i][i + len - 1] = true;
					palindrome[i].push_back(i + len - 1);
				}

			}
		}
		std::vector<string> tmp;
		dfs(s, palindrome, res, 0, tmp);
		return res;
	}

};


vector<vector<string>> partition(string s) 
{
	vector<vector<string> > hash;
	vector<string> tmp;

	string a = "";
	string b = "";

	//for (string::iterator i = s.begin(); i != s.end(); i++)
	//{
	//	for (string::iterator j = i; j != s.end(); j++)
	//	{
	//		a += *j;
	//		if (isPalindrome(a))
	//			tmp.push_back(a);
	//		else
	//		{
	//			a = *j;
	//			j--;
	//			//break;
	//		}
	//	}

	//	hash.push_back(tmp);
	//	a = "";
	//	tmp.clear();
	//}

	for (string::iterator i = s.begin(); i != s.end(); i++)
	{
		b += *i;
		if (i != s.begin() && i != s.end() - 1)
		{
			tmp.push_back(b);
		}
		for (string::iterator j = i; j != s.end(); j++)
		{
			if (isPalindrome(a + *j))
			{
				a += *j;
				if (j == s.end() - 1)
					tmp.push_back(a);
			}
			else
			{
				tmp.push_back(a);
				a = *j;
				if (j == s.end() - 1)
					tmp.push_back(a);
			}
		}

		//tmp.push_back(a);
		hash.push_back(tmp);
		a = "";
		tmp.clear();

	}

	for (size_t i = 0; i < hash.size(); i++)
	{
		for (size_t j = 0; j < hash[i].size(); j++)
		{
			cout << hash[i].at(j) << " ";
		}
		cout << endl;
	}

	return hash;
}



int main(int argc, char const *argv[])
{

	

	vector<vector<string> > tmp = partition("aab");

	system("pause");
	return 0;
}
