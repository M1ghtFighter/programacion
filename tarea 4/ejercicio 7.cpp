#include<iostream>
#include<cstdio>
#include<cmath>
int main (){
    double a,b,c,r,p,s;
    printf("ingrese lado 1: ");
    scanf("%lf",&a);
    printf("ingrese lado 2: ");
    scanf("%lf",&b);
    printf("ingrese lado 3: ");
    scanf("%lf",&c);
    printf("ingerse el radio: ");
    scanf("%lf",&r);

    p=(a+b+c)/2;
    s=r*p;

    printf("el perimetro es: %.2lf\n",p);
    printf("el area es: %.2lf\n", s);

    return 0;
}