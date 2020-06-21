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
//��ͨ����
void fun(B *b)//ָ��B0������ָ�� 
{
	b->fun1();
	//���Խ�bת��ΪD1��ָ�� 
	D1 *d= dynamic_cast<D1 *>(b);
	//�ж�ת���Ƿ�ɹ�
	if(d!=0) 
		d->fun2();
}

int main()
{
	B b;//fun1();����Ĳ�����ת��������û�е���fun2(); 
	fun(&b);
	D1 d1;//D1::fun1(); ת���ɹ���D1::fun2(); 
	fun(&d1);
	D2 d2;//D2::fun1();ת���ɹ���D2::fun2(); 
	fun(&d2);
	return 0;
}

/*
B::fun1()
D1::fun1()
D1::fun2()
D2::fun1()
*/

