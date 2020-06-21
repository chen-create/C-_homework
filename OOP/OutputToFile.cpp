#include<iostream> 
using namespace std;
//定义结构体Date 
struct Date
{
	int month,day,year;
};
int main()
{
	Date dt={6,10,92};//Date的变量dt初始化为6月10日92年 
	ofstream tfile("date.dat",ios::binary);
		//定义ofstream对象tfile,打开当前目录date.dat以二进制的方式 
	tfile.write((char*)&dt,sizeof dt);
		//(char类的字符指针/一块内存的起始地址，dt变量大小/字节数) 
		//tfile对象的write函数将dt写入，强制转换成char类 
	tfile.close();
		//关闭文件 
}

