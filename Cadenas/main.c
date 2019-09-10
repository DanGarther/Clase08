#include <stdio.h>
#include <stdlib.h>


int main()
{
  char palabra[10]=""; //Origen
  char otraPalabra[10] = "Chau"; //Destino
  int i;
  int largo;
  int comp;

  /*
   palabra
  &palabra
  &palabra[0]

  Es completamente lo mismo.
*/



  printf("Ingrese una palabra: ");
  fflush(stdin);
  //gets(palabra);//Vector de caracteres
  scanf("%[^\n]", palabra); //%[^\n] Significa leer hasta el enter
  // strcpy(palabra, otraPalabra); // Funcion que cambia el origen por destino.
 //comp = stricmp(palabra, otraPalabra); //Compara ambas variables
  //strupr(palabra); //Variante de ToUpperCase
  //strlwr(palabra); //ToLowerCase
  //strcat(palabra, otraPalabra); //Concatenar cadenas
  //strcpy(palabra, otraPalabra); //Reemplaza y copia

printf("%s", palabra);


/* largo = strlen(palabra); //Recive una constante a puntero a char

 printf("\nEl largo es: %d", largo);
 printf("\n compara %d", comp);


 char letra = 'a';
 letra = tolower(letra);
 */




    return 0;
}
