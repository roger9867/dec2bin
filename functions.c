#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void case_double ();



union {

int I;
float F;
double D;
char C;

}container;






void case_double (){

    
      printf("%d\n", container.D);
      
      //int test = (int)pow(2,6) & container.I;
      char array[65];
      sprintf(array, "%d", container.D);
      printf("%s\n", array);
      int res = atoi(array);
      printf("%d\n", res);
      int test = (int)pow(2,6) & res;
      printf("%d\n", test);

}
