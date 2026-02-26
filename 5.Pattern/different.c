// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int min;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             int a = i;
//             if (i > n)
//             {
//                 a = 2 * n - i;
//             }
//             int b = j;
//             if (j > n)
//             {
//                 b = 2 * n - j;
//             }
//             if (a < b)
//                 min = a;
//             else
//                 min = b;
//             printf("%d ", n + 1 - min);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// practice
#include <stdio.h>
int minimum(int a, int b)
{
    int min = a;
    if (b < a)
    {
        min = b;
    }
    return min;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int min;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if (i > n)
            {
                a = 2 * n - i;
            }
            int b = j;
            if (j > n)
            {
                b = 2 * n - j;
            }
            min = minimum(a, b);
            // if (a < b)
            // {
            //     min = a;
            // }
            // else
            // {
            //     min = b;
            // }
            printf("%d ", n + 1 - min);
        }
        printf("\n");
    }
    return 0;
}

// for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             if (i < j)
//             {
//                 min = i;
//             }
//             else
//             {
//                 min = j;
//             }
//             printf("%d", min);
//         }
//         printf("\n");