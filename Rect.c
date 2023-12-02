/*Determinar el área y perímetro de un rectángulo*/

#include <stdio.h>

int main()
{
    int base, altura;
    int area, perimetro;
    scanf("%i", &base);
    scanf("%i", &altura);
    area= base*altura;
    perimetro= base+base+altura+altura;
    printf("area= % .2i", area);
    printf("perimetro= % .2i", perimetro);

}
