#include<iostream>
#include<fstream>//���ļ���д�ļ��Ĺ��� 
using namespace std;
int main()
{
	char ch;
	//ifstream���tfiel��������ʱ��"payroll"�ļ�
	//�Զ����Ƶ���ʽ��Ĭ��λ��Ϊ��һ���ֽ� 
	//nocreate��������ļ������ھͲ������ⴴ�� 
	ifstream tfile("payroll",ios::binary|ios::nocrerate);
	if(tfile)//�ļ��ɹ��� 
	{
		tfile.seekg(8);//��ǰ��дλ�õ������ڰ˸��ֽ� 
		while(tfile.good())//ȷ��ÿ�ζ�д���� 
		{
			tfile.get(ch);//��ȡһ���ַ� 
			if(!ch)break;
			cout<<ch;
		}
	}
	else //���ļ�ʧ�� 
	{
		cout<<"ERRO:Cannot open file 'payroll'."<<endl;
	}
	tfile.close();//�ر��ļ� 
}
