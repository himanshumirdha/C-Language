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
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;                  // array is sorted 
        for (int j = 0; j < n - 1 - i; j++) // -i samajh kyu kiya hai dry run karke ladle
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}