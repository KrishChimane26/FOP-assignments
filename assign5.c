#include <stdio.h>
#include <math.h>

#define max 10

void Add(int a[max][max], int b[max][max], int n, int m)
{
    int sum[max][max];
    printf("\nAddition of matrices:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddle_point(int a[max][max], int n, int m)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        int min = a[i][0], col = 0;
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                col = j;
            }
        }
        int issaddle = 1;
        for (int k = 0; k < n; k++)
        {
            if (a[k][col] > min)
            {
                issaddle = 0;
                break;
            }
        }
        if (issaddle)
        {
            printf("\nSaddle point: %d at position (%d,%d)\n", min, i, col);
            found = 1;
        }
    }
    if (!found)
        printf("\nNo saddle point found\n");
}

float determinant(float a[max][max], int n)
{
    float det = 0, temp[max][max];
    if (n == 1)
        return a[0][0];

    int sign = 1;
    for (int f = 0; f < n; f++)
    {
        int subi = 0;
        for (int i = 1; i < n; i++)
        {
            int subj = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == f)
                    continue;
                temp[subi][subj++] = a[i][j];
            }
            subi++;
        }
        det += sign * a[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return det;
}

void cofactor(float a[max][max], float cof[max][max], int n)
{
    float temp[max][max];
    int sign;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int subi = 0;
            for (int r = 0; r < n; r++)
            {
                if (r == i)
                    continue;
                int subj = 0;
                for (int c = 0; c < n; c++)
                {
                    if (c == j)
                        continue;
                    temp[subi][subj++] = a[r][c];
                }
                subi++;
            }
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            cof[i][j] = sign * determinant(temp, n - 1);
        }
    }
}

void transpose(float a[max][max], float trans[max][max], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = a[i][j];
        }
    }
}

void Inverse(float a[max][max], int n)
{
    float det = determinant(a, n);
    if (det == 0)
    {
        printf("\nInverse does not exist (Singular matrix)\n");
        return;
    }

    float cof[max][max], adj[max][max];
    cofactor(a, cof, n);
    transpose(cof, adj, n);

    printf("\nInverse matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%0.2f ", adj[i][j] / det);
        }
        printf("\n");
    }
}

void magicsquare(int a[max][max], int n)
{
    int sum = 0;

    for (int j = 0; j < n; j++)
        sum += a[0][j];

    for (int i = 1; i < n; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < n; j++)
            rowsum += a[i][j];

        if (rowsum != sum)
        {
            printf("\nNot a magic square\n");
            return;
        }
    }

    for (int j = 0; j < n; j++)
    {
        int colsum = 0;
        for (int i = 0; i < n; i++)
            colsum += a[i][j];

        if (colsum != sum)
        {
            printf("\nNot a magic square\n");
            return;
        }
    }

    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        d1 += a[i][i];
        d2 += a[i][n - i - 1];
    }

    if (d1 == sum && d2 == sum)
        printf("\nIt is a magic square\n");
    else
        printf("\nIt is not a magic square\n");
}

int main()
{
    int a[max][max], b[max][max];
    float af[max][max];
    int n, m, choice;

    printf("Enter rows and columns:\n");
    scanf("%d %d", &n, &m);

    printf("Enter first matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            af[i][j] = a[i][j];
        }
    }

    printf("\n1. Addition\n2. Saddle point\n3. Inverse\n4. Magic square\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter second matrix:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                scanf("%d", &b[i][j]);
        }
        Add(a, b, n, m);
        break;

    case 2:
        saddle_point(a, n, m);
        break;

    case 3:
        if (n == m)
            Inverse(af, n);
        else
            printf("Inverse only possible for square matrix\n");
        break;

    case 4:
        if (n == m)
            magicsquare(a, n);
        else
            printf("Magic square requires square matrix\n");
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}
