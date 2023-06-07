//For (inicio; condicion; expresion; program stateemn for statement) la condicion es donde el codigo en c
//Genera una tabla denumeros triangulares

#include <stdio.h>
int main (void)
{
    int n, numTriangular;
    printf("Table of Triangular Numbers\n\n");
    printf("n   Sum from 1 to n\n");
    printf("_______     ___________________________________________\n");
    numTriangular = 0;
    for (n = 1; n<=10;++n)
    {
        numTriangular += n;
        printf("%i              %i\n", n, numTriangular);
    }
    return 0;
}
