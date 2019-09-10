#include <stdio.h>
#include <stdlib.h>
#define T 3
#define LEN 20

int main()
{
   int legajo[T];
   char nombre[T][LEN]; //Siempre se pone la cantidad de veces que necesita y la cantidad de caracteres
   int i;
   int j;
   int aux;
   char auxString[LEN];

   for(i=0; i<T; i++){

    printf("Ingrese legajo: ");
    scanf("%d", &legajo[i]);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre[i]);

   }


   //Ordenamiendo

   for(i=0; i<T-1; i++){

    for(j=i+1; j<T; j++){

            if(legajo[i]>legajo[j]){

                  //Ordenamiento para numeros
                  aux = legajo[i];
                  legajo[i] = legajo [j];
                  legajo[j] = aux;
                //Ordenamiento para strings
                 strcpy(auxString, nombre[i]);
                 strcpy(nombre[i], nombre[j]);
                 strcpy(nombre[j], auxString);

            }
    }

   }

   for(i=0; i<T; i++){

    printf("%d\t%s\n", legajo[i], nombre[i]);

   }

//Alumno mas viejo, cuales estan sentados, si se pude sentar, agregar nombres de almunos, ordenar los almuno por nombre, leer clase de estructuras

    return 0;
}
