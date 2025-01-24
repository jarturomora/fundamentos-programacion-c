#include <stdio.h>
#include <stdlib.h>

int main() {
    char nombre_fichero[256];
    char buffer[256];
    FILE *fichero;

    // Pedir al usuario el nombre del fichero
    printf("Introduce el nombre del fichero: ");
    scanf("%255s", nombre_fichero); // Limitar el tamaño para evitar desbordamientos

    // Intentar abrir el fichero en modo lectura para comprobar si existe
    fichero = fopen(nombre_fichero, "r");
    if (fichero == NULL) {
        // Si el fichero no existe, crearlo y añadir un párrafo de El Quijote
        fichero = fopen(nombre_fichero, "w");
        if (fichero == NULL) {
            perror("Error al crear el fichero");
            return 1;
        }
        fprintf(fichero, "En un lugar de la Mancha, de cuyo nombre no quiero acordarme,\n");
        fprintf(fichero, "no ha mucho tiempo que vivía un hidalgo de los de lanza en astillero, adarga antigua, rocín flaco y galgo corredor. "
                         "Una olla de algo más vaca que carnero, salpicón las más noches, duelos y quebrantos los sábados, "
                         "lentejas los viernes, algún palomino de añadidura los domingos, consumían las tres partes de su hacienda.\n");
        printf("El fichero no existía y se ha creado con el contenido inicial.\n");
    } else {
        // Si el fichero existe, cerrarlo y reabrirlo en modo append para añadir contenido
        fclose(fichero);
        fichero = fopen(nombre_fichero, "a");
        if (fichero == NULL) {
            perror("Error al abrir el fichero en modo append");
            return 1;
        }
        fprintf(fichero, "\nPero no por eso dejaba de ser un hidalgo con mucha dignidad. "
                         "Siempre dispuesto a defender su honor y el de su imaginaria dama, "
                         "salía con entusiasmo al campo a enfrentarse con molinos, gigantes o lo que su mente creara.\n");
        printf("El fichero ya existía y se ha añadido un nuevo párrafo.\n");
    }

    // Cerrar el fichero después de escribir
    fclose(fichero);

    // Leer y mostrar el contenido del fichero actualizado
    fichero = fopen(nombre_fichero, "r");
    if (fichero == NULL) {
        perror("Error al abrir el fichero para lectura");
        return 1;
    }

    printf("\nContenido del fichero '%s':\n", nombre_fichero);
    while (fgets(buffer, sizeof(buffer), fichero) != NULL) {
        printf("%s", buffer); // Mostrar cada línea del fichero
    }

    // Cerrar el fichero después de leer
    fclose(fichero);

    return 0;
}
