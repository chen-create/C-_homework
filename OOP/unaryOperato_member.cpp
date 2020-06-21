#include<iostream> 
using namespace std;
//Clock������� 
class Clock
{
	public:
		Clock(int NewH=0,int NewM=0,int NewS=0)		
		{
			Hour=NewH;Minute=NewM;Second=NewS;
		}
		void ShowTime();
		Clock& operator ++();//ǰ�õ�Ŀ��������� 
		Clock operator ++(int);//���õ�Ŀ��������� 
	private:
		int Hour,Minute,Second;
};
void Clock::ShowTime()
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
Clock& Clock::operator ++()//Clock��������Ϊ�˼�����ʱ���� 
							//Ҳ���Բ������� 
{
	Second++;
	//��һʱҪ�����롢�֡��ӵ���� 
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
	return *this;//���ص�ǰ���󣬾���++֮���ֵ 
}

Clock Clock::operator ++(int)//��&���ã�returnʱ old�ͻ���ʧ 
{
	Clock old=*this;
	++(*this);
	return old;//���ص���++֮ǰ�Ķ��� 
}

int main()
{
	Clock myClock(23,59,59);
	cout<<"First time output";
	myClock.ShowTime();
	cout<<"Show myClock++:";
	(myClock++).ShowTime();//C++֮��ĵ�ǰ���� 
	myClock.ShowTime();//C++֮���+1�Ķ��� 
	cout<<"Show ++myClock:";
	(++myClock).ShowTime();//++C֮���+1�Ķ��� 
}
	
	
