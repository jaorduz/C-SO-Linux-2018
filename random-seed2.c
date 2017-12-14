#include<stio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>

int main(){
float   x, max, y;
int     i, cuenta;
max = RAND_MAX*1.0;


srand(1981122);


cuenta=0
  for(i=1;i<=10;i++){
x=(rand()/max);
y=(rand()/max);
     printf("%i %f %f\n", i, x,y); 
 }
return 0;
}
