#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int reverse(int x){
	int lastdigit,rever=0;
     while(x!=0){
      lastdigit=x%10;
        if (rever > INT32_MAX/10 || rever < INT32_MIN/10) {
            return 0;
        }
      x/=10;
      rever=rever*10+lastdigit;
	 }
	 return rever; 
}

int main(){
   int x;
   scanf("%d",&x);
   printf("%d",reverse(x));

}

	

