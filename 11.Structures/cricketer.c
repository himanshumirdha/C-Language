#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[30];
        char lastname[30];
        int age;
        int noOfTestMatches;
        float averageruns;
    } cricketer;

    cricketer arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter first name : ");
        scanf("%s", arr[i].firstname);
        printf("Enter last name : ");
        scanf("%s", arr[i].lastname);
        printf("Enter age : ");
        scanf("%d", &arr[i].age);
        printf("Enter number of test matches : ");
        scanf("%d", &arr[i].noOfTestMatches);
        printf("Enter average runs : ");
        scanf("%f", &arr[i].averageruns);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s %s\n", arr[i].firstname, arr[i].lastname);
        printf("%d\n", arr[i].age);
        printf("%d\n", arr[i].noOfTestMatches);
        printf("%f\n", arr[i].averageruns);
        printf("\n");
    }
    return 0;
}