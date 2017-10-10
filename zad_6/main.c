#include <stdio.h>

int main()
{
    float a, h, pole;

    printf("Wprowadz dlugosc podstawy trojkata: ");
    scanf("%f", &a);

    printf("Wprowadz wysokosc trojkata: ");
    scanf("%f", &h);

    pole = (a*h)/2;
    printf("Pole trojkata wynosi: %f\n", pole);
    return 0;
}