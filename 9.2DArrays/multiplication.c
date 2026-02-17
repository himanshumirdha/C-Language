#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows of matrix 1 : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns of matrix 1 : ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter elements of matrix 1 : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p;
    printf("Enter number of rows of matrix 2 : ");
    scanf("%d", &p);
    int q;
    printf("Enter number of columns of matrix 2 : ");
    scanf("%d", &q);
    int b[p][q];
    printf("Enter elements of matrix 2 : \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (m != p)
    {
        printf("The matrice cannot be multiplied");
    }
    else
    {
        printf("\n");
        int res[n][q];
        int cr = m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // i row of a[][] & j column of b[][]
                // res[i][j] = a[i][0],a[i][1],a[i][2]... * b[0][j],b[1][j],b[2][j].....   // sirf is for loop ko samjhana hai
                res[i][j] = 0;
                for (int k = 0; k < cr; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}