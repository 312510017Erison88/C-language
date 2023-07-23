#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, size_t size); // prototype
void swap ( int *a, int *b);  
int main(void)
{
   // initialize array a
   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   size_t i;
   puts( "Data items in original order" );

   for ( i=0;i<SIZE;++i ) {
      printf( "%4d",a[i]);
   }

   bubbleSort(a,SIZE); // sort the array

   puts("\nData items in ascending order");
   
   // loop through array a
   for ( i = 0; i < SIZE; ++i ){
      printf("%4d",a[i]);   
   }
} // end main

void bubbleSort( int * const array, size_t size )
{
   unsigned int pass; // pass counter
   size_t j; // comparison counter
   
   for ( pass=0;pass<size-1;++pass ) {
      for (j=0;j<size-1;++j) {
         if ( array[j]>array[j+1]) {
            swap( &array[j],&array[j+1]);
         } 
      } 
   }
}
                            
void swap( int *a, int *b )            
{                                                          
   int hold = *a;                                
   *a=*b;                            
   *b= hold;                                    
} 
