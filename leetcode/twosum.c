#include<stdio.h>
int main(){
	//two sum
	int n,i,j,tot;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&tot);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(arr[i]+arr[j]==tot){
				printf("{%d,%d}",i,j);
				return 0;
			}
		}
	}
}
