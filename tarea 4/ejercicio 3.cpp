#include<iostream>
#include<cstdio>
#include<cmath>
int main(){
    float D,d,a,l,p;
    printf("ingrese la diagonal mayor: ");
    scanf("%f",&D);
    printf("ingresa la diagonal menor: ");
    scanf("%f",&d);
    
    a=D*d/2;
    l=sqrt(pow(D/2,2)+pow(d/2,2));
    p=4*l;

    printf("el area del rombo es: %.2f\n", a);
    printf("el lado del rombo es: %.2f\n", l);
    printf("el perimetro del rombo es: %.2f\n", p);
    return 0;
}