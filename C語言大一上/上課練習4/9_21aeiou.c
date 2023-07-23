#include <stdio.h>

int main( void )
{ 
   char z[9]; // define array z
   printf("Enter string:");
   scanf("%5[aeiou]",z);// search for set of charactersuses ,the scan set [aeiou] to scan the
//input stream for vowels.

   printf( "The input was \"%s\"\n", z );
} // end main
 
