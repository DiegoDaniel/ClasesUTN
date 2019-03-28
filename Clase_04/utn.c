#include <stdio.h>


int utn_getNUmber(int* pNumero, int max, int min, char* msgPregunta, char* msgError)
{
    int execution;
    printf("%s", msgPregunta);
    scanf("%d", pNumero);
    if(*pNumero > min && *pNumero < max){
        execution = 0;
    }else{
        execution = -1;
    }
    return execution;
}
