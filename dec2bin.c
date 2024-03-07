#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>







union {

int I;
float F;
double D;
char C;

}container;






int main(){


printf("Welchen Datentyp wollen Sie in seiner korrekten Binärdarstellung anzeigen lassen?\n\n1. Int\n2. Float\n3. Double\n4. Char\n\n");

int mode = 0;
scanf("%d", &mode);


if(mode==1){
    printf("Geben Sie eine beliebige Ganzzahl ein: \n");
    scanf("%d", &container.I);
}
if(mode==2){
    printf("Geben Sie eine beliebige Kommazahl im Format XX.XX ein: \n");
    scanf("%f", &container.F);
}
if(mode==3){
    printf("Geben Sie eine beliebige Kommazahl im Format XX.XX ein: \n");
    scanf("%lf", &container.D);
}
if(mode==4){
    printf("Geben Sie ein beliebeiges Zeichen ein: \n");
    scanf("%c", &container.C);
}
if(mode != 1 && mode != 2 && mode != 3 && mode !=4){
    return 0;
}





    return 0;
}