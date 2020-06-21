/*
vector动态数组对象的定义： vector<元素类型>数组对象名(数组长度);
对数组元素的引用： 数组对象名[下标表达式]
获得数组长度： 数组对象名.size() 
*/
#include<iostream>
#include<vector> 
using namespace std;
//计算arr数组中元素的平均值 
double average(const vector<double>&arr)
{
	double sum=0;
	for(unsigned i=0;i<arr.size();i++)
	sum+=arr[i];
	return sum/arr.size();
}

int main()
{
	unsigned n;
	cout<<"n=";
	cin>>n;
	vector<double>arr(n);//创建数组对象
	cout<<"Please input" <<n<<"real numbers:"<<endl;
	for(unsigned i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Average="<<average(arr)<<endl;
	return 0;
}

