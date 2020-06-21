#include <iostream> 
using namespace std;
//复数类声明 
class complex
{
	public:
		complex(double r=0.0,double i=0.0)
			{ real=r;image=i;}
		//+、-重载为成员函数 
		complex operator +(complex c2);
		complex operator -(complex c2);
		void display();//显示复数的值 
	private:
		double real;
		double image;
};
//重载函数实现 
complex complex::operator +(complex c2) //函数类型complex 类名限定符complex …… 
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
	complex c1(5,4),c2(2,10),c3;//声明复数类对象 
	c3=c1-c2;
	cout<<"c3=c1-c2=";
	c3.display();
	c3=c1+c2;
	cout<<"c3=c1+c2=";
	c3.display();
}
/*运行结果：
c3=c1-c2=(3.-6)
c3=c1+c2=(7.14)*/ 






