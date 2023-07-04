#include <stdio.h>

int main (int argc, char *argv[]) {
    int numeros[10] = {5,9,10,63,58,3,8,56,100,-9};
    int max= numeros[0];
    int min=numeros[0];

    for (int i = 1; i < 10; i++)
    {
        if (numeros[i]>max)
        {
            max = numeros[i];
        }
        if (numeros[i]<min)
        {
            min=numeros[i];
        }
        
        
    }
    printf("El valor maximo: %d\nEl valor minimo:%d", max, min);

    return 0;
}