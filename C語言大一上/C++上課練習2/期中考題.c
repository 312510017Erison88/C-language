#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,i;
	char ch='b';
	for(i=1;i<=5;i++)
	{
		for(y=1;y<=i-1;y++)
		printf("*");
		for(x=1;x<=16-3*i;x++)
		{	
			if(ch>=98&&ch<112)
			{
				printf("%c",ch);
				ch=ch+2;
			}
			else if(ch==112)
			{
				printf("%c",ch);
				ch=98; 
			}
		}
			printf("\n");	
	}
	return 0;
}
