#include <stdio.h>

int main()
{
  // Se declara la matriz (array de dos dimensiones)
  int m[5][5] = {
                  {2, 3, 5, 4, 1},
                  {6, 1, 3, 8, 7}
                };

  // Bucle for para recorrer las filas (primera dimensión)
  for (int i = 0; i < 5; i++)
  {
    // Bucle for para recorrer las columnas (segunda dimensión)
    for (int j = 0; j < 5; j++)
    {
      printf("%d, ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}