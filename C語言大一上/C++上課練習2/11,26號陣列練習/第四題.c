#include <stdio.h>
#define size 10
int main(void)
{
	int a[size]={6, 15, 95, 98, 23, 15, 95, 15, 23, 6};
	int i,sum=0;
	for(i=0;i<size;++i)
	{
		if(a[i]!=15)
		{
			continue;
		}	
		else
		{
			sum+=1;
		}
	}
	printf("15­«½Æ%d¦¸",sum);
} 
