#include "iostream"
using namespace std;
/*����һ������vehicle,��˽�г�Աmaxspeed��weight��
���г�Աrun()��stop(),�Լ����������������
��vehicle����bicycle��motorcar,
 bicycle��˽�г�Աheight�� 
 motorcar��˽�г�Աseatnum,�Լ����ԵĹ��캯��������������
��bicycle��motorcar������motorcycle���۲������Լ̳е�Ӱ�졣*/
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
		//1��ʾheight��2��ʾsetnum��3��ʾmaxspeed��4��ʾweight
        m.run();
        m.stop();
        return 0;
}
