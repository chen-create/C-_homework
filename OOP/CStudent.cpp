#include  <iostream>
#include  <string>
using  namespace  std;

class  CStudent
{	
	public:
		CStudent() :name("noname")
		{
			count+=1;
			cout<<name <<" is contructing"<<endl;
		}
		CStudent(string Name,int Age) 
		{
			name=Name;
			age=Age;
			count+=1;
			cout<<name<<" is contructing"<<endl;
		}
		~CStudent() 
		{
			count-=1;
			cout<<name<<" is destructing"<<endl;
		}
		void printname() 
		{
			cout<<"name:"<<name<<endl;
		}
		static int getcount() 
		{
			return count;
		}
	private:
		string name;
		int age;
		static int count;
};
int CStudent::count=0;
int  main()
{
        cout  <<  "������ѧ��"  <<  CStudent::getcount()  <<  endl;
        {
                CStudent  stuB[5];
                stuB[4].printname();
                cout  <<  "������ѧ��"  <<  CStudent::getcount()  <<  endl;
        }
        cout  <<  "������ѧ��"  <<  CStudent::getcount()  <<  endl;
        {
                CStudent  stuA[2]  =  {CStudent("Tom",  3),  CStudent("Jerry",  2)};
                for  (int  i  =  0;  i  <  2;  i++)
                {
                        stuA[i].printname();
                }
                cout  <<  "������ѧ��"  <<  CStudent::getcount()  <<  endl;
        }
        cout  <<  "������ѧ��"  <<  CStudent::getcount()  <<  endl;

        return  0;
}


