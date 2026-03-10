// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i = 0; i < 8; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] != max && smax < arr[i])
//         {
//             smax = arr[i];
//         }
//     }
//     printf("%d", smax);
// }

// more optimized

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[8] = {1, 2, 3, 4, 4, 3, 2, 1};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i = 0; i < 8; i++)
//     {
//         if (max < arr[i])
//         {
//             smax = max;
//             max = arr[i];
//         }
//         else if (smax < arr[i] && arr[i] != max) // max>arr[i] if arr[8]={8,7,6,5,4,3,2,1}
//         {
//             smax = arr[i];
//         }
//     }
//     printf("%d", smax);
// }

// practice of optimized

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6] = {6, 6, 4, 2, 3, 4}; // first try {1,2,3,4,5,6}   then {6,5,4,3,2,1}  then {6,6,4,2,3,4}
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}