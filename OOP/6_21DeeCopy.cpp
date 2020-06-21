#include<iostream> 
#include<cassert>
using namespace std;
class Point
{
	6_16
};

class ArrayOfPoints
{
	public:
		ArrayOfPoints(ArrayOfPoints&PointsArray);
		6_18
};
ArrayOfPoints::ArrayOfPoints(ArrayOfPoints&PointsArray)
{
	numberOfPoints=pointsArray.numberOfPoints;
	points=new point[numberOfPoints];
	for(int i=0;i<numberOfPoints;i++) 
		points[i].Move(pointsArray.Element(i).GetX(),
			pointsArray.Element(i).GetY())
}

int main()
{
	6_20
}
