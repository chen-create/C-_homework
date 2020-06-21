#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;
int main()
{
	//定义一个结构体
	struct
	{
		double salary;
		char name[23];
	}employee;//定义结构体变量employee
	//ifstream的对象is生成时打开"payroll"文件
	//以二进制的形式，默认位置为第一个字节 
	//nocreate：如果此文件不存在就不再另外创建 
	ifstream is("payroll",ios::binary|ios::nocreate);
	if(is)
	{
		is.read((char*)&employee,sizeof(employee));
			//文件对象中读取一块数据存放到内存中 
		cout<<employee.name<<' '<<employee.salary<<endl;
	}
	else
	{
		cout<<"EROOR:Cannot open file'payroll'."<<endl;
	}
	is.close();
}
