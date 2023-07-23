#include <iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int num1=7;
	int num2=9;
	swap(num1,num2);
	cout<<num1<<endl;
	cout<<num2<<endl;
	return 0; 
}

void swap(int &a,int &b)
{
	int hold;
	hold=a;
	a=b;
	b=hold;
}
