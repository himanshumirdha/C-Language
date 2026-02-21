#include <stdio.h>
#include <string.h>
int main()
{
    // normal initialisation
    // char str[] = {"College wallah"};
    // str[0] = 'p'; // can do this
    // printf("%s", str);

    // str ={"Physics wallah"};  // cant do this   // can change by character

    printf("\n");
    // pointer initialisation
    // char *ptr = {"College wallah"};
    // ptr = "knowledge waalah";
    // printf("%s", ptr);
    // can do this
    // ptr[0]='t';   // cant do this   // can change string

    printf("\n");
    // char str[] = {"College wallah"};
    // // char *ptr = str;
    // // ptr = "Knowledge waalah";

    // char *p = str; // p is a shallow copy
    // // *p = 't';
    // str[3] = 't';      // This and above one both works
    // printf("%s", str); // college waalah hi print hoga

    // deeep copy
    // char s1[] = {"Physics Wallah"};
    // char s2[] = {"College Wallah"};
    // s2[0] = 'M';
    // printf("%p\n", s1);
    // printf("%p", s2);

    // char s1[] = {"Physics Wallah"};
    // int k = 0;
    // int size = 0;
    // while (s1[k] != '\0')
    // {
    //     size++;
    //     k++;
    // }
    // char s2[size];
    // for (int i = 0; i <= size; i++)
    // {
    //     s2[i] = s1[i];
    // }
    // printf("%s", s2);

    char *s1 = {"Physics wallah"};
    char *s2;
    s2 = s1;
    s2="College wallah";
    printf("%s", s2);
    return 0;
}