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
    printf(" Ingrese primera nota = ");
    scanf("%f", &nota);
    print(\n);
    printf("%.2f", nota);

    printf(" Ingrese segunda nota = ");
    scanf("%f", &nota1);
    print(\n);
    printf("%.2f", nota1);

    printf(" Ingrese tercera nota = ");
    scanf("%f", &nota2);
    print(\n);
    printf("%.2f", nota2);

    printf(" Ingrese cuarta nota = ");
    scanf("%f", &nota3);
    print(\n);
    printf("%.2f", nota3);

    printf(" su promedio se calculara con las cuatro notas \n");
    notaf = nota + nota1+ nota2 + nota3;
    notaf = notaf/4;
    printf("su nota final es = %.2f", notaf);
}
