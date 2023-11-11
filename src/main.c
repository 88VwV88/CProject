#include <time.h>
#include <stdio.h>
#include <stdlib.h>

inline void printMatrix(int *, int, int);
inline void addMatrix(int *, int *, int *, int, int);

int main() {
    srand(time(NULL));
    int n=3, A[n][n], B[n][n], C[n][n];
    for (int i=0; i<n; ++i) 
        for (int j=0; j<n; ++j) {
            A[i][j] = 1 + rand() % 100;
            B[i][j] = 1 + rand() % 100;
        }
    printf("\nA: \n");
    printMatrix(A, n, n);
    printf("\nB: \n");
    printMatrix(B, n, n);
    addMatrix(A, B, C, n, n);
    printf("\nC: \n");
    printMatrix(C, n, n);

    return 0;
}

void printMatrix(int *A, int n, int m) {
    int i, j;
    for (i=0; i<n; ++i) {
        for (j=0; j<m; ++j)
            printf("%d ", A[i+m*j]);
        printf("\n");
    }
}
void addMatrix(int *A, int *B, int*C, int n, int m) {
    int i, j;
    for (i=0; i<n; ++i)
        for (j=0; j<m; ++j)
            C[i+m*j] = A[i+m*j] + B[i+m*j];
}