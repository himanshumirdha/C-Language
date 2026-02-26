#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;

    date a, b;
    // a-> 5/12/1999
    // b-> 19/01/2023

    a.day = 5;
    a.month = 12;
    a.year = 1999;

    b.day = 5;
    b.month = 12;
    b.year = 2001;

    bool flag = true;
    if (a.day != b.day)
        flag = false;

    if (a.month != b.month)
        flag = false;

    if (a.year != b.year)
        flag = false;

    if (flag == true)
        printf("Dates are same");

    else
    {
        printf("Dates are different");
    }
    return 0;
}
