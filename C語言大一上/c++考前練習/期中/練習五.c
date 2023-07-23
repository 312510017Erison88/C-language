#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i,j,num1,num2;
	printf("input first number:");
	scanf("%d",&num1);
	printf("input second number:");
	scanf("%d",&num2);
	for(i=1;i<=num1&&i<=num2;i++)
	{
		if(num1%i==0&&num2%i==0){
			printf("the number is %d",i);
		}
	}
}
