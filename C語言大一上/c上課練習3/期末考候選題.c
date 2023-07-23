#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr); // function prototype
   
int main(void)
{  
   char sentence[ SIZE ]; // create char array

   puts("Enter a line of text:");

   // use fgets to read line of text 
   fgets(sentence,SIZE,stdin);  //stdin���T�w�Φ���J��X 

   puts( "\nThe line printed backward is:" );
   reverse( sentence );
} // end main

// recursively outputs characters in string in reverse order
void reverse( const char * const sPtr )
{  
   // if end of the string
   if ('\0' == sPtr[ 0 ] ){
      return;//����return�]�i�H 
   } 
   else { // if not end of the string 
      reverse(&sPtr[ 0 ]+1 ); // recursion step,recursion�̭��٦�recursion                 
      putchar( sPtr[ 0 ] ); // use putchar to display character
   } 
} 







