#include<stdio.h>
int main(){
	//two sum
	int n, i, j, tot;
    int* result = (int*)malloc(2 * sizeof(int));
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&tot);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]==tot){
				result[0]=i;
				result[1]=j;
				printf("{%d,%d}",result[0].result[1]);
				return 0;
			}
		}
	}
	
}

