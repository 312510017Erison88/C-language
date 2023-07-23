#include <iostream>
using namespace std;
int average(double a,double b);
int average(double c,double d,double e);
int main()
{
	int n1=5,n2=9,n3=18;
	average(n1,n2);
	average(n1,n2,n3);
	return 0; 
}
int average(double a,double b)
{
	cout<<(a+b)/2<<""<<endl;
}
int average(double c,double d,double e)
{
	cout<<(c+d+e)/3<<""<<endl;
}
