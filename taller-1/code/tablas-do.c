#include <stdio.h>

int main() {
    int numero, i = 1;

    // Solicitar al usuario que ingrese un número para generar su tabla de multiplicar
    printf("Introduce un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);

    // Generar y mostrar la tabla de multiplicar usando un bucle do-while
    printf("Tabla de multiplicar del %d:\n", numero);
    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10);

    return 0;
}
