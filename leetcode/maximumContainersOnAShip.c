#include<stdio.h>
int maxContainers(int n, int w, int maxWeight) {
  int maxi=maxWeight/w;
      if(maxi>n*n){
      	return n*n;
	  }
	  return maxi;
   }
int main(){
	int n,w,maxWeight;
	scanf("%d",&n);
	scanf("%d",&w);
	scanf("%d",&maxWeight);
	printf("%d",maxContainers(n,w,maxWeight));
	return 0;
}
