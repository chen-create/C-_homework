#include<iostream> 
using namespace std;
bool symm(long n);
int main()		//ö�����У�11-1000�����з���m,m*m,m*m*m���ǻ����������� 
{
	long m;
	for(m=11;m<1000;m++)
		if(symm(m)&&symm(m*m)&&symm(m*m*m))
			cout<<"m="<<m<<" m*m="<<m*m<<" m*m*m="<<m*m*m<<endl;
}
bool symm(long n)		//�ж�n�Ƿ�Ϊ������ 
{
	long i,m;
	i=n;	//����n�����ݣ������Ƚ�n����������Ƿ���� 
	m=0;
	while(i)			//m=0*10+n�ĸ�λ����
						//m=��λ��*10+n��ʮλ��
						//m=��λ��*100 +ʮλ��*10 +n�İ�λ�� �������� 
	{
		m=m*10+i%10;
		i=i/10;
	}
	return (m==n);
}
