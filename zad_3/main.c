#include <stdio.h>

int main()
{
    int a=5, b=4;
    int dodawanie, odejmowanie, mnozenie, dzielenie, modulo;
    dodawanie = a + b;
    odejmowanie = a - b;
    mnozenie = a*b;
    dzielenie = a/b;
    modulo = a%b;
    printf("Dodawanie: %d\nOdejmowanie: %d\nMnozenie: %d\nDzielenie: %d\nModulo: %d\n", dodawanie, odejmowanie, mnozenie, dzielenie, modulo);
    return 0;
}