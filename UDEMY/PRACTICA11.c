#include <stdio.h>

int main (int argc, char *argv[]) {
    float pesos[5];
    float suma=0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un peso:\n");
        scanf("%f", &pesos[i]);

        suma=suma+pesos[i];

    }
    float promedio=suma/5;
    int mayoIgual=0;
    int menor=0;

    for (int i = 0; i < 5; i++)
    {
        if (pesos[i] >= promedio)
        {
            mayoIgual++;
        }else{
        menor++;
    }
        
    }
    printf("El promedio es: %f", promedio);
    printf("Pesos mayores o menores iguales que el promedio: %d\nPesos menores o igual que el promedio:%d", mayoIgual, menor);
    
    return 0;
}