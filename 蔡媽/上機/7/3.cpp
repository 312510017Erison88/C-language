#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int y,num,mul_max,mul;
	scanf("%d",&y);
	mul_max=y/RAND_MAX;
	
	int range=mul_max+1;
	int bound=(RAND_MAX+1)/range,x;
	do
	{
		x=rand();
	}
	while(x>=bound*range);
	mul=x%range;
	num=mul*(RAND_MAX+1);
	if(mul!=mul_max)
		num+=rand();
	else
	{
		range=y-num+1;
		bound=(RAND_MAX+1)/range;
		do
		{
			x=rand();
		}
		while(x>=bound*range);
		num+=x%range;
	}
	printf("%d\n",num);
	
	return 0;
}
