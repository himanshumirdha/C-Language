// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     printf("Enter number of rows and columns : ");
//     scanf("%d", &n);
//     int arr[n][n];
//     // input
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     // transpose
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++) // j=i so they swap only once  -> important point
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     // rotate
//     for (int i = 0; i < n; i++)
//     {
//         int j = 0;
//         int k = n - 1;
//         while (j < k)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[i][k];
//             arr[i][k] = temp;
//             j++;
//             k--;
//         }
//     }
//     printf("\n");
//     // output
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// practice

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter number of rows and columns : ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = n - 1;
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
        j++;
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}