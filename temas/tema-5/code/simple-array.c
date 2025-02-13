#include <stdio.h>

int main()
{
  // Se declara el vector (array de una dimensión)
  int v[5] = {2, 3, 5, 4, 1};

  printf("Inicia recorrido de vector \n");

  // Bucle for para recorrer el vector
  for (int i = 0; i < 5; i++)
  {
    printf("%d, ", v[i]);
  }

  printf("\nFinalizó el recorrido del vector");

  return 0;
}