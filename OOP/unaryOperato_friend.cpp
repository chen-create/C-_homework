#include  <iostream>
using  namespace  std;

class Point
{
	public:
		Point(int x=0,int y=0)
			{ m_x=x;m_y=y;}
		Point& operator ++();//前置单目运算符重载 
		Point operator ++(int);
		friend ostream &operator<<(ostream &out,const Point &point); 
		//定义运算符<<重载为友元函数 
		//为什么没有const就会报错 
	private:
		int m_x,m_y;
};

Point& Point::operator ++()//Point的引用是为了减少临时程序 
							//也可以不用引用 
{
	m_x++;
	m_y++;
	return *this;//返回当前对象，就是++之后的值 
}

Point Point::operator ++(int)//用&引用，return时 old就会消失 
{
	Point old=*this;
	++(*this);
	return old;//返回的是++之前的对象 
}
ostream& operator <<(ostream& out,const Point& point)
{
	out<<"("<<point.m_x<<","<<point.m_y<<")"<<endl;
	return out;
} 


int  main()
{
        Point  a(1,3);
        cout<<a;
        cout<<a++;
        cout<<++a;
        return  0;
}
