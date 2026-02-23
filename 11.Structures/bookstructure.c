#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int noOfPages;
    } a, b, c;

    a.noOfPages = 110;
    a.price = 411.5;
    strcpy(a.name,"Secret Service");

    printf("%d\n", a.noOfPages);
    printf("%s\n", a.name);
    printf("%f", a.price);

    return 0;
}