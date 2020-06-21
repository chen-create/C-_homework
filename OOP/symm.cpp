#include<iostream> 
using namespace std;
bool symm(long n);
int main()		//枚举所有（11-1000）的中符合m,m*m,m*m*m都是回文数的数字 
{
	long m;
	for(m=11;m<1000;m++)
		if(symm(m)&&symm(m*m)&&symm(m*m*m))
			cout<<"m="<<m<<" m*m="<<m*m<<" m*m*m="<<m*m*m<<endl;
}
bool symm(long n)		//判断n是否为回文数 
{
	long i,m;
	i=n;	//保存n的数据，在最后比较n与其回文数是否相等 
	m=0;
	while(i)			//m=0*10+n的个位数；
						//m=个位数*10+n的十位数
						//m=个位数*100 +十位数*10 +n的百位数 。。。。 
	{
		m=m*10+i%10;
		i=i/10;
	}
	return (m==n);
}
