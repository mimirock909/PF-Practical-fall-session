#include<stdio.h>
 int msqrt(int x);
 
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",msqrt(n));
	
	return 0;
}
int msqrt(int x) {
    int i=1;
    while (1){
       
	    int square= i * i;
        
        if(x==square){
           
		    return i;
		    
        }else if(square>x){
           
		    return i-1;
		    
        }
        i++;

    } 
 }
