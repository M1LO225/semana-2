#include <stdio.h>
#include <stdlib.h>
//Emilio Guerrero....Brandon Altamirano
int main(int argc, char *argv[])
{

    char nombre[100];
    char cedula[100];

    float precioA = 150, precioB = 55, precioC = 180, precioD = 70, precioE = 120;
    float numA = 0, numB = 0, numC = 0, numD = 0, numE = 0;
    float subtotalA = 0, subtotalB = 0, subtotalC = 0, subtotalD = 0, subtotalE = 0;
    float subtotal = 0, total = 0;

    int opcion=0, opcion2=0;
    int menu=0;
    
  
    do //este do es el principal del programa, lo que hace es el menú para elegir los productos y hacer el proceso de facturación
      {
        printf("1) Cotizar Factura\n");
        printf("2) Facturar\n");
        printf("3) Salir\n"); 
        printf("Que desea hacer?\n");
        scanf("%d", &menu);
       

        switch(menu)//apartir de este switch se elige las opciones 1, 2 o 3, en la opcion 1 se cotiza la factura, es decir se elige los productos y la cantidad del mismo
        {//en la opcion 2 se hace el proceso de facturacion, es decir se ingresa el nombre y cedula del cliente y se realizan los calculos para el total y subtotal a pagar
          case 1: //opcion 3, como su nombre dice es para salir y finalizar el programa
                do
                  {
                    printf("**********Escoja un producto que desee facturar: **********\n");
                    printf("1) Llantas (Precio: $150)\n");
                    printf("2) Kit Pastillas de freno (Precio: $55)\n");
                    printf("3) Kit de embrague (Precio: $180)\n");
                    printf("4) Faro (Precio: $70)\n");
                    printf("5) Radiador (Precio: $120)\n");
                    scanf("%d" ,&opcion);
                    
  
                    switch (opcion)//en este switch es para elegir el producto que quieres facturar y tambien ingresar la cantidad del producto
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
                }while(opcion2 ==1);
                break;


          case 2: //este case ya es la factura, se ingresa el nombre y cedula. Se realizan los calculos para la factura (subtotal y total)
                  printf("Ingrese el nombre del cliente: \n");
                  scanf("%s", &nombre);
                  printf("Ingrese la cedula del cliente: \n");
                  scanf("%s", &cedula);

                  printf("********Datos del Cliente********\n");
                  printf("Nombre: %s", nombre);
                  printf("Cedula: %s", cedula);
            
                  subtotalA = numA*precioA;
                  subtotalB = numB*precioB;
                  subtotalC = numC*precioC;
                  subtotalD = numD*precioD;
                  subtotalE = numE*precioE;

            printf("*********Factura*********\n\n");
                  printf("Producto                 Cantidad              Precio Unitario               Precio total\n");
                  if (numA!=0)
                  {
                      printf("Llantas                  %.2f                  %.2f                      %.2f\n", numA, precioA, subtotalA);    
                  }
                  if (numB!=0)
                  {
                      printf("Kit frenos               %.2f                  %.2f                      %.2f\n", numB, precioB, subtotalB);    
                  }
                  if (numC!=0)
                  {
                      printf("Kit embrague             %.2f                  %.2f                      %.2f\n", numC, precioC, subtotalC);    
                  }
                  if (numD!=0)
                  {
                      printf("Faros                    %.2f                  %.2f                      %.2f\n", numD, precioD, subtotalD);    
                  }
                  if (numE!=0)
                  {
                      printf("Radidador                %.2f                  %.2f                      %.2f\n", numE, precioE, subtotalE);    
                  }
            
                  subtotal=subtotalA+subtotalB+subtotalC+subtotalD,subtotalE;
            
                  if (subtotal>501 && subtotal <=1000)
                  {
                      subtotal=subtotal*0.96;
                      printf("Se aplico el 4 porciento: %.2f", subtotal);
                  }
                  else if (subtotal>1001 && subtotal<=5000)
                  {
                      subtotal=subtotal*0.93;
                      printf("Se aplico el 7 porciento: %.2f", subtotal);
                  }
                  else if (subtotal>5000)
                  {
                    subtotal=subtotal*0.91;
                      printf("Se aplico el 9 porciento: %.2f", subtotal);
                  }
               
                  total = subtotal *1.12;
              
                  
                  
                     
                  printf("El subtotal es: %.2f\n",subtotal);
                  printf("El total es: %.2f\n",total);
          break;
          
          
      }
                   
      }while(menu !=3);
  
      return 0;
}
