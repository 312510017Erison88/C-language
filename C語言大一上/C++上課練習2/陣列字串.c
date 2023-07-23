#include <stdio.h>
#define SIZE 20

int main( void )
{
   char string1[ SIZE ]; // reserves 20 characters
   char string2[] = "string literal"; // reserves 15 characters
   size_t i;
   printf("%s", "Enter a string (no longer than 19 characters): ");
   scanf( "%19s", string1 );
   printf( "string1 is: %s\nstring2 is: %s\n"                  
           "string1 with spaces between characters is:\n",     
           string1, string2);                                    
   // output characters until null character is reached  
   for ( i = 0; i < SIZE && string1[ i ] != '\0'; ++i )//'\0'«ü¦r¦êµ²§ô²Å¸¹ 
	{
      	printf( "%c ", string1[ i ]);                     
   	}                                       
}




