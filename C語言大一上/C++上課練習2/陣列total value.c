#include<stdio.h>
#define size 12//�w�qsize��12�Ӧ�m 
int main(void)
{
	int a[size]={1,3,5,4,7,2,99,16,45,67,89,45};
	size_t i;
	int total=0;
	for(i=0;i<size;++i)
	{
		total+=a[i];
	}
	printf("Total of array element values is %d\n",total);
} 
