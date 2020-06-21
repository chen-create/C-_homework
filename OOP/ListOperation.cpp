#include <iostream>
#include <iomanip>
using namespace std;
template<class T> 
struct node
{
    T data;
    node<T>* next;
};

template<class T>
class linkedList
{
public:
    linkedList();
    virtual ~linkedList();
    void insert( int value );
    bool initiate();
    bool isEmpty();
	bool remove( int pos, int& value );
    void print();
    int Length();
private:
    node<T> *head;
    int len;
};

template<class T> 
linkedList<T>::linkedList()
{
	head=NULL;
	len=0;
}

template<class T> 
linkedList<T>::~linkedList()
{
	node<T> *tmp=head;
	while(tmp->next)
	{
		node<T> *q=tmp;
		tmp=tmp->next;
		delete q;
	}
}

template<class T> 
bool linkedList<T>::initiate() 
{
	head=new node<T>;
	if(!head)
		return true;
	else
		return false;
	
}

template<class T> 
void linkedList<T>::insert(int value)
{
	node<T>* tmp=head;
	node<T>* last=NULL;
	while(tmp)
	{
		last=tmp;
		tmp=tmp->next;
	}	
	tmp->next=new node<T>;
	tmp->date=value;
	tmp->next=NULL;
	len++;
}

template<class T> 
bool linkedList<T>::isEmpty()
{
	return head->next==NULL;
}

template<class T>
int linkedList<T>::Length()
{
	return len;
}

template<class T>
bool linkedList<T>::remove(int pos,int&value)
{
	if(head==NULL||head->next==NULL)
	return false;
	else if(pos>len)
	{
	cout<<"pos > len, failed"<<endl;
	return false;}
	else if(pos<=0)
	{
	cout<<"pos <= 0, failed"<<endl;
	return false;}
		node<T>*p=head->next;
		node<T>*q=head;
		int count=1;
		while(p!=NULL)
		{
			if(count==pos)
			{
				q->next=p->next;
				value=p->data;
				delete p;
				len--;
				return true;
			}
			else
			{
				q=p;
				p=p->next;
			}
			count++;
		}
	return false;
}









int main(int argc, char* argv[])
{
    linkedList<int> L1;
    int n;
    int val;
    //初始化链表
    if(!L1.initiate())
        return 0;

    cin>>n;//输入链表中数据个数
    for(int i=0; i<n; i++) //输入n个数，并插入链表
    {
        cin>>val;
        L1.insert(val);
    }
    cout << "Origin Length：" << L1.Length() << endl;//输出链表长度
    cout << "data：" ;
    L1.print();//打印链表

    cin>>n;//输入需要删除的数据的位置
    if (L1.remove(n,val))
    {
        //删除位置n的数据，并将删除的数据值放在val中
        cout<<"Delete the data at position("<<n<<"):"<<val<<endl;
        cout<< "New Length：" << L1.Length()<< endl;//输出链表长度
        cout<< "data：" ;
        L1.print();//打印链表
    }

    return 0;
}


