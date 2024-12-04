#include <stdio.h>
#include <stdlib.h>

void input_matrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int **matrix, int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrices(int **a, int **b, int **result, int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    
    printf("Enter dimensions of matrix A (rows cols): ");
    scanf("%d %d", &rowsA, &colsA);
    
    printf("Enter dimensions of matrix B (rows cols): ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int **a = (int **)malloc(rowsA * sizeof(int *));
    int **b = (int **)malloc(rowsB * sizeof(int *));
    int **result = (int **)malloc(rowsA * sizeof(int *));
    
    for (int i = 0; i < rowsA; i++) a[i] = (int *)malloc(colsA * sizeof(int));
    for (int i = 0; i < rowsB; i++) b[i] = (int *)malloc(colsB * sizeof(int));
    for (int i = 0; i < rowsA; i++) result[i] = (int *)malloc(colsB * sizeof(int));

    printf("Enter elements of matrix A:\n");
    input_matrix(a, rowsA, colsA);

    printf("Enter elements of matrix B:\n");
    input_matrix(b, rowsB, colsB);
    
    multiply_matrices(a, b, result, rowsA, colsA, colsB);

    printf("Result of matrix multiplication:\n");
    print_matrix(result, rowsA, colsB);

    for (int i = 0; i < rowsA; i++) {
        free(a[i]);
        free(result[i]);
    }
    for (int i = 0; i < rowsB; i++) free(b[i]);
    
    free(a);
    free(b);
    free(result);

    return 0;
}
