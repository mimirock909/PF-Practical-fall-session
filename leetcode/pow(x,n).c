#include<stdio.h>
double myPow(double x, int n) {
   double power=1.0;
   int i;
   double res;
    if(n>0){
       for (i = 0; i < n; i++) {
            power *= x;
        }
        return power;
    }
    else if (n < 0) {
        for (i = 0; i < -n; i++) {   // run loop for |n|
            power *= x;
        }
        return 1.0 / power;
    }
    else{
        return 1.0;
    }
    
}
int main(){
 double x;
    int n;
    scanf("%lf", &x);scanf("%d", &n);
;
    printf("%.4lf",myPow(x,n));
}
