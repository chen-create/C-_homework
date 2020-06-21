#include <iostream>
#include <iomanip>
using namespace std;
//定义Account类
class Account
{
	public:
		void init (string initid,string initname,string initgender,int initage,double initmoney);
		void printmoney();//余额 
		void deposit(double x);//存款x 
		void withdraw(double y);//取款y 
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
		cout<<"您输入的金额不合法"<<endl; 
	}	
}
void Account::printmoney()
{
	cout<<name<<"的存款为"<<setiosflags(ios::fixed)<<setprecision(2)<<money<<endl;
}
void Account::deposit(double x)
{
	if(int(x*1000)%10==0)
		money+=x;
	else
	{
		cout<<"您输入的金额不合法"<<endl;
	} 
}
void Account::withdraw(double y)
{
	if(int(y*1000)%10==0)
	{
		if(y<money)
			money-=y;
		else
			cout<<"您的存款金额不足"<<endl;
	}
	else
	{
		cout<<"您输入的金额不合法"<<endl;
	} 	
}
	
	
	
	
int  main()
{
    Account tom;
    tom.init("32020320011001876X", "Tom Black", "男", 19, 2000.89);
    tom.printmoney();		//输出：Tom  Black的存款为2000.89
    tom.deposit(89.471);		//输出：您输入的金额不合法
    tom.printmoney();		//输出：Tom  Black的存款为2000.89
    tom.deposit(10000);
    tom.printmoney();		//输出：Tom  Black的存款为12000.89
    tom.withdraw(10001);
    tom.printmoney();		//输出：Tom  Black的存款为1999.89
    tom.withdraw(10000.123);		//输出：您输入的金额不合法
    tom.printmoney();		//输出：Tom  Black的存款为1999.89
    tom.withdraw(10000.9);		//输出：您的存款金额不足
    tom.printmoney();		//输出：Tom  Black的存款为1999.89
    Account  jerry;
    jerry.init("320203200910116569",  "Jerry Black", "女", 11, 100.956);		//输出：您输入的金额不合法
    jerry.printmoney();		//输出：Jerry  Black的存款为0.00
}

