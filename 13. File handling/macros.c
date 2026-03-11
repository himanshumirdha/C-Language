#include <stdio.h>
#define PI 3.14159265359
// float area(float r)
// {
//     return PI * r * r;
// }
// rather than above one

#define area(r) (PI * r * r)
int main()
{

    // printf("%f", PI);
    // double x = 3.14159265359;
    // printf("%.15f", x);   // upto 15 decimal places
    printf("%f", area(10));
}