
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
#include <algorithm> 
#include <unordered_map>

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
	vector<int> preorder;
	vector<int> inorder;
	vector<int> postorder;
	Btree()
	{
		root = NULL;
	}
	void create_Btree(int);
	TreeNode *bst(ListNode *);
	TreeNode *tobst(vector<int> &num, int i, int j);
	TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder);
	TreeNode* buildTreeHelper(vector<int>& post, int is, int ie, int ps, int pe, unordered_map<int, int>& inorder_map);
	void Preorder(TreeNode *);                  //先序遍历
	void Inorder(TreeNode *);                   //中序遍历
	void Postorder(TreeNode *);                 //后序遍历
	void display1() { Preorder(root); cout << endl; }
	void display2() { Inorder(root); cout << endl; }
	void display3() { Postorder(root); cout << endl; }
	void display4()
	{
		
		cout << "over" << endl;
	}

	void ToBST(ListNode *head);
	int count(TreeNode *);                      //计算二叉树的个数
	int findleaf(TreeNode *);                   //求二叉树叶子的个数
	int findnode(TreeNode *);                   //求二叉树中度数为1的结点数量,这是当初考数据结构时候的最后一道题目
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

TreeNode Btree::*buildTree(vector<int> &inorder, vector<int> &postorder) {
	unordered_map<int, int> inorder_map;
	// we need a map to look up the position of root in inorder, so
	// that we can divide the tree into separate subtrees,
	// reduces the complexity from n^2 to n assuming good hashing by unodered_map
	for (int i = 0; i < inorder.size(); ++i) {
		inorder_map[inorder[i]] = i;
	}
	return buildTreeHelper(postorder, 0, inorder.size() - 1, 0, postorder.size() - 1, inorder_map);
}

TreeNode Btree::*buildTreeHelper(vector<int>& post, int is, int ie, int ps, int pe, unordered_map<int, int>& inorder_map) {

	if (is > ie || ps > pe) {
		return NULL;
	}
	int root_val = post[pe];
	TreeNode* root = new TreeNode(root_val);
	int i = inorder_map.find(root_val)->second;
	// number of nodes in left subtree
	int l = i - is;
	root->left = buildTreeHelper(post, is, is + l - 1, ps, ps + l - 1, inorder_map);
	root->right = buildTreeHelper(post, is + l + 1, ie, ps + l, pe - 1, inorder_map);

	return root;
}


TreeNode *Btree::tobst(vector<int> &num, int i, int j)
{
	
	if (i == j)
		return nullptr;

	TreeNode* root = new TreeNode(num.at((j - i) / 2 + i));

	root->right = tobst(num, (i + j) / 2 + 1, j);
	root->left = tobst(num, i, (i + j) / 2 - 1);
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
		return count(p->left) + count(p->right) + 1;      //这是运用了函数嵌套即递归的方法。
}

void Btree::ToBST(ListNode *head)
{
	if (head != NULL)
	{
		create_Btree(head->val);
		ToBST(head->next);
	}
}

void Btree::Preorder(TreeNode *temp)    //这是先序遍历二叉树，采用了递归的方法。
{
	if (temp != NULL)
	{
		preorder.push_back(temp->val);
		cout << temp->val << " ";
		Preorder(temp->left);
		Preorder(temp->right);
	}
}


void Btree::Inorder(TreeNode *temp)      //这是中序遍历二叉树，采用了递归的方法。
{
	if (temp != NULL)
	{
		Inorder(temp->left);
		inorder.push_back(temp->val);
		cout << temp->val << " ";
		Inorder(temp->right);
	}
}
void Btree::Postorder(TreeNode *temp)     //这是后序遍历二叉树，采用了递归的方法。
{
	if (temp != NULL)
	{
		Postorder(temp->left);
		Postorder(temp->right);
		postorder.push_back(temp->val);
		cout << temp->val << " ";
	}
}



void main()
{
	Btree A;
	int array1[] = { 7, 4, 2, 3, 15, 35, 6, 45, 55, 20, 1, 14, 56, 57, 58 };
	int array2[] = { 2, 1 };
	int array[] = { 4, 2, 6, 1, 3, 5, 7 };
	int k;
	k = sizeof(array1) / sizeof(array1[0]);
	cout << "建立排序二叉树顺序: " << endl;
	for (int i = 0; i<k; i++)
	{
		cout << array1[i] << " ";
		A.create_Btree(array1[i]);
	}
	cout << endl;
	cout << endl << "先序遍历序列: " << endl;
	A.display1();
	cout << endl << "中序遍历序列: " << endl;
	A.display2();
	cout << endl << "后序遍历序列: " << endl;
	A.display3();
	cout << endl << "tobst is answer." << endl;



	system("PAUSE");
}