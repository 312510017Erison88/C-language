#include <stdio.h>

int main(void)
{
int num; 
printf("Input= ");
scanf("%d",&num);

if (num%2==1)
	printf("%d is odd", num);
else
	printf("%d is even", num);


}
