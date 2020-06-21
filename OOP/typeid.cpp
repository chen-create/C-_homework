#include<iostream>
#include<typeinfo>//头文件 
using namespace std;
class B
{
	public:
		virtual ~B() {}
};
class D:public B{};

//普通函数
void fun(B *b)//指向B0函数的指针 
{
	const type_info &info1=typeid(b);
	//const type_info类型的info1等于获取的b的类型 
	const type_info &info2=typeid(*b);
	//输出类型信息
	cout<<"typeid(b):"<<info1.name()<<endl;
		//type_info的name成员函数返回类型，const char* 
	cout<<"typeid(b):"<<info2.name()<<endl;
	//判断*b是否为B类型
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

/*运行结果：
 typeid(b):P1B
typeid(b):1B
A base class!
typeid(b):P1B
typeid(b):1D
*/

