#include <stdio.h>
/*
Ejercicio debes realizar un programa que use funciones para 
obtener la media aritmetica.
*/



int max(float x, float y); // declaracion de una funcion
int suma(float x, float y); // declaracion de la otra funcion

int main(){

int m, n;


do{
scanf("%d %d", &m, &n);
printf("maximo valor entre %d, %d es %d\n", m, n, max(m,n));
printf("La suma del valor %d y %d es %d\n", m, n, suma(m,n));
}while(m!=0);


return 0;
}





int max(float x, float y) // defincion de una funcion
{
if(x < y){
	return y;
}else{
	return x;
}
}



int suma(float x, float y) // defincion de una funcion
{

return x + y;
}
