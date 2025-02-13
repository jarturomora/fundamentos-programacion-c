#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Estructura para almacenar los datos de un jugador
typedef struct {
    char nombre[50];
    int puntos;
} Jugador;

// Función para tirar el dado
int tirarDado(int caras) {
    return (rand() % caras) + 1; // Genera un número aleatorio entre 1 y 'caras'
}

int main() {
    Jugador jugador1, jugador2; // Estructuras para los jugadores
    int caras; // Número de caras del dado
    char continuar;
    
    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    // Solicitar los nombres de los jugadores
    printf("Introduce el nombre del jugador 1: ");
    scanf("%s", jugador1.nombre);
    jugador1.puntos = 0; // Inicializar puntos en 0

    printf("Introduce el nombre del jugador 2: ");
    scanf("%s", jugador2.nombre);
    jugador2.puntos = 0; // Inicializar puntos en 0

    // Elegir el tipo de dado
    //do {
    printf("Elige el tipo de dado:\n");
    printf("6. Dado de 6 caras\n");
    printf("12. Dado de 12 caras\n");
    printf("Selecciona 6 o 12: ");
    scanf("%d", &caras);
    
    // Juego principal
    do {
        printf("\n--- Nueva Ronda ---\n");

        // Turno del jugador 1
        int tiro1 = tirarDado(caras);
        printf("%s tira el dado y obtiene: %d\n", jugador1.nombre, tiro1);

        // Turno del jugador 2
        int tiro2 = tirarDado(caras);
        printf("%s tira el dado y obtiene: %d\n", jugador2.nombre, tiro2);

        // Determinar el ganador de la ronda
        if (tiro1 > tiro2) {
            printf("%s gana esta ronda!\n", jugador1.nombre);            
        } else if (tiro2 > tiro1) {
            printf("%s gana esta ronda!\n", jugador2.nombre);
        } else {
            printf("¡Es un empate!\n");
        }
s
        // Actualizar puntuación
        jugador1.puntos += tiro1; // Sumar puntos al jugador 1
        jugador2.puntos += tiro2; // Sumar puntos al jugador 2

        // Preguntar si desean seguir jugando
        printf("\n¿Desean jugar otra ronda? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    // Mostrar marcador final
    printf("\n--- Marcador Final ---\n");
    printf("%s: %d puntos\n", jugador1.nombre, jugador1.puntos);
    printf("%s: %d puntos\n", jugador2.nombre, jugador2.puntos);

    // Determinar el ganador final
    if (jugador1.puntos > jugador2.puntos) {
        printf("\n¡%s es el ganador del juego!\n", jugador1.nombre);
    } else if (jugador2.puntos > jugador1.puntos) {
        printf("\n¡%s es el ganador del juego!\n", jugador2.nombre);
    } else {
        printf("\nEl juego termina en empate.\n");
    }

    return 0;
}
