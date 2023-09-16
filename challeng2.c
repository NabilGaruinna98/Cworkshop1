#include <stdio.h>
#include <stdlib.h>
// Affichage Température
int main()
{
float F , C ;
printf("taper la temperature en F \n");
scanf("%f",&F);
C = (F-32)/1.8 ;
printf("la temperature en celsius est :%.2f\n",C );
if (C<0)
    printf("la temperature est tres froid");
else if (C>0 && C<16)
    printf("la temperature est froid");
else if (C>20&&C<37)
    printf("la temperature est chaud");
else
    printf("la temperature est tres chaud" );



    return 0;

}
