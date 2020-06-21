/*
�������Ԫ����
˫Ŀ���㣺oprd1 B oprd2  =  operator B(oprd1,oprd2)
ǰ�õ�Ŀ���㣺B oprd2  =  operator B(oprd)
���õ�Ŀ���㣺oprd1 B  =  operator B(oprd,0) 
*/#include <iostream> 
using namespace std;
//���������� 
class complex
{
	public:
		complex(double r=0.0,double i=0.0)
			{ real=r;image=i;}
		//+��-����Ϊ��Ԫ���� 
		friend complex operator +(complex c1,complex c2);
		friend complex operator -(complex c1,complex c2);
		void display();//��ʾ������ֵ 
	private:
		double real;
		double image;
};
//���غ���ʵ�� �����ǳ�Ա����������û��ʲô��ǰ���� 
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
	complex c1(5,4),c2(2,10),c3;//������������� 
	c3=c1-c2;
	cout<<"c3=c1-c2=";
	c3.display();
	c3=c1+c2;
	cout<<"c3=c1+c2=";
	c3.display();
}



/*���н����
c3=c1-c2=(-3.6)
c3=c1+c2=(7.14)*/ 
