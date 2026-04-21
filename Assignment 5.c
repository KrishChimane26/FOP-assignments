#include <stdio.h>
#include <stdlib.h>

void matrixAddition();
void findSaddlepoint();
void findInverse();
void checkMagicSquare();

int main() {
    int choice;

    // Main Menu Loop
    while (1) {
        printf("\n--- Matrix Operations Menu ---\n");
        printf("1. Addition of two matrices\n");
        printf("2. Saddle point of a matrix\n");
        printf("3. Inverse of a 2x2 matrix\n");
        printf("4. Check Magic Square\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: matrixAddition(); break;
            case 2: findSaddlepoint(); break;
            case 3: findInverse(); break;
            case 4: checkMagicSquare(); break;
            default: printf("Invalid Choice\n");
        }
    }
    return 0;
}

// 1. Matrix Addition
void matrixAddition() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];

    printf("Enter elements for Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    }

    printf("Enter elements for Matrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);
    }

    // Logic: sum[i][j] = a[i][j] + b[i][j]
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// 2. Saddle Point
void findSaddlepoint() {
    int n, i, j, flag = 0;
    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);
    int mat[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < n; i++) {
        int min_row = mat[i][0];
        int col_ind = 0;

        // Find min in current row
        for (j = 1; j < n; j++) {
            if (mat[i][j] < min_row) {
                min_row = mat[i][j];
                col_ind = j;
            }
        }

        // Check if min is max in column
        int k;
        for (k = 0; k < n; k++) {
            if (min_row < mat[k][col_ind]) break;
        }

        if (k == n) {
            printf("Saddle Point found at: %d\n", min_row);
            flag = 1;
        }
    }
    if (flag == 0) printf("No Saddle point\n");
}

// 3. Inverse of 2x2 Matrix
void findInverse() {
    float a[2][2], det;
    printf("Enter 2x2 Matrix elements:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) scanf("%f", &a[i][j]);
    }

    det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    if (det == 0) {
        printf("Inverse DNE (Determinant is 0)\n");
    } else {
        printf("Inverse exists. Determinant: %.2f\n", det);
    }
}

// 4. Check Magic Square
void checkMagicSquare() {
    int n, i, j;
    printf("Enter order n: ");
    scanf("%d", &n);
    int mat[n][n], rowSum[n], colSum[n];

    printf("Enter %d elements:\n", n * n);

    for(i=0; i<n; i++) {
        rowSum[i] = 0;
        colSum[i] = 0;
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }
    }

    int target = rowSum[0];
    int isMagic = 1;
    for(i=0; i<n; i++) {
        if(rowSum[i] != target || colSum[i] != target) {
            isMagic = 0;
        }
    }

    if(isMagic) printf("It is a Magic Square\n");
    else printf("It is not a Magic Square\n");
}
