#include<stdio.h>
void cubeByReference(int *nPtr) { 
 *nPtr = *nPtr * *nPtr * *nPtr; 
} 
int main( void ) { 
 int number ;
 scanf("%d",&number); 
 printf( "The number is %d \n", number ); 
 
 cubeByReference( &number); 
 printf( "The cube of number is %d", number ); 
}
