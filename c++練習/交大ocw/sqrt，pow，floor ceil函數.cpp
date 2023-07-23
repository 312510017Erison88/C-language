#include <iostream>
#include <cstdlib> 
#include<iostream>
#include <cmath> 
using namespace std;
int main()
{
	float x=3.0,y=2.0;
	double result=pow(x,y);
	cout<<result<<""<<endl;
	
	x=2.25;
	double l=sqrt(x);
	cout<<l<<""<<endl;
	
	x=49.50;
	double xup=ceil(x);
	double xdown=floor(x);
	cout<<xup<<" vs "<<xdown;
	return 0;
}
