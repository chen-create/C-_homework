#include<iostream>
#include<fstream>
using namespace std;
//定义结构体 
struct student
{
	short stu_id;
	short score;
};

int main()
{
	//键盘输入学生个数n及n个学生的数据 
	//存储在new创建的数组a中
	int n;
	cin>>n;
	student *a=new student[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].stu_id>>a[i].score;
	}
	//使用write函数，以二进制形式，将a数组中存放的n个学生一次写入out.txt文件中
	ofstream os("out.txt",ios::out|ios::binary);
	if(os)
	{
		os.write((char *)a,sizeof(student) *n);
		os.close();
	}
	//使用read函数，以二进制形式，
	//使用循环方式，从out.txt中每次读出一个学生信息，存储于new创建的
	ifstream is("out.txt",ios::binary);
	student *b=new student[n];
	if(is)
	{
		for(int i=0;i<n;i++)
		{
			is.read((char *)&b[i],sizeof(student) *n);
		}
		is.close();
	}
	//使用write函数，以文本形式，
	//将b数组中存放的n个学生一次写入out.txt文件中，要求添加到文件末尾
	os.open("out.txt",ios::app|ios::out);
	if(os)
	{
		os.write((char *)b,sizeof(student) *n);
		os.close();
	}
	delete[] a;
	delete[] b;
	return 0;
}












