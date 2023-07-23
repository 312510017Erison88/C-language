#include <stdio.h>
#define SIZE 5
void modifyArray(int b[], size_t size);
void modifyElement(int e);             
// function main begins program execution
int main(void)
{
   int a[SIZE] = {0, 1, 2, 3, 4}; // initialize array a
   size_t i;
   puts( "Effects of passing entire array by reference:\n\nThe "
      "values of the original array are:" );
   for(i=0;i<SIZE;++i) 
   { 
      printf( "%3d", a[ i ]);
   } 
   puts( "" );
   // pass array a to modifyArray by reference
   modifyArray( a, SIZE );                           
   puts( "The values of the modified array are:" );
   for ( i = 0; i < SIZE; ++i ) 
   {
      printf( "%3d", a[ i ] );
   }
   printf("\n\n\nEffects of passing array element "
      "by value:\n\nThe value of a[3] is %d\n", a[ 3 ] );
   modifyElement(a[ 3 ]); // pass array element a[ 3 ] by value
   // output value of a[ 3 ]
   printf( "The value of a[ 3 ] is %d\n", a[ 3 ] );
} // end main
                                          
void modifyArray( int b[], size_t size )                               
{                                                                   
   size_t j;                                                                                                           
   for ( j = 0; j < size; ++j ){                                 
      b[ j ] *= 2; // actually modifies original array               
   }               
}                                  
// in function modifyElement, "e" is a local copy of array element
// a[ 3 ] passed from main                                     
void modifyElement( int e )                                       
{                                                                                                  
   printf( "Value in modifyElement is %d\n",e *= 2 );            
}                       
                            




