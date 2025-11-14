#include<stdio.h>
int removeElement(int* nums, int numsSize, int val);

int main(){
	int val,numsize,i;
	scanf("%d",&numsize);
	int nums[numsize];
	
	for ( i=0;i<numsize;i++){
	scanf("%d",&nums[i]);
	}
	scanf("%d",&val);
	removeElement(nums,numsize,val);
}
int removeElement(int* nums, int numsSize, int val) {
    int i,j;
	for(i=0;i<numsSize;i++){
		if(nums[i]==val){
			for(j=i;j<numsSize-1;j++){
				nums[j]=nums[j+1];
			}
			numsSize--;
			i--;
		}
	} 
	printf("%d,{",numsSize);
	for(i=0;i<numsSize;i++){
   	  printf("%d,",nums[i]);
	}
	printf("}");
	
	return numsSize;
}
