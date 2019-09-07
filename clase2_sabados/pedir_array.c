
#include "arrays.h"
#include <stdio.h>

void pedirArray(int array[], int cantidad)
{
    int indice;

    for(indice = 0; indice < cantidad; indice++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &array[cantidad]);
        }
}
