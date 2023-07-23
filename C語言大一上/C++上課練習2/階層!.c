#include<stdio.h>
unsigned long long int factorial (unsigned int number);//long long表數字很長 
//factorial是階層的意思 
int main(void)
{
	unsigned int i;//unsigned表取正的 
	for(i=0;i<=21;i++)
	{
		printf("%u!=%11u\n",i,factorial(i));
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
