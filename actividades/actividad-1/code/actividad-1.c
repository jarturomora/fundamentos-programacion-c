# include <stdio.h>
# include <stdlib.h>

// Función para mostrar el menú
void mostrarMenu() {
  printf("Bienvenido al Juego de Hundir la Flota\n");
  printf("======================================\n");
  printf("1. Jugar\n");
  printf("2. Ver mejores puntuaciones\n");
  printf("3. Salir\n");
  printf("Selecciona una opción: ");
}

// Programa principal

int main() {
  int opcion; // Variable para guardar la opción del menú

  do {
    // Mostrar el menú
    mostrarMenu();

    // Leer la opción del menu
    scanf("%d", &opcion);

    // Validar la opción seleccionad
    switch (opcion)
    {
    case 1:
      printf("\nHas seleccionado 'Jugar' (Sin implementar)\n");
      break;
    case 2:
      printf("\nHas seleccionado 'Ver mejores puntuaciones' (Sin implementar)\n");
      break;
    case 3:
      printf("\nSaliendo del Juego, ¡Gracias por jugar!\n");
      break;
    default:
      printf("\nOpción no válida. Por favor, selecciona una opción entre 1, 2 o 3\n");
      break;
    }

    // Pausa para que el usuario lea el mensaje antes de mostrar de nuevo el menú
    printf("\nPresiona ENTER para continuar...\n");
    getchar(); // Lee el salto de linea pendiente
    getchar(); // Esperar la respuesta del usuario

  } while (opcion != 3);

  return 0;

}