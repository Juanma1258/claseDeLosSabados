#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dinero;
    int contador = 0;
    char tipo;

    int maximoImporteEnDolares;
    int esElPrimerDolar = 1;
    int contadorPositivos = 0;
    int acumuladorPositivos = 0;
    float promedio;

    while(contador < 3)
    {
        fflush(stdin);
        printf("Ingrese tipo: ");
        scanf("%c",&tipo);

        while(tipo != 'd')
        {
            fflush(stdin);
            printf("reingrese tipo: ");
            scanf("%c",&tipo);
        }

        printf("Ingrese cantidad de dinero: ");
        if(scanf("%d", &dinero) == 1)
            {
                scanf("%d", &dinero);    //comprobar
            }

        while(dinero < -500 || dinero > 500)
        {
            printf("reingrese cantidad de dinero: ");
            scanf("%d", &dinero);
        }
        if(tipo == 'd')
        {
            if(esElPrimerDolar == 1)
            {
                maximoImporteEnDolares = dinero;
                esElPrimerDolar = 0;
            }
            else
            {
                if(dinero > maximoImporteEnDolares)
                {
                    maximoImporteEnDolares = dinero;
                }
            }
        }
        if(dinero > 0)
        {
            contadorPositivos++;
        }

        acumuladorPositivos += dinero;
        contador++;
    }

    promedio = (float) (acumuladorPositivos / contadorPositivos);


    printf("El importe máximo en dólares es: %d \n", maximoImporteEnDolares);
    printf("El promedio es %f", promedio);




    return 0;
}
