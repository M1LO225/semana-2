#include <stdio.h>

int main (int argc, char *argv[]) {
    float nota;
    printf("Ingrese la nota del estudiante:\n");
    scanf("%f", &nota);
    if (nota<5)
    {
        printf("Ha suspendido el estudiante");
    }else if (nota==5)
    {
        printf("La nota es suficiente");
    }else if (nota==6)
    {
        printf("La nota es buena");
    }else if (nota==7 || nota==8)
    {
        printf("La nota es notable");
    }else if (nota==9 || nota==10)
    {
        printf("La nota es sobresaliente");
    }
    
    
    
    
    
    
    return 0;
}