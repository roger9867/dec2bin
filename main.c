#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>













int main(){


printf("Welchen Datentyp wollen Sie in seiner korrekten Binärdarstellung anzeigen lassen?\n\n1. Int\n2. Float\n3. Double\n4. Char\n\n");

int mode = 0;
scanf("%d", &mode);




if(mode==1){
    printf("Geben Sie eine beliebige Ganzzahl ein: \n");
}
if(mode==2){
    printf("Geben Sie eine beliebige Kommazahl im Format XX.XX ein: \n");
}
if(mode==3){
    printf("Geben Sie eine beliebige Kommazahl im Format XX.XX ein: \n");
}
if(mode==4){
    printf("Geben Sie ein beliebeiges Zeichen ein: \n");
}
if(mode != 1 && mode != 2 && mode != 3 && mode !=4){
    return 0;
}





    return 0;
}