#include "iostream"
using namespace std;
/*声名一个基类vehicle,有私有成员maxspeed和weight，
公有成员run()和stop(),以及构造和析构函数。
从vehicle派生bicycle和motorcar,
 bicycle有私有成员height， 
 motorcar有私有成员seatnum,以及各自的构造函数和析构函数。
从bicycle和motorcar派生出motorcycle，观察虚基类对继承的影响。*/
class vehicle
{
	public:
		vehicle(int a,int b)
		{
			maxspeed=a;weight=b;
			cout<<"vehicle constructor called. maxspeed:"
				<<maxspeed<<"; weight"<<weight<<endl;
		}
		~vehicle()
		{
			cout<<"vehicle destructor called. maxspeed:"
				<<maxspeed<<" weight"<<weight<<endl; 
		}
		vehicle(){}
		void run()
		{ cout<<"vehicle run"<<endl;}
		void stop()
		{ cout<<"vehicle stop"<<endl;}
	private:
		int maxspeed,weight;
};
class bicycle:virtual public vehicle
{
	public:
		bicycle(int c,int a,int b):vehicle(a,b)
		{
			height=c;
			cout<<"bicycle constructor called. height:"<<height<<endl;
		}
		~bicycle()
		{ 
			cout<<"bicycle destructor called. height"<<height<<endl;
		}
	private:
		int height;
};
class motorcar:virtual public vehicle
{
	public:
		motorcar(int d,int a,int b):vehicle(a,b)
		{
			seatnum=d;
			cout<<"motorcar constructor called. seatnum:"<<seatnum<<endl;
		}
		~motorcar()
		{ cout<<"motorcar destructor called. seatnum:"<<seatnum<<endl;}
	private:
		int seatnum;
};
class motorcycle:public bicycle,public motorcar
{
	public:
		motorcycle(int d,int c,int a,int b):vehicle(a,b),bicycle(c,a,b),motorcar(d,a,b)
		{
			cout<<"motorcycle constructor called"<<endl;
		}
		~motorcycle()
		{ 
			cout<<"motorcycle destructor called"<<endl;
		}
	private:
		int seatnum;
};

int main(int argc,char *argv[])
{
        motorcycle m(1,2,3,4);
		//1表示height，2表示setnum，3表示maxspeed，4表示weight
        m.run();
        m.stop();
        return 0;
}
