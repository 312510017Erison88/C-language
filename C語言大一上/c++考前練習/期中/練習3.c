#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i;
	int j;
	for(i=1;i<=9;i++)
	{
	for(j=1;j<=9;j++)
	{
		printf("%d*%d=%d\t",i,j,i*j);
	}
	printf("\n");
	}
}
