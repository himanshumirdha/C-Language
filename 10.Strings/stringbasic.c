#include <stdio.h>
int main()
{
    // int a[4]={1,2,3,4};
    // printf("%p\n",&a[0]);
    // printf("%p\n",&a[1]);
    // printf("%p\n",&a[2]);
    // printf("%p\n",&a[3]);

    // char arr[5] = {'a', 'd', 's', 't', 'l'};
    // // printf("%c", arr[3]);

    // printf("%p\n",&arr[0]);
    // printf("%p\n",&arr[1]);
    // printf("%p\n",&arr[2]);
    // printf("%p\n",&arr[3]);

    // char ch = '0';
    // printf("%d", ch);

    // char ch = '\0'; // nulll character
    // printf("%d", ch);
    // int x = 0;
    // char a = (char)x;        // a-> '\0'
    // printf("%c", a);

    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ", arr[i]);
        i++;
    }
    return 0;
}