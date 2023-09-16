#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Nombre entier à trois chiffres en ordre inverse
    int a ,nbr1 , nbr2 , nbr3 ;
    printf("taper le nembre a ");
    scanf("%d",&a);
    nbr1=(a%10);
    nbr2=(a/10%10);
    nbr3=(a/100);
    printf("nbr1 = %d\n",nbr1);
    printf("nbr2 =%d\n",nbr2);
    printf("nbr3 =%d\n",nbr3);



    return 0;


}
