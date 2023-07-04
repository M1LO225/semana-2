#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, aprobado, suspendido;
    float nota;
    printf("Ingrese el la cantidad de estudiantes:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Escriba la nota del estudiante %d\n", i);
        scanf("%f", &nota);
        if (nota>6)
        {
            printf("El estudiante aprobo\n");
        }else {
            printf("El estudiante reprobo\n");
        }

    
    }
    
    return 0;
}