#include <stdio.h>
#include <stdlib.h>
 main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=2*x-1;y++)
		printf("*");
		printf("\n");	
	}
}
