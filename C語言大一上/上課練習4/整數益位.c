#include <stdio.h>

int main( void )
{ 
   printf( "%d\n", 455 );
   printf( "%i\n", 455 ); // i same as d in printf
   printf( "%d\n", +455 ); // plus sign does not print
   printf( "%d\n", -455 ); // minus sign prints
   printf( "%hd\n", 32000 );
   printf( "%ld\n", 2000000000L ); // L suffix makes literal a long 
   printf( "%o\n", 455 ); // octal八進位 
   printf( "%u\n", 455 );
   printf( "%u\n", -455 );
   printf( "%x\n", 455 ); // hexadecimal with lowercase letters,16進制無號數
   printf( "%X\n", 455 ); // hexidecimal with uppercase letters,16進制無號數大寫 
} // end main
