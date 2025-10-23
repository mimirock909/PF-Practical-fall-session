#include<stdio.h>
int main(){
	 int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter rows and columns of A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of D: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    int A[r1][c1], D[r2][c2], C[r1][c2];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("enter A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("enter D[%d][%d] = ", i, j);
            scanf("%d", &D[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * D[k][j];
            }
            printf("matrix C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }
	return 0;
}
