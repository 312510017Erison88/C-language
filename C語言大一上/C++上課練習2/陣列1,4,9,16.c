#include<stdio.h>
int main(void)
{
	int n[10];//��10�Ӧ�m�A�bmain�{���̭� 
	size_t i;//size_t��unsigned int 
	for(i=0;i<10;++i)
	{
		n[i]=i*i; 
	}
	printf("%s%13s\n","Element","Value");
	
	for(i=0;i<10;++i)
	{
		printf("%7u%13d\n",i,n[i]);
	}
}
	
