#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    float b, h, a;
    printf("Ingrese el valor de la base del triangulo:\n");
    scanf("%f", &b);
    system("cls");
    printf("INgrese el valor de la altura del triangulo:\n");
    scanf("%f", &h);
    system("cls");
    a=b*h;
    printf("Base: %.2f\n", b);
    printf("Altura: %.2f\n", h);
    printf("El area del triangulo es: %.2f\n", a);



    return 0;
}