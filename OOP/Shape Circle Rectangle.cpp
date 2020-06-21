#include<iostream>
using namespace std;
const float pi=3.14159;
/*编写一个Shape类并派生出Circle类和Rectangle类，观察运行机制。
shape类有以下成员
	1）私有成员m_ID
	2）公有getter和setter
	3）计算面积函数getArea()，返回0;
	4）构造与析构函数*/
class Shape
{
	public:
		Shape(int m_ID)
		{
			this->m_ID=m_ID;
			cout<<"Shape constructor called:"<<this->m_ID<<endl;
		}
		~Shape()
		{	
			cout<<"Shape destructor called:"<<this->m_ID<<endl;
		}
		int getID()
		{
			return this->m_ID;
		}
		void setID(int m_ID)
		{
			this->m_ID=m_ID;
		}
		int getArea()	{return 0;}//可以设置为纯虚函数 
	private:
		int m_ID;
};	
/*Circle类从shape类继承，并派生以下成员
	1）私有成员r
	2）公有getter和setter
	3）计算面积函数getArea()，返回计算面积;
	4）构造与析构函数*/
class Circle:public Shape
{
	public:
		Circle(int r,int m_ID):Shape(m_ID)
		{
			this->r=r;
			cout<<"Circle constructor called:"<<getID()<<endl;
		}
		~Circle()
		{
			cout<<"Circle destructor called:"<<getID()<<endl;
		}
		int getR()
		{
			return this->r;
		}
		void setR(int r)
		{
			this->r=r;
		}
		float getArea()	{return pi*this->r*this->r;}
	private:
		int r;
};	
	
/*Rectangle类从shape类继承，并派生以下成员
	1）私有成员h,w
	2）公有getter和setter
	3）计算面积函数getArea()，返回计算面积;
	4）构造与析构函数*/
class Rectangle:public Shape
{
	public:
		Rectangle(int h,int w,int m_ID):Shape(m_ID)
		{
			this->h=h;
			this->w=w;
			cout<<"Rectangle constructor called:"<<getID()<<endl;
		}
		~Rectangle()
			{cout<<"Rectangle destructor called:"<<getID()<<endl;}
		void setH()
		{
			this->h=h;
		}
		void setW()
		{
			this->w=w;
		}
		int getH(int h)
		{
			return this->h;
		}
		int getW(int w)
		{
			return this->w;
		}
		int getArea()
			{return this->h*this->w;}
	private:
		int h,w;
};	

int  main()
{
        Shape s(1);//1表示ID
        Circle c(4,2);//4表示半径，2表示ID
        Rectangle r(4, 5,3);//4和5表示长和宽，3表示ID
        cout<<"Shape的面积"<<s.getArea()<<endl;
        cout<<"Circle的面积"<<c.getArea()<<endl;
        cout<<"Rectangle的面积"<<r.getArea()<<endl;
}



