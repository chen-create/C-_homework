#include<iostream>
using namespace std;
class B0
{
	public:
		virtual void display()//���Ա���� virtual 
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
//��ͨ����
void fun(B0 *ptr)//ָ��B0������ָ�� 
{
	ptr->display();//
}

int main()
{
	B0 b0,*P;//�����������b0��ָ��P
	//�������������b1 d1 
	B1 b1;
	D1 d1;
	//�麯��ͨ��ָ������ã�ִ��ʱ�����
	//ָ��ָ��Ķ�����࣬���������ĸ�����
	//��ָ������ʲ�ͬ 
	p=&b0;
	fun(p);//���û���B0�ĺ�����Ա 
	p=&b1;
	fun(p);
	p=&d1;
	fun(p);
}







