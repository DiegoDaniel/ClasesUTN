#include <stdio.h>


int utn_getNUmber(int* pNumero, int max, int min, char* msgPregunta, char* msgError, int intentosMax)
{
    int intentos = 0;
    int execution = -1;
    int boolean = -1;
    printf("%s", msgPregunta);
    scanf("%d", pNumero);
    if(*pNumero > min && *pNumero < max){
        execution = 0;
    }else{
        while(boolean == -1 && intentos<intentosMax){
            printf("%s", msgError);
            scanf("%d", pNumero);
            if(*pNumero > min && *pNumero < max){
                boolean = 0;
                execution = 0;
            }
            intentos++;
        }
    }


    return execution;
}
