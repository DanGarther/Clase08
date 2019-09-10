#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   char nombre[15] = "Dario";
   char apellido[15] = "Santillan";
   char nombreYApellido[31];
   char auxString[1000];
   int i;
   int len;



  printf("Ingrese su nombre por favor: ");
   fflush(stdin);
   gets(auxString);
   while(strlen(auxString)>14){

   printf("Reingrese su nombre por favor: ");
   fflush(stdin);
   gets(auxString);

}

strcpy(nombre, auxString);
strcpy(nombreYApellido, apellido);
strcat(nombreYApellido, ", ");
strcat();







    return 0;
}
