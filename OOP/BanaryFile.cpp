#include<iostream>
#include<fstream>
using namespace std;
//����ṹ�� 
struct student
{
	short stu_id;
	short score;
};

int main()
{
	//��������ѧ������n��n��ѧ�������� 
	//�洢��new����������a��
	int n;
	cin>>n;
	student *a=new student[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].stu_id>>a[i].score;
	}
	//ʹ��write�������Զ�������ʽ����a�����д�ŵ�n��ѧ��һ��д��out.txt�ļ���
	ofstream os("out.txt",ios::out|ios::binary);
	if(os)
	{
		os.write((char *)a,sizeof(student) *n);
		os.close();
	}
	//ʹ��read�������Զ�������ʽ��
	//ʹ��ѭ����ʽ����out.txt��ÿ�ζ���һ��ѧ����Ϣ���洢��new������
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
	//ʹ��write���������ı���ʽ��
	//��b�����д�ŵ�n��ѧ��һ��д��out.txt�ļ��У�Ҫ����ӵ��ļ�ĩβ
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












