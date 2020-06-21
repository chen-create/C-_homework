#include  <iostream>
using  namespace  std;

class Complex
{
	public:
		Complex(double r=0.0,double i=0.0)
			{ real=r;image=i;} 
		Complex operator +(Complex c2);
		Complex operator -(Complex c2);
		void print();
	private:
		double real;
		double image;
};
//重载函数实现 
Complex Complex::operator +(Complex c2) 
{
	Complex c;
	c.real=c2.real+real;
	c.image=c2.image+image;
	return Complex(c.real,c.image);
} 
Complex Complex::operator -(Complex c2) 
{
	Complex c;
	c.real=real-c2.real;
	c.image=image-c2.image;
	return Complex(c.real,c.image);
}
void Complex::print()
{	cout<<real<<"+"<<image<<"i"<<endl; }



int  main()
{
        Complex  a(3,4),b(1,-1),c;
        c=a+b;
        cout<<"a+b=";
        c.print();
        cout<<endl;
        c=a-b;
        cout<<"a-b=";
        c.print();
        cout<<endl;
        c=a+100;
        cout<<"a+100=";
        c.print();
        cout<<endl;
        c=a-2.5;
        cout<<"a-2.5=";
        c.print();
        cout<<endl;

        return  0;
}
