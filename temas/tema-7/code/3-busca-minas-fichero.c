#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Dimensiones del mapa
#define FILAS 5
#define COLUMNAS 5

// Nombre del fichero donde se guarda el mapa
#define FICHERO_MAPA "ficheros\\mapa_buscaminas.txt"

// Función para generar un mapa de minas aleatorio y guardarlo en un fichero
void generarMapaAleatorio(char mapa[FILAS][COLUMNAS], int numMinas) {
    // Inicializar el mapa con espacios en blanco
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            mapa[i][j] = '-';
        }
    }

    // Colocar minas aleatoriamente
    srand(time(NULL));
    int minasColocadas = 0;
    while (minasColocadas < numMinas) {
        int fila = rand() % FILAS;
        int columna = rand() % COLUMNAS;

        if (mapa[fila][columna] != '*') {
            mapa[fila][columna] = '*';
            minasColocadas++;
        }
    }

    // Guardar el mapa en un fichero
    FILE *fichero = fopen(FICHERO_MAPA, "w");
    if (fichero == NULL) {
        perror("Error al crear el fichero del mapa");
        exit(1);
    }

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            fprintf(fichero, "%c ", mapa[i][j]);
        }
        fprintf(fichero, "\n");
    }

    fclose(fichero);
    printf("Mapa generado y guardado en '%s'.\n", FICHERO_MAPA);
}

// Función para cargar el mapa desde el fichero
void cargarMapaDesdeFichero(char mapa[FILAS][COLUMNAS]) {
    FILE *fichero = fopen(FICHERO_MAPA, "r");
    if (fichero == NULL) {
        perror("Error al abrir el fichero del mapa");
        exit(1);
    }

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            fscanf(fichero, " %c", &mapa[i][j]);
        }
    }

    fclose(fichero);
}

// Función para imprimir el mapa actual (sin mostrar minas)
void imprimirMapa(char mapa[FILAS][COLUMNAS], bool mostrarMinas) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            // Si mostrarMinas es falso, reemplazar las minas con guiones
            if (!mostrarMinas && mapa[i][j] == '*') {
                printf("- ");
            } else {
                printf("%c ", mapa[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    char mapa[FILAS][COLUMNAS];
    int numMinas = 5; // Número de minas en el mapa

    // Generar un nuevo mapa de minas aleatorio y guardarlo en el fichero
    generarMapaAleatorio(mapa, numMinas);

    // Cargar el mapa desde el fichero
    cargarMapaDesdeFichero(mapa);

    // Contar cuántas minas hay en el mapa
    int totalMinas = numMinas;

    // Mostrar el número de minas al inicio
    printf("¡Bienvenido al Buscaminas!\n");
    printf("Hay %d minas en el mapa.\n", totalMinas);

    // Variable para llevar la cuenta de los espacios en blanco descubiertos
    int espaciosDescubiertos = 0;

    // Bucle del juego
    while (true) {
        // Imprimir el mapa actual (sin revelar minas)
        printf("\nMapa actual:\n");
        imprimirMapa(mapa, false);

        // Pedir al jugador que introduzca las coordenadas
        int fila, columna;
        printf("Introduce las coordenadas (fila y columna) de un espacio en blanco (0-%d): ", FILAS - 1);
        scanf("%d %d", &fila, &columna);

        // Validar coordenadas
        if (fila < 0 || fila >= FILAS || columna < 0 || columna >= COLUMNAS) {
            printf("Coordenadas fuera de rango. Intenta nuevamente.\n");
            continue;
        }

        // Verificar si el jugador ha encontrado una mina
        if (mapa[fila][columna] == '*') {
            printf("\n¡BOOM! Has encontrado una mina. ¡Perdiste!\n");
            printf("Mapa completo:\n");
            imprimirMapa(mapa, true); // Mostrar todas las minas
            break; // Salir del bucle
        }

        // Si no es una mina, marcar el espacio como descubierto
        mapa[fila][columna] = 'X'; // Marcar espacio descubierto
        espaciosDescubiertos++;

        // Verificar si el jugador ha descubierto todos los espacios en blanco
        if (espaciosDescubiertos == FILAS * COLUMNAS - totalMinas) {
            printf("\n¡Felicidades! Has descubierto todos los espacios en blanco sin encontrar minas.\n");
            printf("Mapa completo:\n");
            imprimirMapa(mapa, true); // Mostrar todas las minas
            break; // Salir del bucle
        }

        // Preguntar si desea continuar jugando
        char continuar;
        printf("¿Quieres seguir jugando? (s/n): ");
        scanf(" %c", &continuar); // Espacio antes del %c para limpiar el buffer
        if (continuar == 'n' || continuar == 'N') {
            printf("Gracias por jugar. ¡Hasta la próxima!\n");
            break; // Salir del bucle
        }
    }

    return 0;
}
