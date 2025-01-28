#include <stdio.h>

// Función iterativa para calcular el factorial
int factorial_iterativo(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    printf("Introduce un número para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        printf("El factorial de %d es: %d (Iterativo)\n", numero, factorial_iterativo(numero));
    }

    return 0;
}