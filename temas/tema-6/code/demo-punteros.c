#include <stdio.h>

int main() {
  
  // *** Demo de dirección de memoria ***
  printf("\n\n *** Demo de dirección de memoria ***");
  int numero = 5;

  // Se imprime el valor asignado a la variable y la dirección de memoria donde se almacena el valor
  printf("\n\nLa variable 'numero' tiene asignado el valor %d y la dirección de memoria %d", numero, &numero);

  // *** Demo creando punteros ***
  printf("\n\n*** Demo creando punteros ***");
  int *p;

  // Asigno al puntero p la dirección de memoria de la variable número
  p = &numero;

  // Se imprime el valor asignado a la variable y la dirección de memoria donde se almacena el valor
  printf("\nEl valor al que apunta el puntero 'p' es %d y la dirección de memoria %d", *p, p);

  // *** Demo Asignación de Punteros ***
  printf("\n\n*** Demo Asignación de Punteros ***");
  int *p1;

  // Esta operación de asignación realiza una copia de la dirección de p en p1
  p1 = p;

  // Se imprime el valor asignado a la variable y la dirección de memoria donde se almacena el valor
  printf("\nEl valor al que apunta el puntero 'p1' es %d y la dirección de memoria %d", *p1, p1);

  // *** Demo Operaciones con Punteros ***
  printf("\n\n*** Demo Operaciones con Punteros ***");
  int niveles[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int *jugador1, *jugador2;

  jugador1 = &niveles[4];
  jugador2 = &niveles[2];

  // Nivel actual de los jugadores
  printf("\nEl Jugador 1 está en el nivel %d, y el Jugador 2 en el %d", *jugador1, *jugador2);
  printf("\nDirección Jugador 1: %d", jugador1);
  printf("\nDirección Jugador 2: %d", jugador2);

  // El jugador 2 avanza dos niveles
  jugador2 = jugador2 + 2;

  printf("\n\nEl Jugador 2 avanza dos niveles.");
  printf("\nDirección Jugador 1: %d", jugador1);
  printf("\nDirección Jugador 2: %d", jugador2);

  // Nivel actual de los jugadores
  printf("\nEl Jugador 1 está en el nivel %d, y el Jugador 2 en el %d", *jugador1, *jugador2);

  if (jugador1 == jugador2) {
    printf("\nLos jugadores están en el mismo nivel");
  }
  else {
    printf("\nLos jugadores están en distinto nivel");
  }

  // *** Demo Puntero a Array ***
  printf("\n\n*** Demo Puntero a Vector ***\n\n");
  int vector[] = {3, 8, 9, 7};
  int *pVector;

  pVector = &vector[0];

  // Calcular el tamaño del array
  int tamano = sizeof(vector) / sizeof(vector[0]);

  for (int i = 0; i < tamano; i++) {
    printf("\nValor actual al que apunta 'pVector': %d", *pVector);
    pVector++;
  }

  // *** Demo Puntero a Cadenas ***
  printf("\n\n*** Demo Puntero a Cadenas ***\n\n");
  char *cadena = "Juguemos";
  char *pCadena;

  pCadena = cadena;
 
  while(*pCadena) {
    printf("%c",*pCadena);
    pCadena++;
  }

  return 0;

}
