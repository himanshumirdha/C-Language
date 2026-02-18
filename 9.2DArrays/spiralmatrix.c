#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows and columns : ");
    scanf("%d", &n);
    int a[n][n];
    printf("\n");
    int minr = 0; // variables ko samjhne ka game hai bas
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = n * n;
    int count = 1;
    while (count <= tne)
    {
        // print the minimum row
        for (int i = minc; i <= maxc; i++)
        {
            a[minr][i] = count;
            count++;
        }
        minr++;
        if (count > tne) // or you can write i<=maxc && ((count<tne)) in every declaration
            break;
        // print the maximum column
        for (int j = minr; j <= maxr; j++)
        {
            a[j][maxc] = count;
            count++;
        }
        maxc--;
        if (count > tne)
            break;
        // print the maximum row
        for (int i = maxc; i >= minc; i--)
        {
            a[maxr][i] = count;
            count++;
        }
        maxr--;
        if (count > tne)
            break;
        // print the minimum column
        for (int j = maxr; j >= minr; j--)
        {
            a[j][minc] = count;
            count++;
        }
        minc++;
        if (count > tne)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}