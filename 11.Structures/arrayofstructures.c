#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[30];
    } pokemon;

    pokemon arr[3]; // arr[0],arr[1],arr[2]
    arr[0].attack = 70;
    arr[0].hp = 103;
    arr[0].speed = 60;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Pikachu");

    arr[1].attack = 54;
    arr[1].hp = 123;
    arr[1].speed = 50;
    arr[1].tier = 'H';
    strcpy(arr[1].name, "Charizard");

    arr[2].attack = 50;
    arr[2].hp = 130;
    arr[2].speed = 40;
    arr[2].tier = 'B';
    strcpy(arr[2].name, "David");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].name);
        printf("Attack : %d\n", arr[i].attack);
        printf("Hp : %d\n", arr[i].hp);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %c\n", arr[i].tier);
        printf("\n");
    }

    return 0;
}