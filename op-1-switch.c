#include <stdio.h>
#include <math.h>
/*
En linux se debe usar 

gcc 12switch.c -lm

De otra forma no funcional la biblioteca math.h

La declaración switch como una declaración de selección 
múltiple. Esta declaración se usa para seleccionar un 
camino de diferentes alternativas en la ejecución de 
un programa. Funciona asociando una variable con un lista 
de enteros y cuando encuentra la opción que se ajusta; 
entonces la secuencia se ejecuta.

En este programa veremos la forma general de la 
declaración switch.

 */

int main(void)
{
  float lado, base; 
  int opcion;
  printf("Introduzca lado del triángulo:");
  scanf("%f",&lado);
  printf("Introduzca base del triángulo:");
  scanf("%f",&base);
           
  printf("Seleccione opción:\n");
  printf("1 - Equilátero\n");
  printf("2 - Isósceles\n");
  printf("3 - Escaleno (rectángulo)\n");
  scanf("%d",&opcion);

  switch (opcion)
    {
    case 1:
      printf("El perímetro es:%.2f\n",3*lado);
      break;
    case 2:
      printf("El perímetro es:%.2f\n",(2*lado)+base);
      break;
    case 3:
      printf("El perímetro es:%.2f\n",lado + base + sqrt(pow(lado,2)+pow(base,2)));
      break;
    default:
      printf("Opción no válida.");
      break;
    }
  return 0;
}

/*
Implementar el teorema del seno y del coseno para 
calcular un lado.

*/

