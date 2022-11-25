#include <stdio.h>
#include <stdlib.h>



#include <time.h>



#define ARRAY_SIZE 3



int i; //contador
int n; //tamaño del array
int a[ARRAY_SIZE];



time_t tmp = 0;



time_t seed; //semilla para extraer el tiempo




int main(int argc, char* argv[])
{
    seed = 0;
    tmp = time(&seed);
    srand(tmp);





    printf("\nTamaño Array %d",sizeof(a));
    printf("\nTamaño numero %d",sizeof(*a));



    n = sizeof(a) / sizeof(*a);



    for (i = 0; i <= n - 1; i++)
    {
        a[i] = rand() % 100;
    }



    for (i = 0; i <= n - 1; i++)
    {


        printf("\nElement a[%d]: %d\n", i, a[i]);
    }
    return 0;
      int aciertoss, aleatorio_1, aleatorio_2, aleatorio_3, numero_ingresado_1;
    int numero_ingresado_2, numero_ingresado_3, premio;
    srand ((unsigned) time (NULL));
}
