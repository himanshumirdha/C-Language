// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter size of an array : ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter element number %d ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int ans[n];
//     int idx = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             ans[idx] = arr[i];
//             idx++;
//         }
//     }
//     while (idx != n)
//     {
//         ans[idx] = 0;
//         idx++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", ans[i]);
//     }
//     return 0;
// }

// without using extra array

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++) // -i samajh kyu kiya hai dry run karke ladle
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;  
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}