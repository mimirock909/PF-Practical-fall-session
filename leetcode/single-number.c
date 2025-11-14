#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
int i,j,count;
for(i=0;i<numsSize;i++){
	count=0;
	for(j=0;j<numsSize;j++){
		 if(nums[i]==nums[j]){
    	count++;
	}
	}
	if(count==1){
		return nums[i];
	}
    }
    return 0;
}
int main(){
	int numsSize,i;
	scanf("%d",&numsSize);
	int nums [numsSize];
	for (i=0;i<numsSize;i++){
		scanf("%d",&nums[i]);
	}
	printf("%d",singleNumber(nums,numsSize));
	return 0;
}
