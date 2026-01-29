#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura del jugador
struct Jugador {
    char nombre[50];
    int nivel;
    int puntos;
};

int main() {
    struct Jugador miJugador;

    // Solicitar los datos del jugador
    printf("Introduce el nombre del jugador: ");
    scanf("%49s", miJugador.nombre); // Limitar la entrada a 49 caracteres
    printf("Introduce el nivel del juego: ");
    scanf("%d", &miJugador.nivel);
    printf("Introduce los puntos del jugador: ");
    scanf("%d", &miJugador.puntos);

    // Guardar los datos en un fichero binario
    FILE *fichero = fopen("ficheros\\jugador.dat", "wb");
    if (fichero == NULL) {
        perror("Error al abrir el fichero para escritura");
        return 1;
    }
    fwrite(&miJugador, sizeof(struct Jugador), 1, fichero);
    fclose(fichero);
    printf("Datos del jugador guardados correctamente en 'jugador.dat'.\n");

    // Leer los datos desde el fichero binario
    struct Jugador jugadorLeido;
    fichero = fopen("ficheros\\jugador.dat", "rb");
    if (fichero == NULL) {
        perror("Error al abrir el fichero para lectura");
        return 1;
    }
    fread(&jugadorLeido, sizeof(struct Jugador), 1, fichero);
    fclose(fichero);

    // Mostrar los datos leídos en pantalla
    printf("\nDatos del jugador leídos desde el fichero:\n");
    printf("Nombre: %s\n", jugadorLeido.nombre);
    printf("Nivel: %d\n", jugadorLeido.nivel);
    printf("Puntos: %d\n", jugadorLeido.puntos);

    return 0;
}
