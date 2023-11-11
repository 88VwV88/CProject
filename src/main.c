#include <time.h>
#include <stdio.h>
#include <stdlib.h>

inline void printMatrix(int, int, int (*)[]);
inline void addMatrix(int, int, int (*)[], int (*)[], int (*)[]);

int main() {
    srand(time(NULL));
    int n=3, A[n][n], B[n][n], C[n][n];
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j) {
            A[i][j] = 1 + rand() % 100;
            B[i][j] = 1 + rand() % 100;
        }
    printf("\nA: \n");
    printMatrix(n, n, A);
    printf("\nB: \n");
    printMatrix(n, n, B);
    addMatrix(n, n, A, B, C);
    printf("\nC: \n");
    printMatrix(C, n, n);

    return 0;
}

void printMatrix(int n, int m, int *A[m]) {
    int i, j;
    for (i=0; i<n; ++i) {
        for (j=0; j<m; ++j)
            printf("%d ", A[i+m*j]);
        printf("\n");
    }
}
void addMatrix(int n, int m, int *A[m], int *B[m], int*C[m]) {
    int i, j;
    for (i=0; i<n; ++i)
        for (j=0; j<m; ++j)
            C[i][j] = A[i][j] + B[i][j];
}