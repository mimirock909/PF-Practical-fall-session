#include<stdio.h>
void input(int *x,int *y);
int sum ();
int main(){
	
 printf("sum is :%d",sum());
	
	
}
int sum(){
	int x,y;
	input(&x,&y);
	return x+y;
}
void input(int *x,int *y){
	printf("enter first number :");
	scanf("%d",x);
	printf("enter second number :");
	scanf("%d",y);
}
