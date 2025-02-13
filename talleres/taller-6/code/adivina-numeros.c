#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definición de constantes
#define NUM_ELEMENTOS 20
#define INTENTOS_MAX 3
#define LIMITE_SUPERIOR 50
#define LIMITE_INFERIOR 1

// Función para generar números aleatorios
void generarNumeros(int numeros[]) {
    srand(time(NULL)); // Inicializar la semilla de números aleatorios
    for (int i = 0; i < NUM_ELEMENTOS; i++) {
        numeros[i] = (rand() % LIMITE_SUPERIOR) + LIMITE_INFERIOR;
    }
}

// Función para encontrar el número mayor en la lista
int encontrarMayor(int numeros[]) {
    int mayor = numeros[0];
    for (int i = 1; i < NUM_ELEMENTOS; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}

// Función para encontrar el número menor en la lista
int encontrarMenor(int numeros[]) {
    int menor = numeros[0];
    for (int i = 1; i < NUM_ELEMENTOS; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}

// Función principal del juego
void jugar() {
    int numeros[NUM_ELEMENTOS];
    int numeroCorrecto, intento, eleccion;
    char continuar;

    do {
        // Generar lista de números
        generarNumeros(numeros);

        // Mostrar los números generados
        printf("\nNúmeros generados: ");
        for (int i = 0; i < NUM_ELEMENTOS; i++) {
            printf("%d ", numeros[i]);
        }
        printf("\n");

        // Preguntar al jugador qué quiere adivinar
        printf("¿Quieres adivinar el número mayor (1) o el número menor (2)? ");
        scanf("%d", &eleccion);

        if (eleccion == 1) {
            numeroCorrecto = encontrarMayor(numeros);
        } else if (eleccion == 2) {
            numeroCorrecto = encontrarMenor(numeros);
        } else {
            printf("Opción no válida. Inténtalo de nuevo.\n");
            continue;
        }

        // Intentos del jugador
        int intentos = 0;
        int acierto = 0;
        while (intentos < INTENTOS_MAX) {
            printf("Intento %d/%d: Introduce tu número: ", intentos + 1, INTENTOS_MAX);
            scanf("%d", &intento);

            if (intento == numeroCorrecto) {
                printf("¡Correcto! Has adivinado el número.\n");
                acierto = 1;
                break;
            } else {
                printf("Incorrecto. ");
                if (intento < numeroCorrecto) {
                    printf("El número correcto es mayor.\n");
                } else {
                    printf("El número correcto es menor.\n");
                }
            }
            intentos++;
        }

        // Si no acierta, revelar la respuesta
        if (!acierto) {
            printf("Lo siento, no acertaste. El número correcto era %d.\n", numeroCorrecto);
        }

        // Preguntar si quiere jugar de nuevo
        printf("¿Quieres jugar otra vez? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Gracias por jugar. ¡Hasta la próxima!\n");
}

int main() {
    printf("Bienvenido al juego 'Adivina el Número Mayor o Menor'.\n");
    jugar();
    return 0;
}
