#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon // global declartaion of user defined data type  && always declare structure in global
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[30];
} pokemon;

void function(pokemon p)
{
    printf("%d", p.hp);
    return;
}

void change(pokemon p)   
{
    p.hp = 160;
    p.attack = 180;
    p.speed = 190;
    return;
}
int main()                         
{

    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 80;
    change(pikachu);
    printf("%d\n", pikachu.hp);         // structure are passed by value
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);

    // function(pikachu);
    return 0;
}