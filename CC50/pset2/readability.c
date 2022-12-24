#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define TAM 1000

int letras(char texto[]);
int palavras (char texto[]);
int frases(char texto[]);
float porcem (float a, int b, int c);

int main(void)
{
    int letra, palavra, frase;
    float l, s;
    char nm[TAM];
    printf("texto:");
    fgets(nm, TAM, stdin);
    fflush(stdin);
    letra = letras(nm);
    palavra = palavras(nm);
    frase = frases(nm);
    l = porcem(l, letra, palavra); 
    s = porcem(s, frase, palavra);
    float indice = 0.0588 * l - 0.296 * s - 15.8;
    printf("\nLetras: %d. Palavras: %d. Frases: %d ", letra, palavra, frase);
    printf("\n L: %f\n S: %f\n", l, s);
    if (indice < 1)
    {
        printf("before grade 1\n");
    }
    else if (indice > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        indice = roundf(indice);
        printf("Grade: %0.0f\n", indice);
    }
    return 0;
}

float porcem(float a, int b, int c){
    a = (b * 100) / (float)c;
    return a;
}

int frases (char texto[]){
    int numfrases = 0;
    for (int i = 0; i < TAM; i++)
    {
        if (texto[i] == 0)
        {
            return numfrases;
        } 
        else if (texto[i] == 33 || texto[i] == 46 || texto[i] == 63)
        {
            numfrases++;
        }    
    }
    return numfrases;
    
}

int palavras(char texto[]){
    int numpalavras = 0;
    for (int i = 0; i<TAM; i++){
        if (texto[i] == 0)
        {
            return numpalavras;
        } else if (isspace(texto[i]))
        {
            numpalavras++;
        }
    }
    return numpalavras;
}

int letras(char texto[]){
    int numletras = 0;
    for (int i = 0; i < TAM; i++)
    {
        if (texto[i] == 0)
        {
            return numletras;
        }
        else if (isalpha(texto[i]))
        {
            numletras++;
        }
    }
    return numletras;
}