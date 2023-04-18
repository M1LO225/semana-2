#include <stdio.h>
#include "modulos.h"
float calculoDescuento(float subtotal)
{
  if (subtotal > 501 && subtotal <= 1000)
  {
    subtotal = subtotal * 0.96;
    printf("Se aplico el 4 porciento: %.2f", subtotal);
  }
  else if (subtotal > 1001 && subtotal <= 5000)
  {
    subtotal = subtotal * 0.93;
    printf("Se aplico el 7 porciento: %.2f", subtotal);
  }
  else if (subtotal > 5000)
  {
    subtotal = subtotal * 0.91;
    printf("Se aplico el 9 porciento: %.2f", subtotal);
  }
  return subtotal;
}

void imprimirFcatura(char nombre, char cedula, float numA, float numB, float numC, float numD, float numE, float precioA, float precioB, 
                     float precioC, float precioD, float precioE, float subtotalA, float subtotalB, float subtotalC, float subtotalD, 
                     float subtotalD, float subtotalE)
{
  printf("*********Factura*********\n\n");
  printf("********Datos del Cliente********\n");
  printf("Nombre: %s", nombre);
  printf("Cedula: %s", cedula);
  printf("Producto                 Cantidad              Precio Unitario               Precio total\n");
  if (numA != 0)
  {
    printf("Llantas                  %.2f                  %.2f                      %.2f\n", numA, precioA, subtotalA);
  }
  if (numB != 0)
  {
    printf("Kit frenos               %.2f                  %.2f                      %.2f\n", numB, precioB, subtotalB);
  }
  if (numC != 0)
  {
    printf("Kit embrague             %.2f                  %.2f                      %.2f\n", numC, precioC, subtotalC);
  }
  if (numD != 0)
  {
    printf("Faros                    %.2f                  %.2f                      %.2f\n", numD, precioD, subtotalD);
  }
  if (numE != 0)
  {
    printf("Radidador                %.2f                  %.2f                      %.2f\n", numE, precioE, subtotalE);
  }
}