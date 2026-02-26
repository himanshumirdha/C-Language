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
    pokemon a, b, c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name, "pikachu");

    // b.attack = a.attack;
    // b.hp = a.hp;
    // b.speed = a.speed;
    // b.tier = a.tier;
    // strcpy(b.name, a.name);

    // rather than the above one

    b = a;   // b mai bhi a aa gaya par a vahi arhega b mai a copy ho agay -- ye ek deep copy hai shallow nahi
    c = a;  // these two are features of structures
    printf("%d\n", b.attack);
    printf("%s", b.name);
    return 0;
}