#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    inline void printMatrix(int, int, int *);
    inline void addMatrix(int, int, int *, int *, int *);
    inline void mulMatrix(int, int, int*, int*, int*);
    void cmulMatrix(int, int, int, int *);

    srand(time(NULL));
    int n=3, A[n][n], B[n][n], C[n][n];

    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j) {
            A[i][j] = rand()%10+1;
            B[i][j] = rand()%10+1;
        }

    printf("\nA: \n");
    printMatrix(n, n, (int *)A);

    printf("\nB: \n");
    printMatrix(n, n, (int *)B);

    cmulMatrix(rand()%10+1, n, n, (int *)A);
    mulMatrix(n, n, (int *)A, (int *)B, (int *)C);

    printf("\nC: \n");
    printMatrix(n, n, (int *)C);

    return 0;
}

void printMatrix(int n, int m, int *A) {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j)
            printf("%d ", A[i*m+j]);
        printf("\n");
    }
}
void addMatrix(int n, int m, int *A, int *B, int*C) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            C[i*m+j] = A[i*m+j] + B[i*m+j];
}
void mulMatrix(int n, int m, int*A, int*B, int *C) {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            C[i*m+j] = 0;
            for (int k=0; k<m; ++k)
                C[i*m+j] = A[i*m+k] * B[k*m+j];
        }
    }
}
void cmulMatrix(int c, int n, int m, int *A) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j) 
            A[i*m+j] *= c;
}
