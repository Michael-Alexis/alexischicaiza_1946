#include <stdio.h>

main()
{
    int i;
    short valores;
    char letra;
    bool bandera;
    float peso;
    double altura;
    printf("Ingresar un valor entero: \t");
    scanf("%d",&i);
    printf("Ingresar un valor short: \t");
    scanf("%i",&valores);
    printf("Ingresar un valor char: \t");
    fflush(stdin);
    scanf("%c",&letra);
    printf("Ingresar un valor booleano: \t");
    scanf("%d",&bandera);
    printf("Ingresar un valor float: \t");
    scanf("%f",&peso);
    printf("Ingresar un valor double: \t");
    scanf("%lf",&altura);
}