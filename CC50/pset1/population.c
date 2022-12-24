#include <stdio.h>
//Determine quanto tempo leva para uma população atingir um determinado tamanho.
// n = n + (n/3) - (n/4)
int main(void)
{
    int start, end; 
    int years = 0;
    do
    {
        printf("Start size:");
        scanf("%d", &start);
        fflush(stdin);
    } while (start < 9);
    do
    {
        printf("\nEnd size:");
        scanf("%d", &end);
        fflush(stdin);
    } while (end < start);
    while (start < end)
    {
        start = start + (start/3) - (start/4);
        years++;
    }
    printf("\nyears: %d\npupulation: %d\n", years, start);
    
    return 0;
}