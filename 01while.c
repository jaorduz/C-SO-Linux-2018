/*
La instruccion while se utiliza para generar bucles (ciclos):
hasta satisfacer la condicion, un grupo de instrucciones se 
ejecuta de forma repetida.
la forma general es:

while(condicion){instrucciones}

*/


#include <stdio.h>

int main(){

int digini=1, digfin=5;


digini = digini -1;

digfin= digfin -1;

printf("Ahora te muestro una lista de datos:\n");

while(digini <= digfin)
{
digini= digini+1;
printf("%d\n",digini);
}
return 0;
}

/*
Tu trabajo es implementar los valores digini y digfin por consola.

*/
