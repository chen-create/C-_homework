#include  <iostream>
using  namespace  std;

class Point
{
	public:
		Point(int x=0,int y=0)
			{ m_x=x;m_y=y;}
		Point& operator ++();//ǰ�õ�Ŀ��������� 
		Point operator ++(int);
		friend ostream &operator<<(ostream &out,const Point &point); 
		//���������<<����Ϊ��Ԫ���� 
		//Ϊʲôû��const�ͻᱨ�� 
	private:
		int m_x,m_y;
};

Point& Point::operator ++()//Point��������Ϊ�˼�����ʱ���� 
							//Ҳ���Բ������� 
{
	m_x++;
	m_y++;
	return *this;//���ص�ǰ���󣬾���++֮���ֵ 
}

Point Point::operator ++(int)//��&���ã�returnʱ old�ͻ���ʧ 
{
	Point old=*this;
	++(*this);
	return old;//���ص���++֮ǰ�Ķ��� 
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
