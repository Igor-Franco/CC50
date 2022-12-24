#include <stdio.h>

int main(void)
{
    int h, i, j;
    do
    {
        printf("Escolha a altura (1 a 8) da piramide:");
        scanf("%d", &h);
        fflush(stdin);
    } while (h < 1 || h > 8);
    int space = h -2;
    for ( i = 0; i < h; i++){
        if(i == h -1){
            printf("#");
        } else{
            printf(" ");
        }
        for ( j = 1; j < h; j++){
            if(j > space){
            printf("#");
            } else{
                printf(" ");
            }
        }
        space--;
        printf("\n");
    }
}