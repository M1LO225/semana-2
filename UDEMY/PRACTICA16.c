#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main (int argc, char *argv[]) {
    struct jugador
    {
        char nombre[50];
        int edad;
        float altura;
    };
    
    struct jugador jugadores[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del jugador: %d\n", i+1);
        gets(jugadores[i]. nombre);
        printf("Ingrese la edad del jugador %d\n", i+1);
        scanf("%d", &jugadores[i]. edad);
        printf("Ingrese la altura del jugador %d\n", i+1);
        scanf("%d", &jugadores[i]. altura);
        fflush(stdin);
    }
    int opcion;
    while (opcion!=0);
    {
        printf("Ingrese la opcion que deseas realizar:\n\n1.Lista jugador\n2.Buscar jugador\n3.Jugador mas alto\n0.Salir");
        scanf("%d", &opcion);

        if (opcion ==1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Jugador de nombre %s y altura %.2f\n", jugadores[i]. nombre, jugadores[i]. altura);

            }
            
        }
        if (opcion ==2)
        {
            char nombreJugador[50];
            printf("Ingrese el nombre del jugador que desea buscar\n");
            gets(nombreJugador);
            int encontrado=0;

            for (int i = 0; i < 5; i++)
            {
                if (strcmp(jugadores[i]. nombre, nombreJugador)==0);
                {
                    encontrado=1;
                    printf("La edad del jugador es %d y su altura %.2f", jugadores[i]. edad, jugadores[i]. altura);

                }
                if (encontrado==0){
                    printf("Jugador no encontrado\n");
                }
            }
            
        
        }

        if (opcion==3){
            float mayorAltura= jugadores[0]. altura;
            char nombreMayorAltura[50];
            int edadMayorAltura= jugadores[0]. edad;
            strcpy(nombreMayorAltura, jugadores[0]. nombre);
            for (int i = 0; i < 5; i++)
            {
                if (jugadores[i]. altura>mayorAltura)
                {
                    strcpy(nombreMayorAltura, jugadores[i]. nombre);
                    edadMayorAltura=jugadores[i]. edad;
                    mayorAltura= jugadores[i].altura;
                }
                
            }
            printf("El nombre del jugador de mayor altura es %s y su edad es %d\n", nombreMayorAltura, edadMayorAltura);
            
        }
    }
    
    

    
    return 0;
}