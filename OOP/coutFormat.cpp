/*
使用setw指定宽度： 
	#include<iostream>
	cout<<setw(6)<<a<<endl;
使用width： 
	cout.width(10);
	cout<<a<<endl;
  以上都是右对齐，左边空格。若要左对齐，则使用
	cout<<setiosflags(ios::left)<<setw(6)<<a
		<<resetiosflags(ios::left)<<b<<endl; 
控制输出精度：
	#include<iomanip> 
	cout<<setiosflags(ios::left)<<setw(6)<<setprecision(1)<<a<<endl;
  如果用ios_base::fixed或ios_base::scientific,
    cout<<setiosflags(ios::scientific);
    cout<<setiosflags(ios::left)<<setw(6)<<setprecision(1)<<a<<endl;
  则精度值确定的是小数点后面的位数。
*/
#include<iostream> 
using namespace std;
int main()
{
	double values[]={1.23,35.36,653.7,4358.24};
	for(int i=0;i<4;i++)
	{
		cout.width(10);
		cout.fill('*');//左边的空格被*代替输出 
		cout<<values[i]<<'\n';
	}
}
