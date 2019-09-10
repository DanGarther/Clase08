#include "opciones.h"

void opciones(char resp)
{
    do{

    printf("--------------------------------------------------------------------\n");
    printf("|1)Ingresar datos de alumnos.                                       |\n");
    printf("|2)Ingresar notas del almuno.                                       |\n");
    printf("|3)Listado de alumnos.                                              |\n");
    printf("|4)Promedio segun listado.                                          |\n");
    printf("|5)Ingresar nuevo listado de alumnos.                               |\n");
    printf("|6)Salir.                                                           |\n");
    printf("--------------------------------------------------------------------\n");

    scanf("%c", &resp);

    switch(resp){
    case '1':
        printf("Ingresar datos de alumnos.");
        break;
    case '2':
        printf("Ingresar datos de alumnos.");
        break;
    case '3':
        printf("Ingresar datos de alumnos.");
        break;
    case '4':
        printf("Ingresar datos de alumnos.");
        break;
    case '5':
        printf("Ingresar datos de alumnos.");
        break;
    case '6':
        printf("Ingresar datos de alumnos.");
        break;

    default:
        printf("Error, ingrese una opcion valida.");
        break;


    }

    }while(resp!='s');


system("pause");
system("cmi");

}
