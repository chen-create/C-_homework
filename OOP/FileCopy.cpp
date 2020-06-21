#include<iostream>
#include<fstream>
#include<vector>
#include <algorithm> 
using namespace std;
int main()
{
	ifstream is("a.txt");
	ofstream os("b.txt");
	vector<float> date;
	
	float t;
	if(!is)
		cout<<"file1 open error !"<<endl;
	else
	{
		//读数据 
		while(is.good())
		{
			is>>t;//文件输入流 
			date.push_back(t);
		}
		//排序算法 
		sort(date.begin(),date.end());
		if(!os)
		{
			cout<<"file2 open error !"<<endl;
		}
		else
		{
			for(unsigned int i=0;i<date.size()&&os.good();i++)
			{
				os<<date[i]<<" ";
			}
			os.close();
		}
		is.close();
	}
	//system("pouse");
}


/*
以上为改进
int main()
{
	float a[50]={0};
	int i=0;
	ifstream file1("a.txt",ios::in);
	if(!file1)
	{
		cout<<"file1 open error !"<<endl;
		exit(1); 
	}
	while(!file1.eof()){
		file1>>a[i];
		i++;
	}
	ofstream file2("b.txt",ios::out);
	if(!file2)
	{
		cout<<"file2 open error !"<<endl;
		exit(1); 
	}
	for(int j=0;j<i-1;j++)
		for(int k=0;k<i-j-1;k++)
			if(a[k]>a[k+1])
			{
				float temp;
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}	
	for(int t=0;t<i;t++)
	{
		file2<<a[t]<<" ";
	}
	file1.close();
	file2.close();
	return 0;
}
*/
