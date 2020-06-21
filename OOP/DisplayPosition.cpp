#include<iostream>
#include<fstream>//读文件和写文件的功能 
using namespace std;
int main()
{
	char ch;
	//ifstream类的tfiel对象生成时打开"payroll"文件
	//以二进制的形式，默认位置为第一个字节 
	//nocreate：如果此文件不存在就不再另外创建 
	ifstream tfile("payroll",ios::binary|ios::nocrerate);
	if(tfile)//文件成功打开 
	{
		tfile.seekg(8);//当前读写位置调整到第八个字节 
		{
			while(tfile.good())//确保每次读写正常 
			{
				streampos here=tfile.tellg();
					//文件指针sreampose是tellg函数的返回值 
				tfile.get(ch);//读入字符 
				if(ch==' ')
					cout<<"\nPosition"<<here<<"is a space";
			}
		}
	else //打开文件失败 
	{
		cout<<"ERRO:Cannot open file 'payroll'."<<endl;
	}
	tfile.close();//关闭文件 
}
