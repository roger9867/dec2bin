#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void case_double ();



union u1{

long L;
float F;
double D;
char C;

}container;






void case_double (){

    
      //printf("%d\n", container.D);
//char array[65];      
long array2[65];

      for(int i = 0; i<64; i++){
     // char array[65];
      //sprintf(array, "%d", container.I);
      // printf("%s\n", array);
      //int res = atoi(array);
      //printf("%d\n", res);

      // int test = ((int)pow(2,i) & res)>>i;
      //printf("%d\n", test);
      //int array2[65];
       array2[63-i] = ((long)pow(2,i) & container.L)>>i;
      
      }
      for(int j= 0; j<64; j++){
      printf("%ld", array2[j]);
      }
      printf("\n");
}
