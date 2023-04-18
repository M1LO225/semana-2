#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "modulos.h"
// Emilio Guerrero, estegan argoti
int main(int argc, char *argv[])
{

  char nombre[100];
  char cedula[100];

  float precioA = 150, precioB = 55, precioC = 180, precioD = 70, precioE = 120;
  float numA = 0, numB = 0, numC = 0, numD = 0, numE = 0;
  float subtotalA = 0, subtotalB = 0, subtotalC = 0, subtotalD = 0, subtotalE = 0;
  float subtotal = 0, total = 0;

  int opcion = 0, opcion2 = 0;
  int menu = 0;

  do
  {
    menu = menuPrincipal();

    switch (menu)
    {
    case 1:
      do
      {
        opcion = menuProductos();

        switch (opcion)
        {
        case 1:
          printf("ingrese el numero de Llantas: \n");
          scanf("%f", &numA);
          break;

        case 2:
          printf("ingrese el numero de Kit de pastillas de frenos: \n");
          scanf("%f", &numB);
          break;

        case 3:
          printf("ingrese el numero de Kit de embargue: \n");
          scanf("%f", &numC);
          break;

        case 4:
          printf("ingrese el numero de Faros: \n");
          scanf("%f", &numD);
          break;

        case 5:
          printf("ingrese el numero de Radiadores:\n");
          scanf("%f", &numE);
          break;
        }
        if (opcion > 5)
        {
          printf("Solo hay 5 productos escoja bien\n");
        }
        printf("Desea elegir otro producto?  Si=1  No=0\n");
        scanf("%d", &opcion2);
      } while (opcion2 == 1);
      break;

    case 2:
      printf("Ingrese el nombre del cliente: \n");
      scanf("%s", &nombre);
      printf("Ingrese la cedula del cliente: \n");
      scanf("%s", &cedula);

      subtotalA = numA * precioA;
      subtotalB = numB * precioB;
      subtotalC = numC * precioC;
      subtotalD = numD * precioD;
      subtotalE = numE * precioE;

      imprimirFcatura( nombre,  cedula,  numA,  numB,  numC,  numD,  numE,  precioA,  precioB, 
                       precioC,  precioD,  precioE,  subtotalA,  subtotalB,  subtotalC,  subtotalD, 
                       subtotalD, subtotalE);

      subtotal = subtotalA + subtotalB + subtotalC + subtotalD, subtotalE;

      subtotal = calculoDescuento(subtotal);

      total = subtotal * 1.12;

      printf("El subtotal es: %.2f\n", subtotal);
      printf("El total es: %.2f\n", total);
      break;
    }

  } while (menu != 3);

  return 0;
}
