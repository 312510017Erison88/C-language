#include<stdio.h>
#define size 10//�w�qsize��10�Ӧ�m 
int main(void)
{
	int s[size];
	size_t j;//size_t��unsigned int 
	for(j=0;j<size;++j)
	{
		s[j]=2+2*j;//�w�q���� 
	}
	printf("%s%13s\n","Element","Value");
	
	for(j=0;j<size;++j)
	{
		printf("%7u%13d\n",j,s[j]);	
	}
}
