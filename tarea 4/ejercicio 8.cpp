#include<iostream>
#include<cstdio>
#include<cmath>
int main (){
    double a,b,c,p,s;
    printf("ingrese lado 1: ");
    scanf("%lf",&a);
    printf("ingrese lado 2: ");
    scanf("%lf",&b);
    printf("ingrese lado 3: ");
    scanf("%lf",&c);
   

    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));

    printf("el perimetro es: %.2lf\n",p);
    printf("el area es: %.2lf\n", s);

    return 0;
}