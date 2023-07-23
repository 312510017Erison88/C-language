#include<stdio.h>
#define size 10//定義size有10個位置 
int main(void)
{
	int s[size];
	size_t j;//size_t表unsigned int 
	for(j=0;j<size;++j)
	{
		s[j]=2+2*j;//定義公式 
	}
	printf("%s%13s\n","Element","Value");
	
	for(j=0;j<size;++j)
	{
		printf("%7u%13d\n",j,s[j]);	
	}
}
