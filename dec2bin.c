#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//#include "functions.c"

#define localize_bit(in) ((long)pow(2,in) & container.L)>>in


union u1{

long L;
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
    scanf("%lu", &container.L);
}
if(mode==2){
    printf("Geben Sie eine beliebige Kommazahl im Format XX.XX ein: \n");
    scanf("%f", &container.F);
}
if(mode==3){
    printf("Geben Sie eine beliebige Kommazahl im Format XX.XX ein: \n");
    scanf("%lf", &container.D);
   


    long* box_for_bin = (long*)malloc(sizeof(long)+1);

    for(int i = 0; i<64; i++){
   
      box_for_bin[63-i] = localize_bit(i);
    }

    for(int i= 0; i<64; i++){
    printf("%ld", box_for_bin[i]);
    }
    printf("\n");
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