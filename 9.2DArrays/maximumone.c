#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of column : ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter all the elements : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int maxones = INT_MIN;
    int rowindex = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
                if (maxones < count)
                {
                    maxones = count;
                    rowindex = i;
                }
            }
        }
    }
    printf("The row with maximum number of 1's is %d", rowindex);
    return 0;
}