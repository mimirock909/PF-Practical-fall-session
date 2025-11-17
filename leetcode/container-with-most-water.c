#include<stdio.h>
int maxArea(int* height, int heightSize) {
    int i,j,area=0;
   for(i=0;i<heightSize;i++){
       for(j=heightSize-1;j>i;j--){
           if(height[i]>=height[j]) {
              if (area<height[j]*(j-i)){
                  area=height[j]*(j-i);
              }
           }else{
           	 if (area<height[i]*(j-i)){
                  area=height[i]*(j-i);
              }
		   }
       }     
   }
   return area;
}

int main(){
	int heightSize,i;
	scanf("%d",&heightSize);
	int height[heightSize];
	for(i=0;i<heightSize;i++){
		scanf("%d",&height[i]);
	}
	printf("%d",maxArea(height,heightSize));
	return 0;
	}
