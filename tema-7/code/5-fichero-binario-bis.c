#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura del jugador
struct Jugador {
    char nombre[50];
    int nivel;
    int puntos;
};

int main() {
    // Definir un array de jugadores con datos arbitrarios
    struct Jugador jugadores[] = {
        {"Juan", 5, 1200},
        {"Ana", 3, 800},
        {"Luis", 7, 1500},
        {"María", 2, 600},
        {"Carlos", 4, 1000}
    };
    int numJugadores = sizeof(jugadores) / sizeof(jugadores[0]); // Número de jugadores en el array

    // Guardar el array de jugadores en un fichero binario
    FILE *fichero = fopen("ficheros\\jugadores.dat", "wb");
    if (fichero == NULL) {
        perror("Error al abrir el fichero para escritura");
        return 1;
    }
    fwrite(jugadores, sizeof(struct Jugador), numJugadores, fichero);
    fclose(fichero);
    printf("Datos de %d jugadores guardados correctamente en 'jugadores.dat'.\n", numJugadores);

    // Leer los datos desde el fichero binario
    struct Jugador jugadoresLeidos[numJugadores];
    fichero = fopen("ficheros\\jugadores.dat", "rb");
    if (fichero == NULL) {
        perror("Error al abrir el fichero para lectura");
        return 1;
    }
    fread(jugadoresLeidos, sizeof(struct Jugador), numJugadores, fichero);
    fclose(fichero);

    // Mostrar los datos leídos en pantalla
    printf("\nDatos de los jugadores leídos desde el fichero:\n");
    for (int i = 0; i < numJugadores; i++) {
        printf("Jugador %d:\n", i + 1);
        printf("  Nombre: %s\n", jugadoresLeidos[i].nombre);
        printf("  Nivel: %d\n", jugadoresLeidos[i].nivel);
        printf("  Puntos: %d\n\n", jugadoresLeidos[i].puntos);
    }

    return 0;
}
