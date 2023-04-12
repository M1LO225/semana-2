#include <stdio.h>
#include <stdlib.h>

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
    
  
    do
      {
        printf("1) Cotizar Factura\n");
        printf("2) Facturar\n");
        printf("3) Salir\n"); 
        printf("Que desea hacer?\n");
        scanf("%d", &menu);
       

        switch(menu)
        {
          case 1: 
                do
                  {
                    printf("**********Escoja un producto que desee facturar: **********\n");
                    printf("1) Llantas (Precio: $150)\n");
                    printf("2) Kit Pastillas de freno (Precio: $55)\n");
                    printf("3) Kit de embrague (Precio: $180)\n");
                    printf("4) Faro (Precio: $70)\n");
                    printf("5) Radiador (Precio: $120)\n");
                    scanf("%d" ,&opcion);
                    
  
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
                }while(opcion2 ==1);
                break;


          case 2: 
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
            
                  if (subtotal>100 && subtotal <=500)
                  {
                      subtotal=subtotal*0.05;
                  }
                  else if (subtotal>500 && subtotal<=1000)
                  {
                      subtotal=subtotal*0.07;
                  }
                  else if (subtotal>1000)
                  {
                    subtotal=subtotal*0.1;
                  }
               
                  total = subtotal *1.12;
              
                  
                  
                     
                  printf("El subtotal es: %.2f\n",subtotal);
                  printf("El total es: %.2f\n",total);
          break;
          
          
      }
                   
      }while(menu !=3);
  
      return 0;
}