
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
#include <stack>

using namespace std;

//stack<int> stemp;
vector<vector<int> >asum;
vector<int> Sum;

struct TreeNode
{
	int val;
	TreeNode *left, *right, *next;
	TreeNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL){}
};
class Btree
{
	static int n;
	static int m;
public:
	TreeNode *root;
	Btree()
	{
		root = NULL;
	}
	void create_Btree(int);
	TreeNode *bst(ListNode *);
	TreeNode *tobst(int i);
	void Preorder(TreeNode *);                  //�������
	void inorder(TreeNode *);                   //�������
	void Postorder(TreeNode *);                 //�������
	void display1() { Preorder(root); cout << endl; }
	void display2() { inorder(root); cout << endl; }
	void display3() { Postorder(root); cout << endl; }
	void display4()
	{
		cout << "over" << endl;
	}

	void ToBST(ListNode *head);
	int count(TreeNode *);                      //����������ĸ���
	int findleaf(TreeNode *);                   //�������Ҷ�ӵĸ���
	int findnode(TreeNode *);                   //��������ж���Ϊ1�Ľ������,���ǵ��������ݽṹʱ������һ����Ŀ
};
int Btree::n = 0;
int Btree::m = 0;
void Btree::create_Btree(int x)
{
	TreeNode *newnode = new TreeNode(x);
	if (root == NULL)
		root = newnode;
	else
	{
		TreeNode *back;
		TreeNode *current = root;
		back = current;
		while (current != NULL)
		{
			back = current;
			if (current->val>x)
				current = current->left;
			else
				current = current->right;
		}
		if (back->val>x)
			back->left = newnode;
		else
			back->right = newnode;
	}
}

TreeNode *Btree::tobst(vector<int> &num, int i)
{

	return root;
}

TreeNode *Btree::bst(ListNode *head)
{

	if (!head)
		return nullptr;


	ListNode **slow = &head, **fast = &head;

	while (*fast && (*fast)->next){
		fast = &((*fast)->next);
		slow = &((*slow)->next);
		if (*fast)
			fast = &((*fast)->next);
	}

	TreeNode* root = new TreeNode((*slow)->val);
	root->right = bst((*slow)->next);
	*slow = NULL;
	root->left = bst(head);

	return root;

}


int Btree::count(TreeNode *p)
{
	if (p == NULL)
		return 0;
	else
		return count(p->left) + count(p->right) + 1;      //���������˺���Ƕ�׼��ݹ�ķ�����
}

void Btree::ToBST(ListNode *head)
{
	if (head != NULL)
	{
		create_Btree(head->val);
		ToBST(head->next);
	}
}

void Btree::Preorder(TreeNode *temp)    //������������������������˵ݹ�ķ�����
{
	if (temp != NULL)
	{
		cout << temp->val << " ";
		Preorder(temp->left);
		Preorder(temp->right);
	}
}


void Btree::inorder(TreeNode *temp)      //������������������������˵ݹ�ķ�����
{
	if (temp != NULL)
	{
		inorder(temp->left);
		cout << temp->val << " ";
		inorder(temp->right);
	}
}
void Btree::Postorder(TreeNode *temp)     //���Ǻ�������������������˵ݹ�ķ�����
{
	if (temp != NULL)
	{
		Postorder(temp->left);
		Postorder(temp->right);
		cout << temp->val << " ";
	}
}



void main()
{
	Btree A;
	int array2[] = { 7, 4, 2, 3, 15, 35, 6, 45, 55, 20, 1, 14, 56, 57, 58 };
	int array1[] = { 1 };
	int array[] = { 4, 2, 6, 1, 3, 5, 7 };
	int k;
	k = sizeof(array1) / sizeof(array1[0]);
	cout << "�������������˳��: " << endl;
	for (int i = 0; i<k; i++)
	{
		cout << array1[i] << " ";
		A.create_Btree(array1[i]);
	}
	cout << endl;
	cout << endl << "�����������: " << endl;
	A.display1();
	cout << endl << "�����������: " << endl;
	A.display2();
	cout << endl << "�����������: " << endl;
	A.display3();
	cout << endl << "bst is answer." << endl;



	system("PAUSE");
}