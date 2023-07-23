#include <stdio.h>
#define size 10
int main(void)
{
	int a[]={6, 15, 95, 98, 23, 15, 95, 15, 23, 6};
	int i;
	for(i=0;i<size;++i)
	{
		if(a[i]!=95)
		{
		continue;
		}
		else
		{
			printf("95 is at a%d\n",i+1);
			break;
		}
	}
} 
