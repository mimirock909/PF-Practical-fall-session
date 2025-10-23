#include<stdio.h>
int main(){
	int row,col;
	printf("enter rows = ");
	scanf("%d",&row);
	printf("enter  columns=");
	scanf("%d",&col);
	int matrix[row][col],max,i,j;
	 printf("Enter elements of the matrix:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	max=matrix[0][0];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(max<matrix[i][j]){
				max=matrix[i][j];
			}
		}
	}
	printf("maximum is =%d",max);
	
	
	return 0;
}
