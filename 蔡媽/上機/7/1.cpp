#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int range=10000, x;
	int bound=(RAND_MAX+1)/range;
	printf("%d\n", RAND_MAX);
	printf("%d\n", range);
	do
	{
		x=rand();
	}
	while(x>=bound*range);
	printf("%d\n",x%range+15);
	return 0;
}
