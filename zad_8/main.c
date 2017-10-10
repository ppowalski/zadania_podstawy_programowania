#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Podaj liczby: ");
    scanf("%f %f %f", &a, &b, &c);
    a = a*b*c;
    printf("Objetosc prostopadloscianu o podanych krawedziach wynosi: %f\n", a);
    return 0;
}