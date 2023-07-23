#include<stdio.h>
#define	SIZE 100
size_t linearsearch(const int array[],int key,size_t size);
int main()
{
	int a[SIZE];
	size_t x;
	int searchkey;
	size_t element;
	for(x=0;x<SIZE,++x)
	{
		a[x]=2*x;
	}
	puts("Enter integer search key:");
	sacnf("%d",&searchkey);
	element=linearseach(a,searchkey,SIZE);
	if (element!=-1)
	{
		printf("Found value in element %d\n",element);
	}
	else
	{
		puts("Value not found");
	}
}
size_t linearsearch(const int array[],int key,size_t SIZE)
{
	size_t n;
	for(n=0;n<SIZE;n++)
	{
		if (array[n]==key)
		{
			return 0;
		}
	}
	return-1;
}
