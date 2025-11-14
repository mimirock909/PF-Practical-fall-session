#include<stdio.h>
int isPowerOfTwo(int n) {
	if(n==1){
		return 1;
	}

 while(n!=1) {
 	if(n%2==0){
 		n =n/2;
	 }
	 else{
	 	return 0;
	 }
 }  
 return 1;
}
int main(){
	int n;
	scanf("%d",&n);
  if(isPowerOfTwo( n)){
  	printf("true");
  }	
  else{
  	printf("false");
  }
  return 0;
	
}





