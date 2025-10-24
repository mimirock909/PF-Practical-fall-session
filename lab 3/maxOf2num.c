#include<stdio.h>
int main(){
	int num1;
	int num2;
    printf("enter number1 : ");
    scanf("%d",&num1);	
    printf("enter number2 : ");
    scanf("%d",&num2);
    (num1==num2)?printf("the numbers are equal!"):
	   (num1>num2)?printf("%d > %d",num1,num2):
	      printf("%d > %d",num2,num1);
    return 0;
 
}
