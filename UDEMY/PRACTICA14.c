#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    char cadena[50], cadena2[50], cadena3[50], cadena4[50];
    printf("Ingrese la cadena 1;\n");
    gets(cadena);
    printf("Ingrese la cadena 2;\n");
    gets(cadena2);
    printf("Ingrese la cadena 3;\n");
    gets(cadena3);
    printf("Ingrese la cadena 4;\n");
    gets(cadena4);
    
    printf("%s-%s-%s-%s", cadena, cadena2, cadena3, cadena4);
    return 0;
}