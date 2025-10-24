#include<stdio.h>
int main(void){
	float P , T , R ; //principle , time period , rate of intrest
	printf(" enter principle value between Rs.100 to Rs.1,000,000 :");
	scanf("%f",&P);
	printf("enter rate of intrest between 5 to 10 :");
	scanf("%f",&R);
	printf("enter time period in years (between 1 to 10) :");
	scanf("%f",&T);
	float SI=( P * R * T)/100; //formula for calculating simple intrest
	printf("the simple intrest is = %f",SI);
	
	return 0;
}
