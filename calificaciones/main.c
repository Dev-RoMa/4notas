#include <stdio.h>
#include <stdlib.h>

    /* si es menor a 5 ha reprobado
    si es 5 es suficiente, 6 es bien,
    7 y 8 es notable; sobresaliente 9-10*/

int main()
{
    float nota;
    float nota1;
    float nota2;
    float nota3;
    float notaf;

    printf("Bienvenido\n");
    printf("Ingrese primera nota = ");
    scanf("%f", &nota);
    printf("\n");
    printf("%.2f", nota);
    printf("\n");

    printf("Ingrese segunda nota = ");
    scanf("%f", &nota1);
    printf("\n");
    printf("%.2f", nota1);
    printf("\n");

    printf("Ingrese tercera nota = ");
    scanf("%f", &nota2);
    printf("\n");
    printf("%.2f", nota2);
    printf("\n");

    printf("Ingrese cuarta nota = ");
    scanf("%f", &nota3);
    printf("\n");
    printf("%.2f", nota3);
    printf("\n");

    printf("su promedio se calculara con las cuatro notas \n");
    notaf = nota + nota1+ nota2 + nota3;
    notaf = notaf/4;
    printf("su nota final es = %.2f\n", notaf);

        /* si es menor a 5 ha reprobado
    si es 5 es suficiente, 6 es bien,
    7 y 8 es notable; sobresaliente 9-10*/

    if (notaf >= 5.0 && notaf < 6.0) {
        printf("ha aprobado con suficiente");
    }
        else if (notaf < 1.0) {
            printf("no puede tener promedio menor a 5.0 !!!\nreintente");
        }
        else if (notaf >= 6.0 && notaf < 7.0){
            printf("ha aprobado bien ");
        }
        else if (notaf >= 7.0 && notaf < 9.0){
            printf("ha aprobado de manera notable ");
        }
        else if (notaf >= 9.0 && notaf < 10.0) {
            printf("ha aprobado de manera sobresaliente\n felicitaciones !!!");
        }
        else if (notaf > 10.0) {
            printf("no puede tener un promedio sobre 10.0 -_-\nreintente");
        }
    else {
        printf("\nha reprobado ");
    }
    printf("\n---------------------------------------\n");
    printf("fin del programa");
    printf("\n---------------------------------------\n");
}
