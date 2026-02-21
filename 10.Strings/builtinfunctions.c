#include <stdio.h>
#include <string.h>
int main()
{
    // char *str = "Himanshu";
    // int x = strlen(str);
    // printf("%d", x);

    // char s1[9] = "Himanshu";
    // char s2[9];
    // strcpy(s2, s1);
    // s2[0] = 'a';
    // printf("%s", s2);

    char s1[] = "Himanshu";
    char s2[] = "Mirdha";
    strcat(s1, s2);
    printf("%s",s1);
    return 0;
}