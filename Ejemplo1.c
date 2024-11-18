/* Garcia Juarez Rodrigo
programa para mostrar todos los pares del 0 al 100*/
#include <stdio.h>
#include <math.h>

int i, temp;

int main ()
{
  printf ("Los numeros pares entre 0 y 100 son:  ");
  
  for (i = 0; i <=100; i++)
  {
    if (i % 2 == 0)/* el if es la unica estructura mostrada en clase hasta el momento*/
    {
        printf(" %d ", i);
    }
  }

  printf("\n");
  return 0;
}
