#include <stdio.h>
#include <string.h>
int main()
{
    struct Person     // user defined can be Capital = Person
    {
        char name[26];
        float salary;
        int age;
    } Himanshu, David;

    strcpy(Himanshu.name, "Himanshu");
    printf("%s\n", Himanshu.name);
    David.salary = 10000000;
    printf("%f", David.salary);
    return 0;
}