#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;
int main()
{
	//����һ���ṹ��
	struct
	{
		double salary;
		char name[23];
	}employee;//����ṹ�����employee
	//ifstream�Ķ���is����ʱ��"payroll"�ļ�
	//�Զ����Ƶ���ʽ��Ĭ��λ��Ϊ��һ���ֽ� 
	//nocreate��������ļ������ھͲ������ⴴ�� 
	ifstream is("payroll",ios::binary|ios::nocreate);
	if(is)
	{
		is.read((char*)&employee,sizeof(employee));
			//�ļ������ж�ȡһ�����ݴ�ŵ��ڴ��� 
		cout<<employee.name<<' '<<employee.salary<<endl;
	}
	else
	{
		cout<<"EROOR:Cannot open file'payroll'."<<endl;
	}
	is.close();
}
