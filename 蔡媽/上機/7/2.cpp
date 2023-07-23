#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int time=rand()%4,num;
	num=time*(RAND_MAX+1)+rand();
	
	printf("%d\n",RAND_MAX);
	printf("%d\n",num);
	return 0;
}
