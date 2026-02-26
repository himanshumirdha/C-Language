#include <stdio.h>
#include <string.h>
#include <stdbool.h>
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

    typedef struct legendpokemon
    {
        pokemon normal;    // nesting
        char ability[30];
    } legendpokemon;
    legendpokemon david;
    strcpy(david.ability, "Pressure");
    david.normal.attack = 180;
    david.normal.hp = 150;
    david.normal.speed = 100;
    david.normal.tier = 'A';
    strcpy(david.normal.name, "David");

    typedef struct godpokemon
    {
        legendpokemon legend;   // nesting
        int specialattack;
    } godpokemon;
    godpokemon himanshu;

    himanshu.legend.normal.attack = 500000;
    himanshu.specialattack = 23234128;
    strcpy(himanshu.legend.ability, "Turn anyone to stone ");
    return 0;
}