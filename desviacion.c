#include <stdio.h>
int main()
{
    int n, cont;
    float media, d, suma = 0;
    float lista[100];

    printf("\n¿Cuantos números para calcular la media?");
    scanf("%d", &n);
    printf("\n");

    for(cont = 0; cont < n; ++cont)
    {
        printf("i = %d      x = ", cont+1);
        scanf("%f", &lista[cont]);
        suma += lista[cont];
    }

    media = suma / n;
    printf("\nLa media es %5.2f\n\n", media);
    printf("\n La media es: %5.2f\n\n", media);

    for (cont = 0; cont < n; ++cont)
    {
        d = lista[cont] - media;
        printf("i = %d      x = %5.2f       d = %5.2f\n", cont + 1, lista[cont], d);
    }
}