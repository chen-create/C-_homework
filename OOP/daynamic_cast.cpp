#include<iostream>
using namespace std;
class B
{
	public:
		virtual void fun1() 
		{
			cout<<"B::fun1()"<<endl;
		}
		virtual ~B() {}
};
class D1:public B
{
	public:
		virtual void fun1()
		{
			cout<<"D1::fun1()"<<endl;
		}
		virtual void fun2()
		{
			cout<<"D1::fun2()"<<endl;
		}
};
class D2:public B
{
	public:
		virtual void fun1()
		{
			cout<<"D2::fun1()"<<endl;
		}
		virtual void fun2()
		{
			cout<<"D2::fun2()"<<endl;
		}
};
//普通函数
void fun(B *b)//指向B0函数的指针 
{
	b->fun1();
	//尝试将b转换为D1的指针 
	D1 *d= dynamic_cast<D1 *>(b);
	//判断转换是否成功
	if(d!=0) 
		d->fun2();
}

int main()
{
	B b;//fun1();基类的不可以转换，所以没有调用fun2(); 
	fun(&b);
	D1 d1;//D1::fun1(); 转换成功，D1::fun2(); 
	fun(&d1);
	D2 d2;//D2::fun1();转换成功，D2::fun2(); 
	fun(&d2);
	return 0;
}

/*
B::fun1()
D1::fun1()
D1::fun2()
D2::fun1()
*/

