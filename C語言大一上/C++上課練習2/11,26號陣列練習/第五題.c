#include <stdio.h>
#define size 10
int main(void)
{
	int a[]={6,15,95,98,23,15,95,15,23,6};
	int i,j;
	
	for(i=0;i<size;++i)
	{
		int flag=0;
		for(j=0;j<size;j++)
		{
			if(a[i]==a[j])
			{
				flag++;
			}
		}
		if(flag==1)
		{
			printf("%d",a[i]); 
		}
	}
}
