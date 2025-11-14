#include<stdio.h>

int fib(int n){
    if (n==0){
       return 0;
    }
    if(n==1){
        return 1;
    }
     return  fib(n-1) + fib (n-2);


}
void printFib(int n) {
    if (n < 0) return;
    printFib(n - 1);  // recursion to print in correct order
    printf("%d ", fib(n));
}
int main (){
	int n;
	scanf("%d",&n);
    printFib(n-1);
	return 0;
}
