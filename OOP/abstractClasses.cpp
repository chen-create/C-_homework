#include<iostream>
using namespace std;
class B0
{
	public:
		virtual void display()=0;//���麯����Ա 
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
//��ͨ����
void fun(B0 *ptr)//ָ��B0������ָ�� 
{
	ptr->display();//
}

int main()
{
	B0 *P;
	//�������������b1 d1 
	B1 b1;
	D1 d1;
	//����������ĺ�����Ա 
	p=&b1;
	fun(p);
	p=&d1;
	fun(p);
}


