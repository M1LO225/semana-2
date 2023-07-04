#include <stdio.h>

int main (int argc, char *argv[]) {
    float dolares, pesosMX;
   
    printf("Ingrese los dolares que quiere convertir\n");
    scanf("%f", &dolares);
    pesosMX=dolares*17.12;
    printf("\nSus %.2f$ se convirtieron en %.2f$", dolares, pesosMX);

    return 0;
}