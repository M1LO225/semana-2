#include <stdio.h>

int main (int argc, char *argv[]) {
    int suma=0, contador=0, numero=-1;

    while (numero!=0)
    {
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        contador++;
        suma= suma+numero;

    }
    float  promedio= suma/contador;
    printf("La suma es: %d y el promedio es %.2f", suma, promedio);
    
    return 0;
}