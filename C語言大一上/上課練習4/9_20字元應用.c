#include <stdio.h>

int main(void)
{ 
   char x;      
   char y[9]; 
   
   printf("Enter a string:");
   scanf("%c%18s",&x,y);

   puts( "The input was:" );
   printf( "the character \"%c\" and the string \"%s\"\n",x,y);
} // end main

