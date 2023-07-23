#include <stdio.h>
#define size 10
int main(void)
{
	int a[]={6, 15, 95, 98, 23, 15, 95, 15, 23, 6};
	int i;
	for(i=1;i<size;++i)
	{
		printf("a%d-a%d=%d\n",i,i-1,a[i]-a[i-1]);
	}
} 
