#include<iostream> 
#include<cmath>
using namespace std;
class CTime
{
	public:
		CTime(int Year,int Month,int Day,int Hour,int Minute,int Second);
		void showTime();
		int isvalid();
		CTime(CTime&another);
		~CTime()
		{
			cout<<"析构函数被调用"<<endl; 
		}
		int dayDiff(CTime t);
		int subdays();
	private:
		int year,month,day,hour,minute,second;
};

CTime::CTime(int Year=0,int Month=0,int Day=0,int Hour=0,int Minute=0,int Second=0)
{
	year=Year;
	month=Month;
	day=Day;
	hour=Hour;
	minute=Minute;
	second=Second;
	int td=0,time=0,date=1;
	switch(month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if(day<=31)
				time=1;break;
		case 4:case 6:case 9:case 11:
			if(day<=30)
				time=1;break;
		case 2:
			{
				if((year%4==0&&year%100!=0||year%400==0)&&(day<=29))
					time=1;
				else
					{
						if(day<=28)	
							time=1;
					}
				break;
			}
	}
	if(hour>23||minute>59||second>59)
			date=0;
	if(time==0||date==0)
	{
		year=0;
		month=0;
		day=0;
		hour=0;
		minute=0;
		second=0;
	}
	if(time==0&&date==0)
		cout<<"time and date erro!"<<endl;
	else if(time==0)
		cout<<"date erro!"<<endl;
	else if(date==0)
		cout<<"time erro!"<<endl;
	cout<<"构造函数被调用"<<endl;
}

void CTime::showTime()
{
		cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
}

CTime::CTime(CTime&another)
{
	cout<<"拷贝构造函数被调用"<<endl;
	year=another.year;
	month=another.month;
	day=another.day;
	hour=another.hour;
	minute=another.minute;
	second=another.second;
}

int CTime::isvalid()
{
	int td=0,time=0,date=1;
	switch(month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if(day<=31)
				time=1;break;
		case 4:case 6:case 9:case 11:
			if(day<=30)
				time=1;break;
		case 2:
			{
				if((year%4==0&&year%100!=0||year%400==0)&&(day<=29))
					time=1;
				else
					{
						if(day<=28)	
							time=1;
					}
				break;
			}
	}
	if(hour>23||minute>59||second>59)
			date=0;
	if(time==1&&date==1)
		td=1;
	if(time==0||date==0)
	{
		year=0;
		month=0;
		day=0;
		hour=0;
		minute=0;
		second=0;
	}	
	return td;
}


int CTime::subdays()
{
    int iyear=0, imonth=0, iday=0;
    imonth=(month+9)%12;
    iyear=year-imonth/10;
    iday=365*iyear+iyear/4-iyear/100+iyear/400+(imonth*306+5)/10+(day-1);
    return iday;
}
int CTime::dayDiff(CTime t) 
{
	return abs(subdays()-t.subdays()) ;
}




int  main()
{
    int year,month,day,hour,minute,second;
    cin>>year>>month>>day>>hour>>minute>>second;
    CTime t1(year,month,day,hour,minute,second);
    t1.showTime();
    CTime t2(2000,1,1);  	//利用默认形参将时间初始化为00:00:00
    if(t1.isvalid())          //如果日期和时间合法，则计算天数
    {
        int days=0;
        days=t1.dayDiff(t2);
        cout<<"这两天之间相隔了"<<days<<"天"<<endl;
    	days=t2.dayDiff(t1);
        cout<<"这两天之间相隔了"<<days<<"天"<<endl;
    }
} 
