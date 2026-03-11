#include <stdio.h>
int main()
{
    // reading a file
    FILE *ptr = fopen("file.txt", "r");  //r -> read
    char str[100];
    while (fgets(str, 100, ptr) != NULL)
        printf("%s", str);

    // creating a file
    // FILE *ptr = fopen("Hii.txt", "w"); // w -> write
    // char str[] = "Placemnet lag jayegi laadle";
    // fputs(str, ptr);
    // fclose(ptr);
    return 0;
}