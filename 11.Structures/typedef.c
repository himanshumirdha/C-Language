#include <stdio.h>
typedef int Integer;
typedef float decimal;
int main()
{
    // Integer x = 77;               // int replaced as Integer
    // decimal y = 65.37;
    // printf("%d\n", x);
    // printf("%f", y);

    typedef struct book
    {
        char name[50];
        float price;
        int noOfPages;
    } book;

    book a;
    book b;
    book c;
    book d;

    a.noOfPages = 110;
    a.price = 411.5;
    strcpy(a.name, "Secret Service");

    printf("%d\n", a.noOfPages);
    printf("%s\n", a.name);
    printf("%f", a.price);

    return 0;
}
