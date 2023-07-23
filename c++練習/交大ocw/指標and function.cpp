#include <iostream>
using namespace std;
int *display();
int main()
{
	cout<<*display()<<endl;
}
int *display()
{
	int *ptr=new int(0);
	int b[3]={10,20,30};
	for(int i=0;i<3;i++)
	{
		*ptr+=b[i];	
	} 
	return ptr;
}
