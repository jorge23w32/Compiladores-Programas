#include <stdio.h>
#include <ctype.h>

void leerentrada(int i);
void escribirsalida(int i);

struct fecha {
    int mes;
    int dia;
    int anio;
};

struct cuenta {
    char nombre [80];
    char calle [80];
    char ciudad [80];
    int numero_cuenta;
    int tip_cuenta;

    float anteriorsaldo;
    float nuevosaldo;
    float pago;
    struct fecha ultimopago;
} cliente[100];
int main(){
    int i, n;

    printf("Sistema de facturacion del cliente\n\n");
    printf("¿Cuantos clientes hay? ");
    scanf("%d",&n);

    for(i = 0;i<n; ++i){
        leerentrada(i);
    
    if(cliente[i].pago>0)
        cliente[i].tip_cuenta=(cliente[i].pago<0.1*cliente[i].anteriorsaldo)? 'R' : 'A';
    else
     cliente[i].tip_cuenta=(cliente[i].anteriorsaldo>0)? 'D' : 'A';
    cliente[i].nuevosaldo = cliente[i].anteriorsaldo - cliente[i].pago;
    }
    for(i=0;i<n;++i)
    escribirsalida(i);
}
void leerentrada(int i){
    printf("\nCliente Nº %d\n",i+1);
    printf("Nombre: ");
    scanf(" %[^\n]", cliente[i].nombre);
    printf("Calle: ");
    scanf(" %[^\n]", cliente[i].calle);
    printf("Ciudad: ");
    scanf (" %[^\n]", cliente [i].ciudad);
    printf("Numero de cuenta: ");
    scanf ("%d", &cliente[i].numero_cuenta);
    printf("Saldo anterior: ");
    scanf (" %f",&cliente[i].anteriorsaldo);
    printf("Pago actual: ");
    scanf("%f",&cliente[i].pago);
    printf("Fecha de pago(mm/dd/aaaa): ");
    scanf ( "%d/%d/%d" ,&cliente[i].ultimopago.mes,&cliente[i].ultimopago.dia,&cliente[i].ultimopago.anio);
return;
}
void escribirsalida(int i){
    printf("\nNombre: %s\n", cliente[i].nombre);
    printf("Numero de cuenta: %d\n", cliente[i].numero_cuenta);
    printf("Calle: %s\n", cliente[i].calle);
    printf("Ciudad: %s\n\n", cliente[i].ciudad);
    printf("Saldo anterior: %7.2f", cliente[i].anteriorsaldo);
    printf("Pago actual: %7.2f",cliente[i].pago);
    printf("Nuevo saldo: %7.2f\n\n", cliente[i].nuevosaldo);
    printf("Estado de la cuenta: \n\n");
    
    switch(cliente[i].tip_cuenta){
        case 'A':
            printf("Al dia\n\n");
            break;
        case 'R':
            printf("Atrasada\n\n");
            break;
        case 'D':
            printf("Delincuente\n\n");
            break;
    }
    return;
}
