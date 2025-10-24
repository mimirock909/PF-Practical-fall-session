#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("enter three numbers:\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	(num1<num2 && num1<num3)?printf("max=%d",num1):
		(num2<num1 && num2<num3) ? printf("max=%d",num2):
			printf("max= %d",num3);
			return 0;
}
