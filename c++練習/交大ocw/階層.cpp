#include <iostream>
using namespace std;
unsigned long long int factorial (unsigned int number);
int main()
{
	unsigned int i;//unsigned表取正的 
	for(i=0;i<=11;i++)
	{
		cout<<i<<"!="<<factorial(i)<<endl;
	}
	return 0;
}
unsigned long long int factorial(unsigned int number)
{
	if(number<=1)
	{
		return 1;
	}
	else
	{
		return(number*factorial(number-1));
	}	
} 
