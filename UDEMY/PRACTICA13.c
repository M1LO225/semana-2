#include <stdio.h>

int main (int argc, char *argv[]) {

    int info[3][4]= {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int sumaTemBaja=0, sumaTemMedia=0, sumaTempAlta=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j==1)
            {
                sumaTemBaja=sumaTemBaja+info[i][j];
            }
            if (j==2)
            {
                sumaTemMedia= sumaTemMedia+info[i][j];
            }
            if (j==3)
            {
                sumaTempAlta= sumaTempAlta+info[i][j];
            }
            
        }
        
    }
    float promedioBaja= sumaTemBaja;
    float promedioMedio= sumaTemMedia;
    float promedioAlto= sumaTempAlta;
    printf("Promedio temporada baja: %.2f\nPromedio temporada media: %.2f\nPromedio temporada alta: %.2f\n", promedioBaja, promedioMedio, promedioAlto);
    return 0;
}