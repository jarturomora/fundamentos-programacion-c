#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura del jugador
struct Jugador {
    int id;             // ID del jugador (posición en el fichero)
    char nombre[50];
    int nivel;
    int puntos;
};

// Función para mostrar todos los jugadores desde un fichero binario
void mostrarJugadores(const char *fichero) {
    FILE *file = fopen(fichero, "rb");
    if (file == NULL) {
        perror("Error al abrir el fichero para lectura");
        return;
    }

    struct Jugador jugador;
    printf("\nLista de jugadores:\n");
    while (fread(&jugador, sizeof(struct Jugador), 1, file)) {
        printf("ID: %d, Nombre: %s, Nivel: %d, Puntos: %d\n",
               jugador.id, jugador.nombre, jugador.nivel, jugador.puntos);
    }
    fclose(file);
}

// Función para actualizar un jugador directamente en el fichero
void actualizarJugadorPorID(const char *fichero, int id, int nuevoNivel, int nuevosPuntos) {
    FILE *file = fopen(fichero, "rb+"); // Abrir en modo lectura/escritura binaria
    if (file == NULL) {
        perror("Error al abrir el fichero");
        return;
    }

    // Calcular la posición del jugador en el fichero
    long offset = id * sizeof(struct Jugador);

    // Mover el puntero del fichero a la posición deseada
    if (fseek(file, offset, SEEK_SET) != 0) {
        perror("Error al mover el puntero del fichero");
        fclose(file);
        return;
    }

    // Leer el jugador en la posición indicada
    struct Jugador jugador;
    if (fread(&jugador, sizeof(struct Jugador), 1, file) != 1) {
        perror("Error al leer el jugador del fichero");
        fclose(file);
        return;
    }

    // Actualizar los datos del jugador
    jugador.nivel = nuevoNivel;
    jugador.puntos = nuevosPuntos;

    // Mover el puntero del fichero de nuevo a la posición del jugador
    if (fseek(file, offset, SEEK_SET) != 0) {
        perror("Error al mover el puntero del fichero");
        fclose(file);
        return;
    }

    // Escribir los datos actualizados en el fichero
    if (fwrite(&jugador, sizeof(struct Jugador), 1, file) != 1) {
        perror("Error al escribir los datos actualizados");
    } else {
        printf("\nJugador con ID %d actualizado correctamente.\n", id);
    }

    fclose(file);
}

int main() {
    const char *fichero = "ficheros\\jugadores.dat";

    // Datos iniciales de prueba
    struct Jugador jugadores[] = {
        {0, "Juan", 5, 1200},
        {1, "Ana", 3, 800},
        {2, "Luis", 7, 1500},
        {3, "María", 2, 600},
        {4, "Carlos", 4, 1000}
    };
    int numJugadores = sizeof(jugadores) / sizeof(jugadores[0]);

    // Guardar los datos iniciales en el fichero
    FILE *file = fopen(fichero, "wb");
    if (file == NULL) {
        perror("Error al abrir el fichero para escritura");
        return 1;
    }
    fwrite(jugadores, sizeof(struct Jugador), numJugadores, file);
    fclose(file);

    printf("Datos iniciales guardados en '%s'.\n", fichero);

    // Mostrar jugadores antes de la actualización
    printf("\n--- Jugadores antes de la actualización ---\n");
    mostrarJugadores(fichero);

    // Actualizar los datos de un jugador por su ID
    actualizarJugadorPorID(fichero, 1, 4, 1000); // Actualizar al jugador con ID 1 (Ana)

    // Mostrar jugadores después de la actualización
    printf("\n--- Jugadores después de la actualización ---\n");
    mostrarJugadores(fichero);

    return 0;
}
