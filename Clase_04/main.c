#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numero;
    int resultado = utn_getNUmber(&numero, 100, 0, "Ingrese un numero: ", "Error al procesar");
    printf("Resultado: %d",resultado);
    return 0;
}
