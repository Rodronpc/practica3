/* Garcia Juarez Rodrigo
Codigo para sumar todos los numeros del 0-100*/
#include <stdio.h>

int i;
int suma = 0;

int main ()
{
  for (i = 0; i <= 100; i++)/*Con este ejemplo se intuye que el for nos sirve pra repetir procesos*/
  {
    suma = suma + i;
  }

  printf("La suma de los numero del 0 al 100 es: %d\n", suma);
  return 0;
}
