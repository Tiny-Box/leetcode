#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

//// private不能继承
//class Base
//{
//private:
//	int b_number;
//public:
//	Base(){}
//	Base(int i) : b_number(i) { }
//	int get_number() { return b_number; }
//	void print() { cout << b_number << endl; }
//};
//class Derived : public Base
//{
//private:
//	int d_number;
//
//public:
//	// constructor, initializer used to initialize the base part of a Derived object.
//	Derived(int i, int j) : Base(i), d_number(j) { };
//	// a new member function that overrides the print( ) function in Base
//	void print()
//	{
//		cout << get_number() << " ";
//		// access number through get_number( )
//		cout << d_number << endl;
//	}
//};

//// 没有虚析构函数，继承类里不能有析构
//class Thing
//{
//public:
//	virtual void what_Am_I() { cout << "I am a Thing./n"; }
//	~Thing(){ cout << "Thing destructor" << endl; }
//};
//
//class Animal : public Thing
//{
//public:
//	virtual void what_Am_I() { cout << "I am an Animal./n"; }
//	~Animal(){ cout << "Animal destructor" << endl; }
//};

// 纯虚函数配多态
//class Point
//{
//private:
//	double x;
//	double y;
//public:
//	Point(double i, double j) : x(i), y(j) { }
//	void print() const
//	{
//		cout << "(" << x << ", " << y << ")";
//	}
//};
//
//class Figure
//{
//private:
//	Point center;
//public:
//	Figure(double i = 0, double j = 0) : center(i, j) { }
//
//	Point& location()
//	{
//		return center;
//	}                  // return an lvalue
//	void move(Point p)
//	{
//		center = p;
//		draw();
//	}
//
//	virtual void draw() = 0; // draw the figure
//	virtual void rotate(double) = 0;
//	// rotate the figure by an angle                
//};
//
//class Circle : public Figure
//{
//private:
//	double radius;
//public:
//	Circle(double i = 0, double j = 0, double r = 0) : Figure(i, j), radius(r) { }
//	void draw()
//	{
//		cout << "A circle with center ";
//		location().print();
//		cout << " and radius " << radius << endl;
//	}
//	void rotate(double)
//	{
//		cout << "no effect.\n";
//	}        // must be defined
//};
//
//class Square : public Figure
//{
//private:
//	double side;        // length of the side
//	double angle;        // the angle between a side and the x-axis
//public:
//	Square(double i = 0, double j = 0, double d = 0, double a = 0) : Figure(i, j), side(d), angle(a) { }
//	void draw()
//	{
//		cout << "A square with center ";
//		location().print();
//		cout << " side length " << side << ".\n"
//			<< "The angle between one side and the X-axis is " << angle << endl;
//	}
//	void rotate(double a)
//	{
//		angle += a;
//		cout << "The angle between one side and the X-axis is " << angle << endl;
//	}
//	void vertices()
//	{
//		cout << "The vertices of the square are:\n";
//		// calculate coordinates of the vertices of the square
//	}
//};

//// 多继承
//class A
//{
//private:
//	int a;
//public:
//	A(int i) : a(i) { }
//	virtual void print()        { cout << "A: " << a << " A is over." << endl; }
//	int get_a() { return a; }
//};
//class B
//{
//private:
//	int b;
//public:
//	B(int j) : b(j) { }
//	void print()        { cout << "B: " << b << " B is over." << endl; }
//	int get_b() { return b; }
//};
//
//class C : public B, public A
//{
//	int c;
//public:
//	C(int i, int j, int k) : A(i), B(j), c(k) { }
//	void print()        { cout << "C_p: " << endl; A::print(); B::print(); cout << endl << "C_p is over." << endl; }
//	// use print( ) with scope resolution
//	void get_ab()        { cout << "C_ab: " << get_a() << " " << get_b() << " C_ab is over"<< endl; }
//	// use get_a( ) and get_b( ) without scope resolution
//};

//共同基类的多继承, 每次只调用基类的函数
//class R
//{
//	int r;
//public:
//	R(int anInt){ r = anInt; };
//	void printOn(){ cout << "r=" << r << endl; };
//};
//
//class A : public R
//{
//	int a;
//public:
//	A(int int1, int int2) :R(int2){ a = int1; };
//};
//
//class B : public R
//{
//	int b;
//public:
//	B(int int1, int int2) :R(int2){ b = int1; };
//};
//
//class C : public A, public B
//{
//	int c;
//public:
//	C(int int1, int int2, int int3) :A(int2, int3), B(int2, int3){ c = int1; }
//};

//// 共同基类的正确用法，继承虚基类
//class R
//{
//	int r;
//public:
//	R(int x = 0) : r(x) { }   // constructor in R
//	void f(){ cout << "r=" << r << endl; }
//	void printOn(){ cout << "printOn R=" << r << endl; }
//};
//
//class A : public virtual R
//{
//	int a;
//public:
//	A(int x, int y) : R(x), a(y)  { } // constructor in A
//	void f(){ cout << "a=" << a << endl; R::f(); }
//};
//
//class B : public virtual R
//{
//	int b;
//public:
//	B(int x, int z) : R(x), b(z) { }// constructor in B
//	void f(){ cout << "b=" << b << endl; R::f(); }
//};
//
//class C : public A, public B
//{
//	int c;
//public:
//	// constructor in C, which constructs an R object first
//	C(int x, int y, int z, int w) : R(x), A(x, y), B(x, z), c(w) { }
//
//	void f(){ cout << "c=" << c << endl; A::f(); B::f(); }
//};

// 访问权限
//class Base
//{
//private:
//	int priv;
//protected:
//	int prot;
//	int get_priv() { return priv; }
//public:
//	int publ;
//	Base();
//	Base(int a, int b, int c) : priv(a), prot(b), publ(c) { }
//	int get_prot() { return prot; }
//	int get_publ() { return publ; }
//};
//
//class Derived1 : private Base        // private inheritance
//{
//public:
//	Derived1(int a, int b, int c) : Base(a, b, c) { }
//	int get1_priv() { return get_priv(); }
//	// priv not accessible directly
//	int get1_prot() { return prot; }
//	int get1_publ() { return publ; }
//};
//
//class Leaf1 : public Derived1
//{
//public:
//	Leaf1(int a, int b, int c) : Derived1(a, b, c) { }
//	void print()
//	{
//		cout << "Leaf1 members: " << get1_priv() << " "
//			//                        << get_priv( )        // not accessible
//			<< get1_prot() << " "
//			//                        << get_prot( )         // not accessible
//			//                        << publ         // not accessible
//			<< get1_publ() << endl;
//	}  // data members not accessible.  get_ functions in Base not accessible
//};
//
//class Derived2 : protected Base // protected inheritance
//{
//public:
//	Derived2(int a, int b, int c) : Base(a, b, c) { }
//};
//
//class Leaf2 : public Derived2
//{
//public:
//	Leaf2(int a, int b, int c) : Derived2(a, b, c) { }
//	void print()
//	{
//		cout << "Leaf2 members: " << get_priv() << " "
//			//                        << priv                 // not accessible
//			<< prot << " "
//			<< publ << endl;
//	}  // public and protected data members accessible.  get_ functions in Base accessible. 
//};
//
//class Derived3 : public Base  // public inheritance
//{
//public:
//	Derived3(int a, int b, int c) : Base(a, b, c) { }
//};
//
//class Leaf3 : public Derived3
//{
//
//public:
//	Leaf3(int a, int b, int c) : Derived3(a, b, c) { }
//	void print()
//	{
//		cout << "Leaf3 members: " << get_priv() << " "
//			<< prot << " "
//			<< publ << endl;
//	}  // public and protected data members accessible.  get_ functions in Base accessible
//};

class Baseclass{
private:
	int b_num;
public:
	Baseclass() {}             //含有大括号，是定义，不用分号；如果声明，则需要分号
	Baseclass(int a) :b_num(a)  //初始化列表方式
	{  }
	int getnum() { return b_num; }
	void print()
	{
		cout << b_num << endl;
	}
};
class externed :public Baseclass{
private:
	int d_num;
public:
	externed(int i, int j) :Baseclass(i), d_num(j){}

	void print()
	{
		cout << getnum() << endl;
		cout << d_num << endl;
	}
};


int main()
{
	// example 1
	//Base a(2);
	//Derived b(3, 4);

	//cout << "a is ";
	//a.print();                // print( ) in Base
	//cout << "b is ";
	//b.print();                // print( ) in Derived
	//cout << "base part of b is ";
	//b.Base::print();                // print( ) in Base
	
	// example 2
	//Thing *t = new Thing;
	//Animal*x = new Animal;
	//Thing* array[2];

	//array[0] = t;                                // base pointer
	//array[1] = x;

	//for (int i = 0; i<2; i++)  array->what_Am_I();

	//delete array[0];
	//delete array[1];

	// example 3
	//Circle c(1, 2, 3);
	//Square s(4, 5, 6);
	//Figure *f = &c, &g = s;

	//f->draw();
	//f->move(Point(2, 2));

	//g.draw();
	//g.rotate(1);

	//s.vertices();
	//// Cannot use g here since vertices( ) is not a member of Figure.

	// example 4
	//C x(5, 8, 10);
	//A* ap = &x;
	//B* bp = &x;

	//ap->print();                // use C::print( );
	//bp->print();                // use B::print( );
	////        bp -> A::print( );                // as if x is inherited from B only,
	//// cannot access A::print( );
	//x.A::print();                // use A::print( );
	//x.get_ab();

	// example 5
	//int i;
	//R rr(10);
	//A aa(20, 30);
	//B bb(40, 50);
	//C cc(5, 7, 9);
	//rr.printOn();
	//aa.printOn();                  //inherits R printOn  
	//bb.printOn();                   //inherits R printOn
	////cc.printOn();                  //would give error
	// example 6
	//R rr(1000);
	//A aa(2222, 444);
	//B bb(3333, 111);
	//C cc(1212, 345, 123, 45);
	//cc.printOn();     //uses R printOn but only 1 R..no ambiguity
	//cc.f();                // shows multiple call of the R::f()

	// example 7
	//Derived1 d1(1, 2, 3);
	//Derived2 d2(4, 5, 6);
	//Derived3 d3(7, 8, 9);

	////        cout << d1.publ;                // not accessible
	////        cout << d1.get_priv( );        // not accessible
	////        cout << d2.publ;                // not accessible
	////        cout << d2.get_priv( );        // not accessible
	//cout << d3.publ;                // OK
	//cout << d3.get_prot();        // OK

	//Leaf1 lf1(1, 2, 3);
	//Leaf2 lf2(4, 5, 6);
	//Leaf3 lf3(7, 8, 9);

	////         cout << lf1.publ << endl;                    // not accessible
	////         cout << lf2.publ << endl;                // not accessible
	//cout << lf3.publ << endl;                 // OK

	Baseclass a(10);
	a.print();         //10
	a.getnum();        //10
	externed b(2, 8);
	b.print();         //8,8
	b.Baseclass::print();  //8. 

	int t = 'x';
	cout << t << endl;
	getchar();
	return 0;
}
