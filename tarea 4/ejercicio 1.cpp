#include<iostream>
#include <cstdio>
#include <cmath>

int main() {
    float lado,area,perimetro,diagonal;

    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%f", &lado);

     area = lado * lado;
     perimetro = 4 * lado;
     diagonal = lado * sqrt(2);

    printf("El area del cuadrado es: %.2f\n", area);
    printf("El perimetro del cuadrado es: %.2f\n", perimetro);
    printf("La diagonal del cuadrado es: %.2f\n", diagonal);

    return 0;
}
