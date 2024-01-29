#include<iostream>
#include<cstdio>
#include<cmath>
int main (){
    double  B,b,h,a;
    printf("ingrese la base mayor: ");
    scanf("%lf",&B);
    printf("ingrese base menor: ");
    scanf("%lf",&b);
    printf("ingrese la altura: ");
    scanf("%lf",&h);
    a=((B+b)*h)/2;
    printf("el area del trapecio es: %.lf\n", a);
    return 0;
    }