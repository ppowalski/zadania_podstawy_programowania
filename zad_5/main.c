#include <stdio.h>

int main()
{
    char znak[4];
    printf("Podaj cztery losowe litery (odziel je spacjami): ");
    scanf("%c %c %c %c", &znak[0], &znak[1], &znak[2], &znak[3]);

    printf("%c %c %c %c\n", znak[0], znak[1], znak[2], znak[3]);
    printf("%c %c %c %c\n", znak[0], znak[1], znak[3], znak[2]);
    printf("%c %c %c %c\n", znak[0], znak[2], znak[1], znak[3]);
    printf("%c %c %c %c\n", znak[0], znak[2], znak[3], znak[1]);
    printf("%c %c %c %c\n", znak[0], znak[3], znak[1], znak[2]);
    printf("%c %c %c %c\n", znak[0], znak[3], znak[2], znak[1]);

    printf("%c %c %c %c\n", znak[1], znak[0], znak[2], znak[3]);
    printf("%c %c %c %c\n", znak[1], znak[0], znak[3], znak[2]);
    printf("%c %c %c %c\n", znak[1], znak[2], znak[0], znak[3]);
    printf("%c %c %c %c\n", znak[1], znak[2], znak[3], znak[0]);
    printf("%c %c %c %c\n", znak[1], znak[3], znak[0], znak[2]);
    printf("%c %c %c %c\n", znak[1], znak[3], znak[2], znak[0]);

    printf("%c %c %c %c\n", znak[2], znak[0], znak[1], znak[3]);
    printf("%c %c %c %c\n", znak[2], znak[0], znak[3], znak[1]);
    printf("%c %c %c %c\n", znak[2], znak[1], znak[0], znak[3]);
    printf("%c %c %c %c\n", znak[2], znak[1], znak[3], znak[0]);
    printf("%c %c %c %c\n", znak[2], znak[3], znak[0], znak[1]);
    printf("%c %c %c %c\n", znak[2], znak[3], znak[1], znak[0]);

    printf("%c %c %c %c\n", znak[3], znak[0], znak[1], znak[2]);
    printf("%c %c %c %c\n", znak[3], znak[0], znak[2], znak[1]);
    printf("%c %c %c %c\n", znak[3], znak[1], znak[0], znak[2]);
    printf("%c %c %c %c\n", znak[3], znak[1], znak[2], znak[0]);
    printf("%c %c %c %c\n", znak[3], znak[2], znak[0], znak[1]);
    printf("%c %c %c %c\n", znak[3], znak[2], znak[1], znak[0]);
    return 0;
}