#include<stdio.h>
int ispalindrome(int x);
int main(){
	int x;
	scanf("%d",&x);
	ispalindrome(x);
	
}

int ispalindrome(int x){
	if(x<0){
		printf("false");
		return 0;
	}
    int i=0,j;
	int arr[20];
	while (x!=0){
     int digit=x% 10;
   	 x/=10;
     arr[i]=digit; 
   	 i++;
	}
	for(j=0;j<(i/2);j++){
		if(arr[j]!=arr[i-1-j]){
	     printf("false");
         return 0;
		}
	}
    printf ("true");
    return 1;

}
