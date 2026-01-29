#include <stdio.h>

// Función recursiva para calcular el factorial
int factorial_recursivo(int n) {
    return n * factorial_recursivo(n - 1);
}

int main() {
    int numero;
    printf("Introduce un número para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        printf("El factorial de %d es: %d (Recursivo)\n", numero, factorial_recursivo(numero));
    }

    return 0;
}