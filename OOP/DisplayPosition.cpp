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
		{
			while(tfile.good())//ȷ��ÿ�ζ�д���� 
			{
				streampos here=tfile.tellg();
					//�ļ�ָ��sreampose��tellg�����ķ���ֵ 
				tfile.get(ch);//�����ַ� 
				if(ch==' ')
					cout<<"\nPosition"<<here<<"is a space";
			}
		}
	else //���ļ�ʧ�� 
	{
		cout<<"ERRO:Cannot open file 'payroll'."<<endl;
	}
	tfile.close();//�ر��ļ� 
}
