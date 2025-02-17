/*NÍVEL MESTRE - MODIFICADOR (DOUBLE). Usado para armazenar números com ponto flutuante, com precisão dupla*/
//Apenas Teste

#include <stdio.h>

int main()
{

    double numeroPreciso = 3.14159265358979;
    long double numeroMuitoPreciso = 3.14159265358979323646;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long int): %.21Lf\n", numeroMuitoPreciso);

    return 0;
}