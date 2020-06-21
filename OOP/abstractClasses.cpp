#include<iostream>
using namespace std;
class B0
{
	public:
		virtual void display()=0;//纯虚函数成员 
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
	B0 *P;
	//声明派生类对象b1 d1 
	B1 b1;
	D1 d1;
	//调用派生类的函数成员 
	p=&b1;
	fun(p);
	p=&d1;
	fun(p);
}


