#include <iostream> 
using namespace std;
//���������� 
class complex
{
	public:
		complex(double r=0.0,double i=0.0)
			{ real=r;image=i;}
		//+��-����Ϊ��Ա���� 
		complex operator +(complex c2);
		complex operator -(complex c2);
		void display();//��ʾ������ֵ 
	private:
		double real;
		double image;
};
//���غ���ʵ�� 
complex complex::operator +(complex c2) //��������complex �����޶���complex ���� 
{
	complex c;
	c.real=c2.real+real;
	c.image=c2.image+image;
	return complex(c.real,c.image);
} 
complex complex::operator -(complex c2) 
{
	complex c;
	c.real=real-c2.real;
	c.image=image-c2.image;
	return complex(c.real,c.image);
}
void complex::display()
{	cout<<"("<<real<<"."<<image<<")"<<endl; }

int main()
{
	complex c1(5,4),c2(2,10),c3;//������������� 
	c3=c1-c2;
	cout<<"c3=c1-c2=";
	c3.display();
	c3=c1+c2;
	cout<<"c3=c1+c2=";
	c3.display();
}
/*���н����
c3=c1-c2=(3.-6)
c3=c1+c2=(7.14)*/ 






