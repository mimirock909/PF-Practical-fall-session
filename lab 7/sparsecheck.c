#include<stdio.h>
int main(){
	int row,col,i,j,count=0;
	
	printf("enter rows = ");
	scanf("%d",&row);
	printf("enter  columns=");
	scanf("%d",&col);
	int matrix[row][col];

    printf("Enter elements of the matrix:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j]==0){
				count++;
			}
		}
	}
	if(count>=((row*col)/2)){
		printf("sparse matrix");
	}
	else{
		printf("not a sparse matrix");
	}
	
	
	return 0;
}
