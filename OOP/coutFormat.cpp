/*
ʹ��setwָ����ȣ� 
	#include<iostream>
	cout<<setw(6)<<a<<endl;
ʹ��width�� 
	cout.width(10);
	cout<<a<<endl;
  ���϶����Ҷ��룬��߿ո���Ҫ����룬��ʹ��
	cout<<setiosflags(ios::left)<<setw(6)<<a
		<<resetiosflags(ios::left)<<b<<endl; 
����������ȣ�
	#include<iomanip> 
	cout<<setiosflags(ios::left)<<setw(6)<<setprecision(1)<<a<<endl;
  �����ios_base::fixed��ios_base::scientific,
    cout<<setiosflags(ios::scientific);
    cout<<setiosflags(ios::left)<<setw(6)<<setprecision(1)<<a<<endl;
  �򾫶�ֵȷ������С��������λ����
*/
#include<iostream> 
using namespace std;
int main()
{
	double values[]={1.23,35.36,653.7,4358.24};
	for(int i=0;i<4;i++)
	{
		cout.width(10);
		cout.fill('*');//��ߵĿո�*������� 
		cout<<values[i]<<'\n';
	}
}
