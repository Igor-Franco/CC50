#include <stdio.h>

int main(void)
{
    char nome[30];
    printf("write your name:");
    scanf("%s", &nome);
    printf("\n Hello %s!", nome);
    return 0;
}