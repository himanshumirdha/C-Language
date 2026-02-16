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
    int maxsum = INT_MIN;
    int rowindex = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
            if (maxsum < sum)
            {
                maxsum = sum;
                rowindex = i;
            }
        }
    }
    printf("The row number having the maximum sum is %d and sum is %d", rowindex, maxsum);
    return 0;
}