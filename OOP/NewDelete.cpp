#include<iostream>
using namespace std;
//定义Point类 
class Point
{
	public:
		//默认构造函数 
		Point()
		{
			X=Y=0;
			cout<<"Default Constructor called."<<endl;
		}
		//构造函数 
		Point(int xx,int yy)
		{
			X=xx;
			Y=yy;
			cout<<"Constructor called."<<endl;
		}
		//析构函数 
		~Point()
		{
			cout<<"Destructor called."<<endl;
		}
		void Move(int x,int y)
		{
			X=x;
			Y=y;
		}
		int GetX()
			{return X;}
		int GetY()
			{return Y;}
	private:
		int X,Y;
};
//定义ArrayOfPoints
class  ArrayOfPoints
{
	public:
		//构造函数 
		ArrayOfPoints(int n)
		{
			//numberOfPoints初始化为用户输入的n 
			numberOfPoints=n;
			//动态创建多维数组Point[n] 
			points=new Point[n];
		}
		~ArrayOfPoints()
		{ 
			cout<<"deleting..."<<endl;
			numberOfPoints=0;
			//删除 
			delete[] points;
		}
		//
		Point&Element(int n)
		{
			return points[n];
		}
	private:
		//Point类的对象指针
		Point*points;
		int numberOfPoints;
};
int main()
{
	int number;
	cout<<"Please enter the number of points:";
	cin>>number;
	//创建对象数组 
	ArrayOfPoints points(number);
	//通过指针访问数组元素的成员 
	points.Element(0).Move(5,10);
	points.Element(1).Move(15,20);
	return 0;
}	
	
	
