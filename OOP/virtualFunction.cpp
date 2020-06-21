#include<iostream>
using namespace std;
class B0
{
	public:
		virtual void display()//虚成员函数 virtual 
		{
			cout<<"B0::display()"<<endl;
		}
};
class B1:public B0
{
	public:
		void display()
		{
			cout<<"B1::display()"<<endl;
		}
};
class D1:public B1
{
	public:
		void display()
		{
			cout<<"D1::display()"<<endl;
		}
};
//普通函数
void fun(B0 *ptr)//指向B0函数的指针 
{
	ptr->display();//
}

int main()
{
	B0 b0,*P;//声明基类对象b0和指针P
	//声明派生类对象b1 d1 
	B1 b1;
	D1 d1;
	//虚函数通过指针或引用，执行时会根据
	//指针指向的对象的类，决定调用哪个函数
	//与指针的性质不同 
	p=&b0;
	fun(p);//调用基类B0的函数成员 
	p=&b1;
	fun(p);
	p=&d1;
	fun(p);
}







