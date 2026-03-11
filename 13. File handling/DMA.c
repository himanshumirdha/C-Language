#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int a = sizeof(int);
    // printf("%d", a);

    int *ptr = (int *)malloc(10 * 4);
    printf("%d", *ptr); // gives garbage value , calloc give 0
    return 0;
}