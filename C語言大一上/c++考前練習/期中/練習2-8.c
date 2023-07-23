#include <stdio.h>
#include <stdlib.h>
 main()
{
	int x,y,i;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=10-2*x;y++)
		printf(" ");
		for(i=1;i<=3*x-2;i++)
			printf("*");
			printf("\n");	
	}
}
