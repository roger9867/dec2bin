#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long* case_double ();



union u1{

long L;
float F;
double D;
char C;

}container;






long* case_double (){

         
long* box_for_bin = (long*)malloc(sizeof(long)+1);

      for(int i = 0; i<64; i++){
   
      box_for_bin[63-i] = localize_bit(i);
      
      }
  
      return box_for_bin;
}
