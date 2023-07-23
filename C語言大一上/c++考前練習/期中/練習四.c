#include <stdio.h>
#include <stdlib.h>
int main()
{
	int counter; 
	for(counter=1;counter<=1000;counter++)
		if ((counter%7==0)&&(counter%3==0))
	{
	printf("%d\n",counter);
	}	
	return 0;
}
