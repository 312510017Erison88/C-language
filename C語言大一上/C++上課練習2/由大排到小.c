#include<stdio.h>
#define SIZE 10
int main(void)
{
	int a[SIZE]={2,6,4,8,10,12,89,68,45,6};
	int pass;
	size_t i;
	int hold;
	puts("Data items in oringinal order");
	
	for(i=0;i<SIZE;++i)
	{
		printf("%4d",a[i]);
	}
	for(pass=1;pass<SIZE;++pass)//pass=1代表拿第二個位置去比
	{
		for(i=0;i<SIZE-1;++i)
		{
			if(a[i]<a[i+1])
			{
				hold=a[i];//先把a[i]放入hold存 
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	puts("\nData items in ascending order");
	for(i=0;i<SIZE;++i)
	{
		printf("%4d",a[i]);
	}
}
