#include <stdio.h>

int main()
{
    int u = 3;
    int v;
    int *pu; /* puntero a un entero*/
    int *pv; /* punteroa aun entero */

    pu = &u; 
    v = *pu;
    pv = &v; 

    printf("\nu=%d    &u=%p  pu=%p *pu=%d", u, &u, pu, *pu);
    printf("\n\nv=%d &v=%p pv=%p *pv=%d" , v, &v, pv, *pv);

}