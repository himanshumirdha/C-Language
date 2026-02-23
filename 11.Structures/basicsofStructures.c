#include <stdio.h>
int main()
{
    struct pokemon // user defined data type
    {
        int hp;
        int speed;
        int attack; // 4 sai leke 9 tak ka code ek new data type hai dabba nahi
        char tier;  // A,B,C,D
    } pikachu, charizard;     // can also be defined here these are variable
    // struct pokemon pikachu;
    // pikachu.attack = 87;
    pikachu.attack;
    printf("Enter attack of pikachu : ");
    scanf("%d", &pikachu.attack);
    printf("%d", pikachu.attack);
    pikachu.hp = 55;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    // struct pokemon charizard;
    charizard.attack = 130;
    charizard.speed = 80;
    charizard.hp = 80;
    charizard.tier = 'B';
    return 0;
}