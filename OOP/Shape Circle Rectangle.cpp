#include<iostream>
using namespace std;
const float pi=3.14159;
/*��дһ��Shape�ಢ������Circle���Rectangle�࣬�۲����л��ơ�
shape�������³�Ա
	1��˽�г�Աm_ID
	2������getter��setter
	3�������������getArea()������0;
	4����������������*/
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
		int getArea()	{return 0;}//��������Ϊ���麯�� 
	private:
		int m_ID;
};	
/*Circle���shape��̳У����������³�Ա
	1��˽�г�Աr
	2������getter��setter
	3�������������getArea()�����ؼ������;
	4����������������*/
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
	
/*Rectangle���shape��̳У����������³�Ա
	1��˽�г�Աh,w
	2������getter��setter
	3�������������getArea()�����ؼ������;
	4����������������*/
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
        Shape s(1);//1��ʾID
        Circle c(4,2);//4��ʾ�뾶��2��ʾID
        Rectangle r(4, 5,3);//4��5��ʾ���Ϳ�3��ʾID
        cout<<"Shape�����"<<s.getArea()<<endl;
        cout<<"Circle�����"<<c.getArea()<<endl;
        cout<<"Rectangle�����"<<r.getArea()<<endl;
}



