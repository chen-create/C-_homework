/*
运算符友元函数
双目运算：oprd1 B oprd2  =  operator B(oprd1,oprd2)
前置单目运算：B oprd2  =  operator B(oprd)
后置单目运算：oprd1 B  =  operator B(oprd,0) 
*/#include <iostream> 
using namespace std;
//复数类声明 
class complex
{
	public:
		complex(double r=0.0,double i=0.0)
			{ real=r;image=i;}
		//+、-重载为友元函数 
		friend complex operator +(complex c1,complex c2);
		friend complex operator -(complex c1,complex c2);
		void display();//显示复数的值 
	private:
		double real;
		double image;
};
//重载函数实现 ，不是成员函数，所以没有什么当前对象 
complex operator +(complex c1,complex c2) 
{
	return complex(c2.real+c1.real,c2.image+c1.image);
} 
complex operator -(complex c1,complex c2) 
{
	return complex(c2.real-c1.real,c2.image-c1.image);
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
c3=c1-c2=(-3.6)
c3=c1+c2=(7.14)*/ 
