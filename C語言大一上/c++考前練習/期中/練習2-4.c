#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i,x=65;
	for(i=1;i<=9;i++)
	{
		printf("%c",x);
		x=x+1;
		if(i%3==0)
		printf("\n");
	}
}

