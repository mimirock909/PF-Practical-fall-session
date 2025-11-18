#include<stdio.h>
int containsNearbyDuplicate(int* nums, int numsSize, int k) {
	int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j] && (j-i)<=k){
                  return 1;
            }
        }
    }
}
int main(){
	int numsSize,i,k;
	scanf("%d",&numsSize);
	scanf("%d",&k);
	int nums[numsSize];
	for (i=0;i<numsSize;i++){
		scanf("%d",&nums[i]);
	}
	if(containsNearbyDuplicate(nums,numsSize,k)){
		printf("true");
	}else{
		printf("false");
	}
	
}
