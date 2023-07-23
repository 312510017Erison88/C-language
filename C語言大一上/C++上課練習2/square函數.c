#include<stdio.h>
int square(int y);

int main()
{
	int x;
	for(x=1;x<=10;x++)
	{
		printf("%d",square(x));
		printf("\t");
	}
}
int square(int y)
{
	return y*y;
}
