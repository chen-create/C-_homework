#include<iostream>
using namespace std;
//����Point�� 
class Point
{
	public:
		//Ĭ�Ϲ��캯�� 
		Point()
		{
			X=Y=0;
			cout<<"Default Constructor called."<<endl;
		}
		//���캯�� 
		Point(int xx,int yy)
		{
			X=xx;
			Y=yy;
			cout<<"Constructor called."<<endl;
		}
		//�������� 
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
//����ArrayOfPoints
class  ArrayOfPoints
{
	public:
		//���캯�� 
		ArrayOfPoints(int n)
		{
			//numberOfPoints��ʼ��Ϊ�û������n 
			numberOfPoints=n;
			//��̬������ά����Point[n] 
			points=new Point[n];
		}
		~ArrayOfPoints()
		{ 
			cout<<"deleting..."<<endl;
			numberOfPoints=0;
			//ɾ�� 
			delete[] points;
		}
		//
		Point&Element(int n)
		{
			return points[n];
		}
	private:
		//Point��Ķ���ָ��
		Point*points;
		int numberOfPoints;
};
int main()
{
	int number;
	cout<<"Please enter the number of points:";
	cin>>number;
	//������������ 
	ArrayOfPoints points(number);
	//ͨ��ָ���������Ԫ�صĳ�Ա 
	points.Element(0).Move(5,10);
	points.Element(1).Move(15,20);
	return 0;
}	
	
	
