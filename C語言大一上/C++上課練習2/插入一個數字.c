#include <stdio.h>
int main( void )
{         
   int n[11] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
   size_t i;
   printf( "%s%13s\n", "Element", "Value" );
   for(i=10;i>5;--i)
   {
   	  n[i+1]=n[i];
   }
		n[4]=13;
   for(i=0;i<11;++i)
   {
   	 printf( "%7u%13d\n",i,n[i]);
   }
} 

