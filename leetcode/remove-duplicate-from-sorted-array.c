#include <stdio.h>

int removeDuplicates(int* nums, int numsSize); 
int main(){
	int numsSize,i;
	scanf("%d",&numsSize);
	int nums[numsSize];
	 for(i=0;i<numsSize;i++){
  	scanf("%d",&nums[i]);
  }
   removeDuplicates(nums,numsSize);
	return 0;
}
int removeDuplicates(int* nums, int numsSize) {
  int i,j,k;
 
  for(i=0;i<numsSize-1;i++){
  	for(j=i;j<numsSize-1;j++){
  		if(nums[j]==nums[j+1]){
  	     for ( k = j+1; k < numsSize - 1; k++) {
              nums[k] = nums[k+1];  
		  }
		  numsSize--;
	  }
  }
}printf("%d,{",numsSize);
  for ( i = 0; i < numsSize; i++) {
        printf(" %d , ", nums[i]);
    }
    printf("}");
    return numsSize;
}

