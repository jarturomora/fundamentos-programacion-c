#include <stdio.h>

int main() {
    int numero, i = 1;

    // Solicitar al usuario que ingrese un número para generar su tabla de multiplicar
    printf("Introduce un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);

    // Generar y mostrar la tabla de multiplicar usando un bucle while
    printf("Tabla de multiplicar del %d:\n", numero);
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}
