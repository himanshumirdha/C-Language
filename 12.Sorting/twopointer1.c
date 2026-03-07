#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    int target = 8;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d ", i + 1);
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("%d %d", arr[i], arr[j]);
            break;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}