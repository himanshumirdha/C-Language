#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[30];
} pokemon;

void change(pokemon *p)
{
    // (*p).hp = 160;
    // (*p).attack = 170;
    // (*p).speed = 200;
    // (*p).tier = 'G';
    // strcpy((*p).name, "Umangasod");

    // dusra tarika (*p) ka
    p->hp = 233;

    return;
}
int main()
{
    // pokemon pikachu;
    // pikachu.hp = 60;
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name, "Pikachu");

    // better than above one
    pokemon pikachu = {60, 70, 100, 'A', "Pikachu"}; // in order than above

    // pokemon *x = &pikachu;
    // printf("%d\n", pikachu.hp);
    // // pikachu.hp=40;  // aise change nahi karna chahata
    // (*x).hp = 40; // bracket lagani jaruri hai
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);

    change(&pikachu);

    printf("%d\n", pikachu.hp);
    // printf("%d\n", pikachu.attack);
    // printf("%d\n", pikachu.speed);
    // printf("%c\n", pikachu.tier);
    // printf("%s\n", pikachu.name);

    return 0;
}