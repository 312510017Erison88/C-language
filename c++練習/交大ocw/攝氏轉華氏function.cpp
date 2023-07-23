#include <iostream>
using namespace std;
void showresult(double f,double c);
int main()
{
	int c=5,f;
	showresult(f,c);
	return 0; 
}
void showresult(double f,double c)
{
	f=c*9/5+32;
	cout<<f<<" degrees Fahrenheit equals\n"<<c<<" degree Celsius\n";
}
