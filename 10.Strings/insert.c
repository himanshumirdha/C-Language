#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20] = "College";
    printf("%s\n", s1);
    for (int i = 6; i >= 2; i--)
    {
        s1[i + 1] = s1[i];
    }
    s1[2] = 'l';
    printf("%s", s1);
    return 0;
}