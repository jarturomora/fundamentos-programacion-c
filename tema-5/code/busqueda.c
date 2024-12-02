#include <stdio.h>;
#include <ctype.h>;  // Para usar tolower()

// Variable global para el vector de búsqueda
int v[50] = {1, 3, 7, 12, 15, 19, 22, 25, 27, 31, 35, 37, 40, 42, 45, 47, 49, 50, 
              53, 56, 59, 61, 63, 65, 67, 69, 71, 73, 76, 78, 81, 83, 85, 87, 89, 
              90, 91, 93, 95, 97, 98, 99, 100};

// Búsqueda secuencial o lineal
int BLineal(int v[], int n, int k)
{

  int i;

  int pos = -1;

  for (i = 0; i < n; i++)
  {
    if (v[i] == k)
      pos = i;
  }

  return pos;
}

// Búsqueda binaria
int BBinaria(int v[], int n, int elementoBus)
{

  int izq = 0;
  int der = n - 1;
  int centro = (izq + der) / 2;

  while ((izq <= der) && (v[centro] != elementoBus))
  {
    if (elementoBus < v[centro])
      der = centro - 1;
    else
    {
      izq = centro + 1;
    }
    centro = (izq + der) / 2;
  }
  if (izq > der)
    return -1;
  else  
    return centro;
}

int main() {
  
  char resp; // Variable para guardar la opción del menú seleccionada
  int num; // Variable para guardar el número a buscar
  int pos; // Variable para guardar la posición del número a buscar

  // Mostrar menú de opciones
  do {

    printf("Algoritmos de Búsqueda\n\n");
    printf("¿Qué número quieres buscar entre 1 y 100?: ");
    scanf("%d", &num);
    printf("\nMenú de Opciones\n");
    printf("l. Búsqueda lineal\n");
    printf("b. Búsqueda binaria\n");
    printf("s. Salir del programa\n");
    printf("Elige una opción: ");
    scanf(" %c", &resp);

    // Procesar la opción seleccionada usando un switch
    switch (resp) {
      case 'l':
          printf("Has elegido la búsqueda lineal.\n");
          pos = BLineal(v, 50, num);
          break;
      case 'b':
          printf("Has elegido la búsqueda binaria.\n");
          pos = BBinaria(v, 50, num);
          break;
      case 's':
          printf("Saliendo del programa. ¡Hasta luego!\n");
          break;
      default:
          printf("Opción no válida. Inténtalo de nuevo.\n");
          break;
    }
    printf("\nEl numero %d está en la posición %d\n\n", num, pos);

  } while (tolower(resp) != 's');
  
  return 0;
}