#include<stdio.h>
int checkPerfectNumber(int num) {
    int i, j,sum=0 ;
    for (i=1;i<num;i++){
    	if(num% i==0){
    		sum+=i;
		}
	}
	if(sum==num){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	if(checkPerfectNumber(n)){
		printf("true");
	}	
	else{
		printf("false");
	}
}





