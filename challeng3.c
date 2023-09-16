#include <stdio.h>
#include <stdlib.h>

int main()
{
// Calcule et affichage résultat en format décimal
int a ,b ,S , D , M , P , T;
printf("taper la valeur de a \n");
scanf("%d",&a);
printf("taper la valeur de b \n");
scanf("%d",&b);

S = a+b;
T = a-b;
D = a/b;
M = a*b;
P= a%b;
printf("La somme = %d\n",S);
printf("la sustraction = %d\n",T);
printf("la divesion = %d\n",D);
printf("la multiplication = %d\n",M);
printf("le reste = %d",P);



    return 0;


}
