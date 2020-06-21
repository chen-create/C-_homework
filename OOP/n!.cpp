/*
n! =
	 1				(n=0);
	 n(n-1)!		(n>0);
	 
	 8!=8x7!=8x7x6!=8x7x6x5!=8x7x6x5x4!=8x7x6x5x4x3!=8x7x6x5x4x3x2!=8x7x6x5x4x3x2x1;
*/
#include<iostream> 
using namespace std;
long fac(int n);
int main()
{
	int n;
	long y;
	cout<<"Enter a positive integer:";
	cin>>n;
	y=fac(n);		//调用求n的阶乘的函数 
	cout<<n<<"!="<<y<<endl;
	return 0;
}
long fac(int n)
{
	long f;
	if(n<0)
		cout<<"n<0,date error!"<<endl;
	else if(n==0)
		f=1;
	else
		f=n*fac(n-1);
		return(f);
}
