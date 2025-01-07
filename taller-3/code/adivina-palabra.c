#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ANIMALES 10 // Número máximo de animales para adivinar
#define MAX_NOMBRE 50 // Número máximo de caracteres para el nombre del jugador
#define INTENTOS 3 // Número máximo de intentos

// Estructura para representar un jugador
typedef struct {
    char nombre[MAX_NOMBRE];
    int puntos;
} Jugador;

// Función para enmascarar la palabra
void enmascararPalabra(char *palabra, char *enmascarada) {
    int len = strlen(palabra);
    enmascarada[0] = palabra[0];
    for (int i = 1; i < len - 1; i++) {
        enmascarada[i] = '*';
    }
    enmascarada[len - 1] = palabra[len - 1];
    enmascarada[len] = '\0';
}

// Función para jugar un turno
int jugarTurno(char *palabra, char *enmascarada) {
    char intento[50];
    int puntos = 0;

    for (int i = 0; i < INTENTOS; i++) {
        printf("Palabra: %s\n", enmascarada);
        printf("Intento %d: Ingresa una letra o la palabra completa: ", i + 1);
        scanf("%s", intento);

        // Si adivina la palabra completa
        if (strcmp(intento, palabra) == 0) {
            if (i == 0) {
              puntos = 10;
            }
            else {
              if (i == 1) {
                puntos = 5;
              }
              else {
                puntos = 2;
              }
            }
            // puntos = (i == 0) ? 10 : (i == 1) ? 5 : 2; // Código equivalente a los if anidados.
            printf("¡Correcto! Has adivinado la palabra.\n");
            break;
        }

        // Si adivina una letra
        if (strlen(intento) == 1) {
            char letra = intento[0];
            int encontrada = 0;
            for (int j = 1; j < strlen(palabra) - 1; j++) {
                if (palabra[j] == letra) {
                    enmascarada[j] = letra;
                    encontrada = 1;
                }
            }
            if (strcmp(enmascarada, palabra) == 0) {
              puntos = (i == 0) ? 10 : (i == 1) ? 5 : 2; // Código equivalente a los if anidados.
              printf("¡Correcto! Has adivinado la palabra: %s.\n", palabra);
              break;
            }
            if (!encontrada) {
                printf("La letra' %c' no está en la palabra.\n", letra);
            }
        }
    }

    if (puntos == 0) {
        printf("Lo siento, no has adivinado la palabra. Era: %s\n", palabra);
    }

    return puntos;
}

// Función para mostrar los puntos de los jugadores
void mostrarPuntos(Jugador *jugadores, int totalJugadores) {
    printf("\nPuntajes actuales:\n");
    for (int i = 0; i < totalJugadores; i++) {
        printf("%s: %d puntos\n", jugadores[i].nombre, jugadores[i].puntos);
    }
    printf("\n");
}

int main() {
    char *animales[MAX_ANIMALES] = {
        "elefante", "jirafa", "canguro", "tigre", "raton",
        "delfin", "pantera", "leon", "zorro", "hipopotamo"
    };

    Jugador *jugadores = NULL; // Puntero dinámico para gestionar jugadores
    int totalJugadores = 0;
    char continuar;

    // Inicializar generador de números aleatorios
    srand(time(NULL));

    do {
        // Agregar un nuevo jugador
        jugadores = realloc(jugadores, (totalJugadores + 1) * sizeof(Jugador));
        printf("Ingresa el nombre del nuevo jugador: ");
        scanf("%s", jugadores[totalJugadores].nombre);
        jugadores[totalJugadores].puntos = 0;
        totalJugadores++;

        do {
            // Elegir una palabra al azar
            char *palabra = animales[rand() % MAX_ANIMALES];
            char enmascarada[50];
            enmascararPalabra(palabra, enmascarada);

            // Jugar el turno del jugador actual
            printf("\nTurno de %s:\n", jugadores[totalJugadores - 1].nombre);
            jugadores[totalJugadores - 1].puntos += jugarTurno(palabra, enmascarada);

            // Mostrar puntajes
            mostrarPuntos(jugadores, totalJugadores);

            // Preguntar si el jugador desea continuar
            printf("¿Quieres seguir jugando, %s? (s/n): ", jugadores[totalJugadores - 1].nombre);
            scanf(" %c", &continuar);
        } while (continuar == 's' || continuar == 'S');

        // Preguntar si hay un nuevo jugador
        printf("¿Hay un nuevo jugador? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    // Mostrar puntajes finales
    printf("\nPuntajes finales:\n");
    mostrarPuntos(jugadores, totalJugadores);

    // Liberar la memoria dinámica
    free(jugadores);

    printf("Gracias por jugar. ¡Hasta la próxima!\n");
    return 0;
}
