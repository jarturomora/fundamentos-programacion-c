# include <stdio.h>
# include <stdlib.h>
//# include <time.h>

int main() {

  // Configuración del juego
  struct defensa_castillo
  {
    int poder_ataque;
    char nombre[20];
  };
  
  int salud_castillo = 100;
  struct defensa_castillo muralla = {5, "Muralla"};
  struct defensa_castillo arqueros = {10, "Arqueros"};
  struct defensa_castillo aceite = {15, "Aceite Hirviendo"};
  int ataque_min = 10;
  int ataque_max = 30;
  int num_rondas = 5;
  int ronda_actual = 1;
  int eleccion = 0;

  // Mensaje de bienvenida
  printf("¡Bienvenido a la defensa del castillo!\n");
  printf("Tienes %d rondas para defender el castillo.\n", num_rondas);
  
  do {
    printf("\n----------------------------------------\n");
    printf("\n--- Ronda %d de defensa del castillo ---\n", ronda_actual);
    printf("\n----------------------------------------\n");
    // Elección aleatoria de un ataque enemigo
    int ataque_enemigo = ataque_min + rand() % (ataque_max - ataque_min + 1);
    printf("El castillo es atacado con un poder de %d\n", ataque_enemigo);

    // Defensa del castillo
    printf("Elige tu defensa:\n");
    printf("1. Muralla (Poder de ataque: %d)\n", muralla.poder_ataque);
    printf("2. Arqueros (Poder de ataque: %d)\n", arqueros.poder_ataque);
    printf("3. Aceite Hirviendo (Poder de ataque: %d)\n", aceite.poder_ataque);
    printf("¿Qué defensa deseas usar? ");
    scanf("%d", &eleccion);

    // Validar elección y aplicar defensa
    if (eleccion < 1 || eleccion > 3) {
      printf("\nElección inválida. Usando Muralla por defecto.\n");
      eleccion = 1;
    }
    else if (eleccion == 1) {
      printf("\nHas elegido usar la Muralla.\n");
      salud_castillo = salud_castillo - (ataque_enemigo - muralla.poder_ataque);
    } else if (eleccion == 2) {
      printf("\nHas elegido usar a los Arqueros.\n");
      salud_castillo = salud_castillo - (ataque_enemigo - arqueros.poder_ataque);
    } else {
      printf("\nHas elegido usar Aceite Hirviendo.\n");
      salud_castillo = salud_castillo - (ataque_enemigo - aceite.poder_ataque);
    }    
    printf("\nDefensa realizada!\n");
    printf("\nEl castillo tiene %d de salud restante.\n", salud_castillo);
    if (salud_castillo <= 0) {
      printf("\nEl castillo ha sido destruido! Has perdido.\n");
      break;
    }

    num_rondas--;
    ronda_actual++;
  }while (num_rondas > 0);
  
  if (num_rondas == 0) {
    printf("\n¡Has defendido el castillo con éxito!\n");
  }
  return 0;
}