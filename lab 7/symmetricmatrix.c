#include<stdio.h>
int main(){
	  int size, i, j, istrans = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &size);
    int A[size][size], T[size][size];
    printf("\nEnter elements of matrix A:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            T[j][i] = A[i][j];
        }
    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (A[i][j] != T[i][j]) {
                istrans = 0;
                break;
            }
        }
    }
    printf("\nOriginal Matrix A:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of Matrix A:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    if (istrans == 1)
        printf("\nMatrix is Symmetric.\n");
    else
        printf("\nMatrix is Asymmetric.\n");
	
	
	return 0;
}
