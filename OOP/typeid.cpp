#include<iostream>
#include<typeinfo>//ͷ�ļ� 
using namespace std;
class B
{
	public:
		virtual ~B() {}
};
class D:public B{};

//��ͨ����
void fun(B *b)//ָ��B0������ָ�� 
{
	const type_info &info1=typeid(b);
	//const type_info���͵�info1���ڻ�ȡ��b������ 
	const type_info &info2=typeid(*b);
	//���������Ϣ
	cout<<"typeid(b):"<<info1.name()<<endl;
		//type_info��name��Ա�����������ͣ�const char* 
	cout<<"typeid(b):"<<info2.name()<<endl;
	//�ж�*b�Ƿ�ΪB����
	if(info2==typeid(B)) 
		cout<<"A base class!"<<endl;
}

int main()
{
	B b;
	fun(&b);
	D d;
	fun(&d);
	return 0;
}

/*���н����
 typeid(b):P1B
typeid(b):1B
A base class!
typeid(b):P1B
typeid(b):1D
*/

