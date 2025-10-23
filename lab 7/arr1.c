#include<stdio.h>
int main(){
	int a,i,sum=0,avgsum=0,avg;
	printf("enter size of array=");
	scanf("%d",&a);
	int nums[a];
	for( i=0;i<a;i++){
		printf("enter number %d",i);
		scanf("%d",&nums[i]);
		if(nums[i]%2==0){
			sum+=nums[i];
		}
		avgsum+=nums[i];
	}
    avg=avgsum/a;
    printf("sum of even numbers= %d",sum);
    printf("average = %d",avg);
	
	return 0;
}
