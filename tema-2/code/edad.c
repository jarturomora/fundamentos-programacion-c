// Directrices del procesador
#include <stdio.h>

// Función principal
int main() {
  // Definición de variables
  char nombre[50];
  int edad;

  // 1. Pedir nombre a la persona
  printf("Por favor, escribe tu nombre: ");
  scanf("%s", nombre);

  // 2. Preguntar la edad
  printf("Por favor, escribe tu edad: ");
  scanf("%d", &edad);

  // 3. Validar si la edad es >=18
  if(edad >= 18) {
    // 3.1 Edad es >= 18
    printf("Eres mayor de edad");
  }
  else {
    // 3.2 Edad es < 18
    printf("Eres menor de edad");
  }

  return 0;
}