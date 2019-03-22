#include <stdio.h>
#include <stdlib.h>
int main()
{
    int primeraVuelta = 0;
    int mayor;
    int menor;
    int numeroIngresado;
    while(numeroIngresado != -1){
        printf("Ingrese un Numero: ");
        scanf("%d",&numeroIngresado);
        if(numeroIngresado == -1){
            break;
        }
        if(primeraVuelta == 0 ){
            mayor=numeroIngresado;
            menor=numeroIngresado;
            primeraVuelta = 1;
        }
        if(numeroIngresado>mayor){
            mayor=numeroIngresado;
        }
        if(numeroIngresado<mayor){
            menor=numeroIngresado;
        }
    }
    printf("El Mayor Numero Es: %d\nEl Menor Numero Es: %d",mayor,menor);
    return 0;
}
