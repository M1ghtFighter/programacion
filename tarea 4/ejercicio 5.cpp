#include<iostream>
#include<cstdio>
#include<cmath>
int main(){
    int a,c,b,h,A,p;
    printf("ingrese lado 1: ");
    scanf("%d",&a);
    printf("ingrese lado 2: ");
    scanf("%d",&c);
    printf("ingrese base: ");
    scanf("%d",&b);
    printf("ingrese altura: ");
    scanf("%d",&h);

    A=b*h/2;
    p=a+b+c;

    printf("el area del triangulo es: %.2d\n", A);
    printf("el perimetro del triangulo es: %.2d\n", p);
    return 0;
}