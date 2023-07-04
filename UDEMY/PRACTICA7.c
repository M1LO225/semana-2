#include <stdio.h>

int main (int argc, char *argv[]) {
    int numero;
    printf("Escoja un numero entre el 1 al 7:\n");
    scanf("%d", &numero);

    switch (numero)
    {
    case (1):
        printf("Numero que escogio %d\n", numero);
        printf("El numero %d equivale a LUNES", numero);
        break;
    
    case (2):
        printf("Numero que escogio %d\n", numero);
        printf("El numero %d equivale a MARTES", numero);
        break;
    case (3):
        printf("Numero que escogio %d\n", numero);
        printf("El numero %d equivale a MEIRCOLES", numero);
        break;
    case (4):
        printf("Numero que escogio %d\n", numero);
        printf("El numero %d equivale a JUEVES", numero);
        break;
    case (5):
        printf("Numero que escogio %d\n", numero);
        printf("El numero %d equivale a VIERNES", numero);
        break;
    case (6):
        printf("Numero que escogio %d\n", numero);
        printf("El numero %d equivale a SABADO", numero);
        break;
    case (7):
        printf("Numero que escogio %d\n", numero);
        printf("El numero %d equivale a DOMINGO", numero);
        break;

    default:    
        printf("Error opcion no valida...");
        break;
    }

    return 0;
}