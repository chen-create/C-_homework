#include<iostream> 
using namespace std;
//Clock类的声明 
class Clock
{
	public:
		Clock(int NewH=0,int NewM=0,int NewS=0)		
		{
			Hour=NewH;Minute=NewM;Second=NewS;
		}
		void ShowTime();
		Clock& operator ++();//前置单目运算符重载 
		Clock operator ++(int);//后置单目运算符重载 
	private:
		int Hour,Minute,Second;
};
void Clock::ShowTime()
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
Clock& Clock::operator ++()//Clock的引用是为了减少临时程序 
							//也可以不用引用 
{
	Second++;
	//加一时要考虑秒、分、钟的情况 
	if(Second>=60)
	{
		Second=Second-60;
		Minute++;
		if(Minute>=60)
		{
			Minute-=60;
			Hour++;
			Hour=Hour%24;
		}
	}
	return *this;//返回当前对象，就是++之后的值 
}

Clock Clock::operator ++(int)//用&引用，return时 old就会消失 
{
	Clock old=*this;
	++(*this);
	return old;//返回的是++之前的对象 
}

int main()
{
	Clock myClock(23,59,59);
	cout<<"First time output";
	myClock.ShowTime();
	cout<<"Show myClock++:";
	(myClock++).ShowTime();//C++之后的当前对象 
	myClock.ShowTime();//C++之后的+1的对象 
	cout<<"Show ++myClock:";
	(++myClock).ShowTime();//++C之后的+1的对象 
}
	
	
