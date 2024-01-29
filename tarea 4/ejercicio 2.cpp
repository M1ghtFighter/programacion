#include<iostream>
#include<cstdio>
#include<cmath>

int main (){
    float b,l,a,p,d;
    printf ("ingresa la base del rectangulo: ");
    scanf("%f",&b);
    printf("ingresas la altura del rectangulo: ");
    scanf("%f",&l);

    a=b*l;
    p=2*(b+l);
    d=sqrt(pow(b,2)+pow(l,2));

    printf("el arae del rectangulo es: %.2f\n", a);
    printf("el perimetro del rectangulo es: %.2f\n", p);
    printf("la diagonal del rectangulo es: %.2f\n",d); 
    return 0;
}