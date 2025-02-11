#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definir el número de países y intentos
#define NUM_PAISES 10
#define INTENTOS_MAX 3

// Estructura para almacenar países y capitales
struct Pais {
    char nombre[50];
    char capital[50];
};

// Lista de países y capitales
struct Pais paises[NUM_PAISES] = {
    {"España", "Madrid"},
    {"Francia", "París"},
    {"Italia", "Roma"},
    {"Alemania", "Berlín"},
    {"Argentina", "Buenos Aires"},
    {"Brasil", "Brasilia"},
    {"México", "Ciudad de México"},
    {"Japón", "Tokio"},
    {"Portugal", "Lisboa"},
    {"Estados Unidos", "Washington"}
};

// Función para jugar
void jugar() {
    char respuesta[50];
    char continuar[10]; // Buffer más grande para evitar problemas de entrada
    int intentos;
    int puntos = 0; // Puntos acumulados del jugador

    srand(time(NULL)); // Inicializar la semilla de números aleatorios

    do {
        // Seleccionar un país aleatorio
        int indice = rand() % NUM_PAISES;
        struct Pais elegido = paises[indice];

        printf("\nAdivina la capital de: %s\n", elegido.nombre);

        // Intentos del jugador
        intentos = 0;
        int acierto = 0;
        while (intentos < INTENTOS_MAX) {
            printf("Intento %d/%d: ", intentos + 1, INTENTOS_MAX);
            fgets(respuesta, sizeof(respuesta), stdin);

            // Eliminar el salto de línea del buffer
            respuesta[strcspn(respuesta, "\n")] = 0;

            // Comparar ignorando mayúsculas y minúsculas
            if (strcasecmp(respuesta, elegido.capital) == 0) {
                printf("¡Correcto! La capital de %s es %s.\n", elegido.nombre, elegido.capital);
                
                // Asignar puntos según el intento
                if (intentos == 0) {
                    puntos += 10;
                } else if (intentos == 1) {
                    puntos += 5;
                } else if (intentos == 2) {
                    puntos += 2;
                }

                acierto = 1;
                break;
            } else {
                printf("Incorrecto. Inténtalo de nuevo.\n");
            }

            intentos++;
        }

        // Si no acierta, revelar la respuesta y no sumar puntos
        if (!acierto) {
            printf("Lo siento, no acertaste. La capital de %s es %s.\n", elegido.nombre, elegido.capital);
        }

        // Mostrar puntaje acumulado
        printf("Puntos acumulados: %d\n", puntos);

        // Preguntar si quiere jugar de nuevo
        printf("¿Quieres jugar otra vez? (s/n): ");
        fgets(continuar, sizeof(continuar), stdin);
        continuar[strcspn(continuar, "\n")] = 0; // Eliminar salto de línea

    } while (strcasecmp(continuar, "s") == 0 || strcasecmp(continuar, "S") == 0);

    printf("\nJuego terminado. Puntuación final: %d puntos.\n", puntos);
    printf("Gracias por jugar. ¡Hasta la próxima!\n");
}

int main() {
    printf("Bienvenido al juego 'Adivina la Capital'.\n");
    jugar();
    return 0;
}
