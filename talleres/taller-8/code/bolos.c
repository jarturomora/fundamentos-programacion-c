#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir constantes
#define MAX_JUGADORES 5  // Número máximo de jugadores
#define RONDAS 10        // Cada partida de bolos tiene 10 rondas

// Definir la estructura para almacenar los datos de un jugador
struct Jugador {
    char nombre[50];    // Nombre del jugador
    int puntajes[RONDAS]; // Puntos obtenidos en cada ronda
    int totalPuntos;     // Puntaje total acumulado
};

// Función para registrar jugadores
void registrarJugadores(struct Jugador jugadores[], int numJugadores) {
    for (int i = 0; i < numJugadores; i++) {
        printf("Introduce el nombre del jugador %d: ", i + 1);
        scanf("%s", jugadores[i].nombre); // Leer nombre del jugador
        jugadores[i].totalPuntos = 0;     // Inicializar puntaje total en 0
    }
}

// Función para jugar y registrar puntajes
void jugarPartida(struct Jugador jugadores[], int numJugadores) {
    // Recorrer todas las rondas
    for (int ronda = 0; ronda < RONDAS; ronda++) {
        printf("\n--- RONDA %d ---\n", ronda + 1);
        for (int i = 0; i < numJugadores; i++) {
            printf("%s, introduce tus puntos en esta ronda: ", jugadores[i].nombre);
            scanf("%d", &jugadores[i].puntajes[ronda]); // Guardar puntaje de la ronda
            jugadores[i].totalPuntos += jugadores[i].puntajes[ronda]; // Acumular puntaje total
        }
    }
}

// Función para mostrar los puntajes finales de todos los jugadores
void mostrarResultados(struct Jugador jugadores[], int numJugadores) {
    printf("\n--- RESULTADOS FINALES ---\n");
    for (int i = 0; i < numJugadores; i++) {
        printf("Jugador: %s, Puntaje Total: %d\n", jugadores[i].nombre, jugadores[i].totalPuntos);
    }
}

// Función para determinar el ganador
void determinarGanador(struct Jugador jugadores[], int numJugadores) {
    int maxPuntos = 0;
    char ganador[50];

    for (int i = 0; i < numJugadores; i++) {
        if (jugadores[i].totalPuntos > maxPuntos) {
            maxPuntos = jugadores[i].totalPuntos;
            strcpy(ganador, jugadores[i].nombre);
        }
    }

    printf("\n¡El ganador es %s con %d puntos!\n", ganador, maxPuntos);
}

int main() {
    int numJugadores;

    // Pedir la cantidad de jugadores
    printf("Introduce el número de jugadores (máximo %d): ", MAX_JUGADORES);
    scanf("%d", &numJugadores);

    // Validar que el número de jugadores esté en el rango permitido
    if (numJugadores < 1 || numJugadores > MAX_JUGADORES) {
        printf("Número de jugadores inválido. Debe estar entre 1 y %d.\n", MAX_JUGADORES);
        return 1; // Salir con error
    }

    // Declarar un array de jugadores
    struct Jugador jugadores[MAX_JUGADORES];

    // Registrar jugadores
    registrarJugadores(jugadores, numJugadores);

    // Jugar la partida
    jugarPartida(jugadores, numJugadores);

    // Mostrar resultados
    mostrarResultados(jugadores, numJugadores);

    // Determinar y anunciar el ganador
    determinarGanador(jugadores, numJugadores);

    return 0;
}
