#include <stdio.h>

int main() {
    // Nombre del archivo
    const char *nombre_fichero = "ficheros\\el_quijote.txt";

    // 1. Crear y abrir el fichero en modo escritura
    FILE *fichero = fopen(nombre_fichero, "w");
    if (fichero == NULL) {
        perror("Error al crear el fichero");
        return 1;
    }

    // 2. Escribir una línea de texto
    fprintf(fichero, "En un lugar de la Mancha, de cuyo nombre no quiero acordarme,\n");

    // 3. Escribir un párrafo de texto
    fprintf(fichero, "no ha mucho tiempo que vivía un hidalgo de los de lanza en astillero, adarga antigua, rocín flaco y galgo corredor. "
                     "Una olla de algo más vaca que carnero, salpicón las más noches, duelos y quebrantos los sábados, "
                     "lentejas los viernes, algún palomino de añadidura los domingos, consumían las tres partes de su hacienda.\n");

    // Cerrar el fichero después de escribir
    fclose(fichero);

    // 4. Reabrir el fichero en modo lectura
    fichero = fopen(nombre_fichero, "r");
    if (fichero == NULL) {
        perror("Error al abrir el fichero para lectura");
        return 1;
    }

    // 5. Leer y mostrar el contenido del fichero
    printf("Contenido del fichero '%s':\n", nombre_fichero);
    char linea[256]; //buffer para almacenar cada línea
    while (fgets(linea, sizeof(linea), fichero) != NULL) {
        printf("%s", linea); // Mostrar cada línea en pantalla
    }

    // Cerrar el fichero después de leer
    fclose(fichero);

    return 0;
}
