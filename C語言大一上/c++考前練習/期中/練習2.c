#include <stdio.h>
#include<stdlib.h>
#include <time.h>
main()
{
	int a,x,counter=0;
	srand(time(NULL));
	for(x=1;x<=10000;x++)
	{
		a=(rand()%6)+1;
		if(a==3)
		counter++;
	}
	printf("%d",counter);
} 
