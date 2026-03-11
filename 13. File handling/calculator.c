#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    char ch; // + - / *
    scanf("%c", &ch);
    int b;
    scanf("%d", &b);
    // if (ch == '+')
    // {
    //     printf("%d", a + b);
    // }
    // if (ch == '-')
    // {
    //     printf("%d", a - b);
    // }
    // if (ch == '/')
    // {
    //     printf("%f", (float)a / b);
    // }
    // if (ch == '*')
    // {
    //     printf("%d", a * b);
    // }

    // using switch statement
    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%f", (float)a / b);
        break;
    default:
        printf("Invalid operator");
    }
    return 0;
}