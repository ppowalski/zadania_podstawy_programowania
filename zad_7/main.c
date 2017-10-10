#include <stdio.h>

int main()
{
    float a, b, c, harmoniczna;

    printf("Podaj liczbe nr 1: ");
    scanf("%f", &a);

    printf("Podaj liczbe nr 2: ");
    scanf("%f", &b);

    printf("Podaj liczbe nr 3: ");
    scanf("%f", &c);

    harmoniczna = (3/((1/a)+(1/b)+(1/c)));
    printf("Srednia harmoniczna wynosi: %f\n", harmoniczna);
    return 0;
}