#include <stdio.h>
/*

En este archivo implementaremos el ciclo for,considerando la siguiente 
estructura:

for(inicializacion; condicion; operacion)
{
//Acciones, instrucciones, declaraciones o sentencias.
}

Este tipo de sentencia (for) se implementa cuando conocemos el numero de 
veces que deseamos repetir la accion (iteraciones) y es una de las mas usadas en diferentes 
lenguajes de programacion.



El estudiante debe hacer que los valores inicial y final se adquieran a traves 
de la pantalla.

*/



int main()
{

	int inicial = 1, final=10, i, j;
int b, a=10;

		for(i=inicial; i<=final; i++)
	{
			for(j=1; j<=2; j++){
a = a + b;
printf("%d %d %d %d\n",i, a, b, j);
}


	}

}
