#include<iostream> 
using namespace std;
//����ṹ��Date 
struct Date
{
	int month,day,year;
};
int main()
{
	Date dt={6,10,92};//Date�ı���dt��ʼ��Ϊ6��10��92�� 
	ofstream tfile("date.dat",ios::binary);
		//����ofstream����tfile,�򿪵�ǰĿ¼date.dat�Զ����Ƶķ�ʽ 
	tfile.write((char*)&dt,sizeof dt);
		//(char����ַ�ָ��/һ���ڴ����ʼ��ַ��dt������С/�ֽ���) 
		//tfile�����write������dtд�룬ǿ��ת����char�� 
	tfile.close();
		//�ر��ļ� 
}

