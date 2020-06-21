#include  <iostream>
using  namespace  std;

class Point
{
	public:
		Point(int x=0,int y=0)
			{ m_x=x;m_y=y;}
		friend ostream &operator<<(ostream &,Point &); 
		//定义运算符<<重载为友元函数 
	private:
		int m_x,m_y;
};




ostream &operator<<(ostream &output,Point &p)
{
	output<<"("<<p.m_x<<","<<p.m_y<<")"<<endl;
	return output;
} 



int main()
{
	Point  a(1,3);
    cout<<a;
    return  0;
}

