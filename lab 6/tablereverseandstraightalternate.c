#include<stdio.h>
int main(){
	int i=1,j=10,m,n;
	printf("enter the number whos table will be printed in desending order=");
	scanf("%d",&m);
	printf("enter th enumber whos table will be printed in ascending order =");
	scanf("%d",&n);
	for(;i<=10;i++){
		printf("%dx%d=%d\n",n,i,n*i);
		printf("%dx%d=%d\n",m,j,m*j);
		j--;
	}
	
	
	return 0;
}
