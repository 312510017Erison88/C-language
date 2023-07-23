#include <stdio.h>

void cube( int *nPtr ); // function prototype

int main( void )
{
   int number = 5;
   printf( "The original value of number is %d", number );
   
   cube(&number);

   printf( "\nThe new value of number is %d\n", number );
} // end main

void cube( int *nPtr )     //function body                         
{                                                              
   *nPtr = *nPtr * *nPtr * *nPtr; // 即三個*nPtr相乘         
}                        
                          



