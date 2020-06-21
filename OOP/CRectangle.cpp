#include<iostream>
using namespace std;

class CPoint 
{
    public:
    	CPoint(int X=0, int Y=0);
    	CPoint(CPoint &another);
    	int getX() {return x;}
    	int getY() {return y;}
    private:	
	int x,y;
};

CPoint::CPoint(int X,int Y)
{
    x=X; 
	y=Y;
    cout<<"CPoint contstructor with default value(0,0) is called."<<endl;
}

CPoint::CPoint(CPoint&react)
{
    x=react.x; 
	y=react.y;   
    cout<<"CPoint copy contstructor is called."<<endl;
}


class CRectangle
{
	public:
    	CRectangle(CPoint a,CPoint b);
    	CRectangle();
    	CRectangle(int A,int B,int C,int D);
    	CRectangle(CRectangle& rect);
     	int GetArea( );
    private:
		CPoint p1,p2;
};

CRectangle::CRectangle()
{
    cout << "CRectangle default contstructor is called." << endl;
}

CRectangle::CRectangle(CPoint a,CPoint b):p1(a),p2(b)//CRectangle(CPoint &a,CPoint &b) 
{
    cout<<"CRectangle contstructor with (CPoint,CPoint) is called."<<endl;
}

CRectangle::CRectangle(int a,int b,int c,int d):p1(a,b),p2(c,d)
{   
      cout<<"CRectangle contstructor with (int,int,int,int) is called."<<endl;
}

CRectangle::CRectangle(CRectangle&rect):p1(rect.p1),p2(rect.p2)
{
    cout<<"CRectangle copy contstructor is called."<<endl;
}
int CRectangle::GetArea( )
{
    return (p2.getX()-p1.getX())*(p2.getY()-p1.getY());
}   
   
   





int main()
{
    int a=1,b=1,c=6,d=11;
    cout<<"# Define p1 ######"<<endl;
    CPoint p1;		
    cout<<"# Define p2 ######"<<endl;	
    CPoint p2(10,20);		
    cout<<"# Define rect1 ######"<<endl;
    CRectangle rect1;
    cout<<"# Define rect2 ######"<<endl;
    CRectangle rect2(p1, p2);
    cout<<"# Define rect3 ######"<<endl;
    CRectangle rect3(a, b, c, d);
    cout<<"# Define rect4 ######"<<endl;
    CRectangle rect4(rect2);
    cout<<"# Calculate area ######"<<endl;
    cout << "rect1面积为" << rect1.GetArea() << endl;
    cout << "rect2面积为" << rect2.GetArea() << endl;
    cout << "rect3面积为" << rect3.GetArea() << endl;
    cout << "rect4面积为" << rect4.GetArea() << endl;
    system("pause");
    return 0;
}
