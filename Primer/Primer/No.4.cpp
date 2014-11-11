
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

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	void PreSum(TreeNode *temp, int sum, int tmp, bool &flag)
	{
		if (temp != NULL)
		{
			if (temp->val + tmp == sum && temp->left == NULL && temp->right == NULL)
				flag = true;
			else
			{
				tmp += temp->val;
				PreSum(temp->left, sum, tmp, flag);
				PreSum(temp->right, sum, tmp, flag);
			}
		}

	}

	bool hasPathSum(TreeNode *root, int sum) {
		bool flag = false;
		PreSum(root, sum, 0, flag);
		return flag;
	}
};

struct tree
{
	int data;
	tree *left, *right;
};
class Btree
{
	static int n;
	static int m;
public:
	tree *root;
	Btree()
	{
		root = NULL;
	}
	void create_Btree(int);
	void Preorder(tree *);                  //先序遍历
	void inorder(tree *);                   //中序遍历
	void Postorder(tree *);                 //后序遍历
	void PreSum(tree *, int Sum, int tmp, bool &flag);
	void display1() { Preorder(root); cout << endl; }
	void display2() { inorder(root); cout << endl; }
	void display3() { Postorder(root); cout << endl; }

	int count(tree *);                      //计算二叉树的个数
	int findleaf(tree *);                   //求二叉树叶子的个数
	int findnode(tree *);                   //求二叉树中度数为1的结点数量,这是当初考数据结构时候的最后一道题目
};
int Btree::n = 0;
int Btree::m = 0;
void Btree::create_Btree(int x)
{
	tree *newnode = new tree;
	newnode->data = x;
	newnode->right = newnode->left = NULL;
	if (root == NULL)
		root = newnode;
	else
	{
		tree *back;
		tree *current = root;
		back = current;
		while (current != NULL)
		{
			back = current;
			if (current->data>x)
				current = current->left;
			else
				current = current->right;
		}
		if (back->data>x)
			back->left = newnode;
		else
			back->right = newnode;
	}
}


int Btree::count(tree *p)
{
	if (p == NULL)
		return 0;
	else
		return count(p->left) + count(p->right) + 1;      //这是运用了函数嵌套即递归的方法。
}
void Btree::Preorder(tree *temp)    //这是先序遍历二叉树，采用了递归的方法。
{
	if (temp != NULL)
	{
		cout << temp->data << " ";
		Preorder(temp->left);
		Preorder(temp->right);
	}
}

void Btree::inorder(tree *temp)      //这是中序遍历二叉树，采用了递归的方法。
{
	if (temp != NULL)
	{
		inorder(temp->left);
		cout << temp->data << " ";
		inorder(temp->right);
	}
}
void Btree::Postorder(tree *temp)     //这是后序遍历二叉树，采用了递归的方法。
{
	if (temp != NULL)
	{
		Postorder(temp->left);
		Postorder(temp->right);
		cout << temp->data << " ";
	}
}
int Btree::findleaf(tree *temp)
{
	if (temp == NULL)return 0;
	else
	{
		if (temp->left == NULL&&temp->right == NULL)return n += 1;
		else
		{
			findleaf(temp->left);
			findleaf(temp->right);
		}
		return n;
	}
}
int Btree::findnode(tree *temp)
{
	if (temp == NULL)return 0;
	else
	{
		if (temp->left != NULL&&temp->right != NULL)
		{
			findnode(temp->left);
			findnode(temp->right);
		}
		if (temp->left != NULL&&temp->right == NULL)
		{
			m += 1;
			findnode(temp->left);
		}
		if (temp->left == NULL&&temp->right != NULL)
		{
			m += 1;
			findnode(temp->right);
		}
	}
	return m;
}


void main()
{
	Btree A;
	int array[] = { 7, 4, 2, 3, 15, 35, 6, 45, 55, 20, 1, 14, 56, 57, 58 };
	int k;
	k = sizeof(array) / sizeof(array[0]);
	cout << "建立排序二叉树顺序: " << endl;
	for (int i = 0; i<k; i++)
	{
		cout << array[i] << " ";
		A.create_Btree(array[i]);
	}
	cout << endl;
	cout << "二叉树节点个数： " << A.count(A.root) << endl;
	cout << "二叉树叶子个数：" << A.findleaf(A.root) << endl;
	cout << "二叉树中度数为1的结点的数量为：" << A.findnode(A.root) << endl;
	cout << endl << "先序遍历序列: " << endl;
	A.display1();
	cout << endl << "中序遍历序列: " << endl;
	A.display2();
	cout << endl << "后序遍历序列: " << endl;
	A.display3();

	system("PAUSE");
}
