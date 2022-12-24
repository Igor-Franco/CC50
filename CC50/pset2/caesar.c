#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> // funcao "strtol" linha 16

#define TAM 500

void caps(int a, int b);

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        printf("argc error\nUsage: ./caesar key\n");
        return 1;
    }
    int key = strtol(argv[1],NULL, 10);
    printf("Key: %d\n", key);
    if (key <= 0)
    {
        printf("argv error\nUsage: ./caesar key\n");
        return 1;
    }
    printf("Argc: %d\n", argc);
    char texto[TAM];
    printf("Plaintext: ");
    fgets(texto, TAM, stdin);
    fflush(stdin);
    printf("ciphertext: ");
    for (int i = 0; i < TAM; i++)
    {
        if (texto[i] == 0)
        {
            return 0;
        }
        else if (isalpha(texto[i]))
        {
            caps(key, texto[i]);
        }
        else if (isspace(texto[i]) || ispunct(texto[i]) || isalnum(texto[i]))
        {
            printf("%c", texto[i]);
        }
        
        
    } 
    return 0;
} 

void caps(int a, int b)
{
    if (islower(b))
    {
        printf("%c", (((b - 97) + a)%26) + 97);// ASCII "a" = 97  
    }
    else
    {
        printf("%c", (((b - 65) + a) % 26) + 65);// ASCII "A" = 65
    }
    
}