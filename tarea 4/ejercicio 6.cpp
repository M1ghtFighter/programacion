#include<iostream>
#include<cstdio>
#include<cmath>
int main (){
    int a,b,c,radio,s,v;
    printf("ingrese lado 1: ");
    scanf("%d",&a);
    printf("ingrese lado 2: ");
    scanf("%d",&b);
    printf("ingrese lado 3: ");
    scanf("%d",&c);
    printf("ingerse el radio: ");
    scanf("%d",&radio);
   
    //se multiplica el radio por 4
    v=radio*4;
    s=(a*b*c)/v;
    printf("el arae es: %.2d\n",s);

    return 0;
}