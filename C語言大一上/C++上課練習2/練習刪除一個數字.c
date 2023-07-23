#include <stdio.h>
int main( void )
{         
   int n[10]={32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
   size_t i;
   printf("%s%13s\n","Element","Value");
	
	for(i=5;i<10;i++)
	{
	   	n[i]=n[i+1];
	}
	   n[9]=0;
    for ( i = 0; i < 10; ++i )
	{
	   printf("%7u%13d\n",i,n[i]);
	}
} 





