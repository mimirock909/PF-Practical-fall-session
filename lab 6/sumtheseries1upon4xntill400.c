#include<stdio.h>
int main(){
    int denominator=4;
    float sum=1.0;
    while(denominator<=400){
        sum+=1.0/denominator;
        denominator+=4;
    }
    printf("\nSum=%.4f\n ",sum);

    return 0;
}
