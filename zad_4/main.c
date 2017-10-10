#include <stdio.h>

int main()
{
    int a, x, b, y;
    printf("Podaj zmienna a: ");
    scanf("%d", &a);
    printf("Podaj zmienna x: ");
    scanf("%d", &x);
    printf("Podaj zmienna b: ");
    scanf("%d", &b);
    y =(a*x)+b;
    printf("Wynik ax+b: %d\n", y);
    return 0;
}