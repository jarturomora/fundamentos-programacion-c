#include <stdio.h>

int main() {
    // Declarar variable para guardar el número de la tabla que se quiere imprimir.
    int numero;

    // Solicitar al usuario que ingrese un número para generar su tabla de multiplicar
    printf("Introduce un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);

    // Generar y mostrar la tabla de multiplicar usando un bucle for
    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {

        printf("%d x %d = %d\n", numero, i, numero * i);

    }

    return 0;
}
