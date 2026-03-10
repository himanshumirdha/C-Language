#include <stdio.h>
#include <limits.h>
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
    // selection sort

    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        int min = INT_MAX;
        int minind = 3;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minind = j;
            }
        }
        // swap minind and i
        int temp = arr[minind];
        arr[minind] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    printf("Sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}