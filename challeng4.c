#include <stdio.h>
#include <stdlib.h>

int main()
{
// Moyenne et somme de 4 nombres
float a,b,c,d,S,M ;
printf("entrer la valeur de a :\n");
scanf("%f",&a);
printf("enter la valeur de b : \n");
scanf("%f",&b);
printf("enter la valeur de c :\n");
scanf("%f",&c);
printf("enter la valeur de d :\n");
scanf("%f",&d);
S= a+b+c+d;
M= (S/4);
printf("la somme =%.2f\n",S);
printf("la moyenne=%.2f",M);


    return 0;


}
