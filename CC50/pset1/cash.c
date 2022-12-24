#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//programa que conta quantas moedas devem ser devolvidas ao cliente no troco;
//Sempre responder da maneira mais eficiente possível;
// possui apenas moedas de 25, 10, 5 e 1 centavos;
int main (void)
{
    int moedas = 0;
    float reais;
    do{//loop para receber valor positivo;
    printf("Troca devida: ");
    scanf("%f", &reais);
    fflush(stdin);
    }while(reais < 0.01);  
    printf("\nR$%0.2f", reais);
    reais = reais * 100;
    int rreais = roundf(reais);//funcao para arredondar float;

    //loops para contagem das moedas//
    while (rreais - 25 >= 0 )
    {
        rreais = rreais - 25;
        moedas++;
    } 
    while (rreais -10 >= 0)
    {
        rreais = rreais - 10;
        moedas++;
    } 
    while (rreais -5 >= 0)
    {
        rreais = rreais - 5;
        moedas++;
    }
    while (rreais -1 >= 0)   
    {
        rreais = rreais - 1;
        moedas ++;
    }
    printf("\nR$%d\nMoedas:%d", rreais, moedas);
    return 0;
}

