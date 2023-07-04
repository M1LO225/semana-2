#include <stdio.h>

int main (int argc, char *argv[]) {
    float precioBase, km, consumo, precio;
    printf("Ingrese el precio base del carro:\n");
    scanf("%f", &precioBase);
    printf("Ingrese el kilometraje:\n");
    scanf("%f", &km);
    printf("Ingrese el consumo:\n");
    scanf("%f", &consumo);

    if (km<2000 && consumo <=5)
    {
        precio= precioBase*1.2;
        printf("El precio final del carro es %f", precio);
    }else if (km>2000 && consumo<=5)
    {
        precio=precioBase*1.1;
        printf("El precio final del carro es %.2f", precio);
    }else if (consumo>5);
    {
        precio=precioBase*1.05;
        printf("El precio final del carro es %f", precio);

    }
    
    
    
    return 0;
}