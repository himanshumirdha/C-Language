#include <stdio.h>
#include <string.h>
int main()
{
    // char str[] = {"College wallah is best"};
    // str[2] = 'z';
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }

    // printf("%s", str);   // replacement to above

    // puts(str);     // replacement to above

    // now gets()
    char str[40];
    // scanf("%s", str); // & nahi lagate    // only first worl will be considered
    gets(str);  // entire sentence can be input
    printf("Your input was : %s", str);
    return 0;
}