#include <stdio.h>

#include <stdlib.h>

#include <math.h>

void multiply(int x[10][10], int y[10][10], int m, int n, int p, int q)
{
    int i, j, k;

    int z[10][10];

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < q; j++) 
        {

            z[i][j] = 0;

            for (k = 0; k < p; k++)

            {

                z[i][j] = z[i][j] + (x[i][k] * y[k][j]); // logic
            }
        }
    }

    printf("The result is\n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < q; j++)

        {

            printf("%d\t", z[i][j]);
        }

        printf("\n");
    }
}

void addition(int x[10][10], int y[10][10], int m, int n, int p, int q)
{
    int sum[10][10], i, j;

    for (i = 0; i < m; i++)

    {

        sum[i][j] = 0;

        for (j = 0; j < q; j++)

        {

            sum[i][j] = x[i][j] + y[i][j];// logic
        }
    }

    printf("The result is\n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < q; j++)

        {

            printf("%d\t", sum[i][j]);
        }

        printf("\n");
    }
}

void subtraction(int x[10][10], int y[10][10], int m, int n, int p, int q)
{

    int sub[10][10];

    int i, j;

    for (i = 0; i < m; i++)

    {

        sub[i][j] = 0;

        for (j = 0; j < q; j++)

        {

            sub[i][j] = x[i][j] - y[i][j];// logic
        }
    }

    printf("The result is\n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < q; j++)

        {

            printf("%d\t", sub[i][j]);
        }

        printf("\n");
    }
}

void transpose(int x[10][10], int m, int n)
{

    int trans[10][10];

    int i, j;

    for (i = 0; i < m; i++)

    {

        trans[i][j] = 0;

        for (j = 0; j < n; j++)

        {

            trans[i][j] = x[j][i];// logic
        }
    }

    printf("The result is\n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < n; j++)

        {

            printf("%d\t", trans[i][j]);
        }

        printf("\n");
    }
}

int main()
{

    int a[10][10], b[10][10], op, m, n, p, q, i, j;

    int c[10][10];

    printf("Give the order of matrix A\n");

    scanf("%d %d", &m, &n);

    printf("Give the elements of matrix A\n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < n; j++)

        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("Give the operation\n1. addition\n2. for subtraction\n3. for    multiplication\n4. for transpose\n");

    scanf("%d", &op);

    switch (op)

    {

    case 1:

        printf("Give the order of matrix B\n");

        scanf("%d %d", &p, &q);

        if (m == p && n == q)

        {

            printf("Give the elements of matrix b\n");

            for (i = 0; i < p; i++)

            {

                for (j = 0; j < q; j++)

                {

                    scanf("%d", &b[i][j]);
                }
            }

            addition(a, b, m, n, p, q);
        }
        else

        {

            printf("Addition not possible\n");
        }

        break;

    case 2:

        printf("Give the order of matrix B\n");

        scanf("%d %d", &p, &q);

        if (m == p && n == q)

        {

            printf("Give the elements of matrix b\n");

            for (i = 0; i < p; i++)

            {

                for (j = 0; j < q; j++)

                {

                    scanf("%d", &b[i][j]);
                }
            }

            subtraction(a, b, m, n, p, q);
        }
        else

        {

            printf("Subtraction not possible\n");
        }

        break;

    case 3:

        printf("Give the order of matrix B\n");

        scanf("%d %d", &p, &q);

        if (n == p)

        {

            printf("Give the elements of matrix b\n");

            for (i = 0; i < p; i++)

            {

                for (j = 0; j < q; j++)

                {

                    scanf("%d", &b[i][j]);
                }
            }

            multiply(a, b, m, n, p, q);
        }
        else

        {

            printf("multiplication not possible\n");
        }

        break;

    case 4:

        transpose(a, m, n);

        break;

    default:

        printf("invalid input\n");

        break;
    }
    return 0;
}