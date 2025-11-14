#include<stdio.h>

int happynum(int n);

int main(){
  int n;
  scanf("%d",&n);
  if(happynum(n)){
  	printf("is a happy number");
  }	else{
  	printf("not a happy number.");
  }
	
	
}
int happynum(int n){
	if (n==1){
		return 1;
		}
		int sum=0;
		while(n!=1 && n!=4){
			int sum=0;
			while(n!=0){
		 	int digit= n% 10;
		   	n/=10;
		 	sum+=digit*digit;
			}
          n=sum;
          

		}
	
	if(n==1){
		return 1;
	}else{
		return 0;
	}	
	
}



