#include<stdio.h>
void matrixinput(int r1,int r2,int c1,int c2,int A[r1][c1],int B[r2][c2]);
int matrixmulti(int r1,int c1,int r2,int c2,int A[r1][c1],int B[r2][c2],int C[r1][c2]);
int main(){
	 int r1, c1, r2, c2;
    
    printf("Enter rows and columns of A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of D: ");
    scanf("%d %d", &r2, &c2);
   
    int A[r1][c1], B[r2][c2], C[r1][c2];
  
     matrixmulti(r1,c1,r2,c2,A,B,C);
	return 0;
}
void matrixinput(int r1,int r2,int c1,int c2,int A[r1][c1],int B[r2][c2]){
	int i,j;
	  for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("enter A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("enter B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
}
int matrixmulti(int r1,int c1,int r2,int c2,int A[r1][c1],int B[r2][c2],int C[r1][c2]){
 	int i, j, k;
 	matrixinput(r1,r2,c1,c2, A, B);
    	if (c1 != r2) {
         printf("Matrix multiplication not possible!\n");
         return 0;
     	}
       for (i = 0; i < r1; i++) {
         for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("matrix C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }
    }
