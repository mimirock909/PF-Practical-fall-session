#include<stdio.h>
int maxProfit(int* prices, int pricesSize) {
     int i,j,max=0;
    for(i=0;i<pricesSize-1;i++){
        for(j=i;j<pricesSize;j++){
            if(prices[j]-prices[i]>max){
                max=prices[j]-prices[i];
            }
        }
    }
    return max;
}
int main(){
	int priceSize,i;
	scanf("%d",&priceSize);
	int price[priceSize];
	for(i=0;i<priceSize;i++){
		scanf("%d",&price[i]);
	}
	printf("%d",maxProfit(price,priceSize));
	return 0;
}
