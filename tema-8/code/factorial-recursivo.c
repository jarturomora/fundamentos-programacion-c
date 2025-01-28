#include <stdio.h>

// Función recursiva para calcular el factorial
int factorial_recursivo(int n) {
    if (n == 0 || n == 1) {
        // Caso Base: el factorial de 0 o 1 es 1
        return 1;
    } else {
        // Caso Recursivo: n! = n * (n - 1)!
        return n * factorial_recursivo(n - 1);
    }
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