#include  <iostream>
using namespace std;
int main()
{
	int a,*p1;
	p1=&a;//p1存的是a的位置 
	*p1=45;//循著p1位置所存的內容 即a的內容 
	cout<<a<<endl;
	cout<<*p1<<endl;
	////////////////////////////////////
	int *p;
	p=new int;//good habit to check 有沒有要記憶體 
	if(p!=NULL)
	{
		cout<<"sufficient memory.\n";
		delete p;
		p=NULL;
		exit(1);
	}
	
	return 0;
}
