#include <stdio.h>
#include "menus.h"
int menuPrincipal()
{
  int menu = 0;
  printf("1) Cotizar Factura\n");
  printf("2) Facturar\n");
  printf("3) Salir\n");
  printf("Que desea hacer?\n");
  scanf("%d", &menu);
  return menu;
}

int menuProductos()
{
  int opcion;
  printf("**********Escoja un producto que desee facturar: **********\n");
  printf("1) Llantas (Precio: $150)\n");
  printf("2) Kit Pastillas de freno (Precio: $55)\n");
  printf("3) Kit de embrague (Precio: $180)\n");
  printf("4) Faro (Precio: $70)\n");
  printf("5) Radiador (Precio: $120)\n");
  scanf("%d", &opcion);
  return opcion;
}