#include <stdio.h>

void readMatrix(int r, int c, int mat[r][c]) {
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
}

void printMatrix(int r, int c, int mat[r][c]) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}


void addMatrices(int r, int c, int A[r][c], int B[r][c], int Res[r][c]) {
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            Res[i][j] = A[i][j] + B[i][j];
}

void transposeMatrix(int r, int c, int mat[r][c], int Trans[c][r]) {
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            Trans[j][i] = mat[i][j];
}


void multiplyMatrices(int r1, int c1, int r2, int c2, int A[r1][c1], int B[r2][c2], int Res[r1][c2]) {
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            Res[i][j] = 0;
            for(int k=0; k<c1; k++)
                Res[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    printf("Enter Rows and Cols for A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter Rows and Cols for B: ");
    scanf("%d %d", &r2, &c2);

    int A[r1][c1], B[r2][c2];
    
    printf("\n--- Fill Matrix A ---\n");
    readMatrix(r1, c1, A);
    printf("\n--- Fill Matrix B ---\n");
    readMatrix(r2, c2, B);

    
    if (r1 == r2 && c1 == c2) {
        int sumRes[r1][c1];
        addMatrices(r1, c1, A, B, sumRes);
        printf("\nResult of Addition:\n");
        printMatrix(r1, c1, sumRes);
    }

    if (c1 == r2) {
        int multRes[r1][c2];
        multiplyMatrices(r1, c1, r2, c2, A, B, multRes);
        printf("\nResult of Multiplication:\n");
        printMatrix(r1, c2, multRes);
    }

  
    int transA[c1][r1];
    transposeMatrix(r1, c1, A, transA);
    printf("\nTranspose of A:\n");
    printMatrix(c1, r1, transA);

    return 0;
}
