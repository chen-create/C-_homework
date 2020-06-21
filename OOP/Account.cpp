#include <iostream>
#include <iomanip>
using namespace std;
//����Account��
class Account
{
	public:
		void init (string initid,string initname,string initgender,int initage,double initmoney);
		void printmoney();//��� 
		void deposit(double x);//���x 
		void withdraw(double y);//ȡ��y 
	private:
		int age;
		string name;
		double money;		
};
void Account::init (string initid,string initname,string initgender,int initage,double initmoney)
{
	name=initname;
	if(int(initmoney*1000)%10==0)
		money=initmoney;	
	else
	{
		money=0;
		cout<<"������Ľ��Ϸ�"<<endl; 
	}	
}
void Account::printmoney()
{
	cout<<name<<"�Ĵ��Ϊ"<<setiosflags(ios::fixed)<<setprecision(2)<<money<<endl;
}
void Account::deposit(double x)
{
	if(int(x*1000)%10==0)
		money+=x;
	else
	{
		cout<<"������Ľ��Ϸ�"<<endl;
	} 
}
void Account::withdraw(double y)
{
	if(int(y*1000)%10==0)
	{
		if(y<money)
			money-=y;
		else
			cout<<"���Ĵ�����"<<endl;
	}
	else
	{
		cout<<"������Ľ��Ϸ�"<<endl;
	} 	
}
	
	
	
	
int  main()
{
    Account tom;
    tom.init("32020320011001876X", "Tom Black", "��", 19, 2000.89);
    tom.printmoney();		//�����Tom  Black�Ĵ��Ϊ2000.89
    tom.deposit(89.471);		//�����������Ľ��Ϸ�
    tom.printmoney();		//�����Tom  Black�Ĵ��Ϊ2000.89
    tom.deposit(10000);
    tom.printmoney();		//�����Tom  Black�Ĵ��Ϊ12000.89
    tom.withdraw(10001);
    tom.printmoney();		//�����Tom  Black�Ĵ��Ϊ1999.89
    tom.withdraw(10000.123);		//�����������Ľ��Ϸ�
    tom.printmoney();		//�����Tom  Black�Ĵ��Ϊ1999.89
    tom.withdraw(10000.9);		//��������Ĵ�����
    tom.printmoney();		//�����Tom  Black�Ĵ��Ϊ1999.89
    Account  jerry;
    jerry.init("320203200910116569",  "Jerry Black", "Ů", 11, 100.956);		//�����������Ľ��Ϸ�
    jerry.printmoney();		//�����Jerry  Black�Ĵ��Ϊ0.00
}

