/*
π=16 arctan(1/5)- 4 arctan(1/239);
arctan(x)=x -x^3/3 +x^5/5 -x^7/7 +....;
	(直到某项绝对值不大于10^-15 为止）
*/
#include<iostream> 
using namespace std;
double arctan(double x);
int main()			//π=16 arctan(1/5)- 4 arctan(1/239);
{
	double a,b;
	a=16.0*arctan(1/5.0);
	b=4.0*arctan(1/239.0);
	cout<<"PI="<<a-b<<endl;	
}
double arctan(double x)		//arctan(x)=x -x^3/3 +x^5/5 -x^7/7 +....;
							//(直到某项绝对值不大于10^-15 为止）
{
	int i;
	double r,e,f,sqrt;
	sqrt=x*x;
	r=0;e=x;i=1;
	while(e/i>1e-15)
	{
		f=e/i;
		r=(i%4==1)?r+f:r-f;		//控制每个项的加减符号 
		e=e*sqrt;
		i+=2;
	
	}
	return r;
}
