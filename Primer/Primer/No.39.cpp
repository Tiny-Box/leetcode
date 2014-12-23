
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
#include <set>
#include <queue>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL){}
};

ListNode *create(int A[], int n)
{
	ListNode *aspros, *deferos, *head;
	int i = 0;
	head = NULL;
	deferos = NULL;
	for (int i = 0; i < n; i++)
	{
		aspros = new ListNode(A[i]);
		if (i == 0)
			head = aspros;
		else
		{
			deferos->next = aspros;
		}
		deferos = aspros;
	}
	deferos->next = NULL;

	return head;
}

ListNode *oj(ListNode *head)
{
	if (head != NULL)
	{
		ListNode *tmp = head;
		vector<int> g;
		while (tmp != NULL)
		{
			g.push_back(tmp->val);
			tmp = tmp->next;
		}

		ListNode *aspros, *deferos, *root;
		int i = 0;
		root = NULL;
		deferos = NULL;

		int length = g.size() - 1;
		for (; i < length / 2; i++)
		{
			aspros = new ListNode(g[i]);
			if (i == 0)
				root = aspros;
			else
			{
				deferos->next = aspros;
			}
			deferos = aspros;

			aspros = new ListNode(g[length - i]);
			deferos->next = aspros;
			deferos = aspros;

		}
		if (g.size() % 2 == 0)
		{
			aspros = new ListNode(g[i]);
			if (i == 0)
				root = aspros;
			else
			{
				deferos->next = aspros;
			}
			deferos = aspros;

			aspros = new ListNode(g[length - i]);
			deferos->next = aspros;
			deferos = aspros;

			deferos->next = NULL;
		}

		else
		{
			aspros = new ListNode(g[i]);
			if (i == 0)
				root = aspros;
			else
			{
				deferos->next = aspros;
			}
			deferos = aspros;
		}

		return root;
	}
	else
		return NULL;
}

int countlist(ListNode *root)
{
	ListNode *tmp;
	tmp = root;
	int n = 0;
	while (tmp != NULL)
	{
		n++;
		tmp = tmp->next;
	}
	return n;
}

ListNode *modifylist(ListNode *quickptr, ListNode *head)
{
	if (quickptr->next == NULL)
	{
		return head;
	}

	ListNode *back, *parent, *slowptr;
	back = quickptr;
	parent = back->next;
	slowptr = head;

	slowptr = modifylist(parent, head);

	if (slowptr == quickptr || slowptr == parent)
	{
		return slowptr;
	}

	else if (parent->next == NULL)
	{
		ListNode *newnode = new ListNode(parent->val);
		newnode->next = slowptr->next;
		slowptr->next = newnode;
		slowptr = newnode->next;
		back->next = NULL;
		delete parent;
		return slowptr;
	}

	return slowptr;

}


void printlist(ListNode *head)
{
	ListNode *tmp;
	tmp = head;
	while (tmp != NULL)
	{
		cout << tmp->val << ' ';
		tmp = tmp->next;
	}
	cout << endl;
	//tmp = head;
	//set<int, cmp> g;
	//while (tmp != NULL)
	//{
	//	g.insert(tmp->val);
	//	tmp = tmp->next;
	//}
	//for (set<int, cmp>::iterator i = g.begin(); i != g.end(); i++)
	//{
	//	cout << *i << ' ';
	//}
	//cout << endl;
}

void Unittest(ListNode *root)
{
	ListNode *tmp, *back;
	back = NULL;
	tmp = root;
	while (tmp->next != NULL)
	{
		back = tmp;
		tmp = tmp->next;
	}

	ListNode *top, *parent;
	top = root;
	parent = new ListNode(tmp->val);
	parent->next = top->next;
	top->next = parent;
	back->next = NULL;
	delete tmp;

}

void ReorderList(ListNode *head)
{
	if (head == NULL || head->next == NULL)
		return;
	modifylist(head, head);
}


void main()
{
	int A[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int B[3] = { 1, 2, 3 };
	int C[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int D[2] = { 1, 2 };
	ListNode *root = create(C, 10);
	printlist(root);
	ReorderList(root);
	//Unittest(root);
	printlist(root);
	system("PAUSE");
}

