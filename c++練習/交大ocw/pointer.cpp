#include  <iostream>
using namespace std;
int main()
{
	int a,*p1;
	p1=&a;//p1�s���Oa����m 
	*p1=45;//�`��p1��m�Ҧs�����e �Ya�����e 
	cout<<a<<endl;
	cout<<*p1<<endl;
	////////////////////////////////////
	int *p;
	p=new int;//good habit to check ���S���n�O���� 
	if(p!=NULL)
	{
		cout<<"sufficient memory.\n";
		delete p;
		p=NULL;
		exit(1);
	}
	
	return 0;
}
