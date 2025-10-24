#include<stdio.h>
int main()
{
    float GB;
    float bill;
    printf("Enter your GB : ");
    scanf("%f",&GB);

    if(GB>=100){
        bill=GB*2;
        printf("Your bill is :%.2f ",bill);
    }else if((GB>=101) && (GB<=200)){
        bill=(GB*1.5)+(100*2); 
        printf("Your bill is :%.2f ",bill);
    }else if(GB>=201 && GB<=400){
        bill=(GB*1)+(100*2)+(100*1.5);
        printf("Your bill is :%.2f ",bill);
    }else if(GB>=401){
        bill=(GB*0.5)+(100*2)+(100*1.5)+(200*1);
        printf("Your bill is : %.2f",bill);
    }
    return 0;
}
