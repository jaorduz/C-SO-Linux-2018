#include<stdio.h>
#include<math.h>

#include<stdlib.h> // necesaria para RAND_MAX que es una contante
#include<float.h>

int main(){

float  x, max;
int i;

max = RAND_MAX*1.0;

  for(i=0;i<=10;i++){

     x=(random()/max);

     printf("%i %f\n",i, x); 
 }

return 0
}
