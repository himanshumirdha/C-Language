// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter %d element : ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// by taking extra variable

#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];
    for (int i = 0; i < 5; i++)
    {
        brr[i] = arr[4 - i];
        printf("%d ", brr[i]);
    }
    return 0;
}