#include<stdio.h>
int canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {

    int count=0,i;

    if(n == 0)
	{
		return 1;
	 } 
    if(n > flowerbedSize) {
    	return 0;
	}

    if(flowerbedSize == 1){
        return (flowerbed[0] == 0 && n <= 1);
    }

    if(flowerbed[0]==0 && flowerbed[1]==0){
        flowerbed[0]=1;
        count++;
    }

    for(i=1;i<flowerbedSize-1;i++){
        if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
            flowerbed[i]=1;
            count++;
        }
    }

    if(flowerbed[flowerbedSize-2]==0 && flowerbed[flowerbedSize-1]==0){
        flowerbed[flowerbedSize-1]=1;
        count++;
    }

    return count >= n;


}
   int main (){
   	int n,flowerbedSize,i;
   	scanf("%d",&flowerbedSize);
   	int flowerbed[flowerbedSize];
   	for(i=0;i<flowerbedSize;i++){
   		scanf("%d",&flowerbed[i]);
	   }
	   scanf("%d",&n);
	  if(canPlaceFlowers( flowerbed,  flowerbedSize,  n)){
	  	printf("true");
	  } else{
	  	printf("false");
	  }
   	
   }
