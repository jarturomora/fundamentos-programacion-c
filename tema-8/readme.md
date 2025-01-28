# Tema 8: Recursividad

## ¿Qué es la Recursividad?

La recursividad es una técnica de programación donde una función se llama a sí misma para resolver un problema. Es útil para resolver problemas que pueden dividirse en subproblemas más pequeños y similares al problema original.

### Cómo Funciona la Recursividad

La recursividad se puede entender de la siguiente manera cuando una función se llama a sí misma:

* Caso Base: Es la condición que detiene las llamadas recursivas. Sin él, la recursión no terminaría (causando un "bucle infinito").

* Caso Recursivo: La función se llama a sí misma con un subconjunto más pequeño del problema original.

## Iteración vs. Recursividad

Un ejemplo clásico es el cálculo del factorial de un número. El factorial de un número n se define como:

```text
n! = n * (n - 1) * (n - 2) * ... * 1
```

Por ejemplo, `5! = 5 * 4 * 3 * 2 * 1 = 120`.

### Código Iterativo

Primero, implementamos el cálculo del factorial de forma iterativa:

```c
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
```

### Código Recursivo

Ahora, convertimos la función iterativa en una función recursiva:

```c
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
```

En la pila de llamadas, esta función se vería así:

```text
factorial_recursivo(5)  = 5 * factorial_recursivo(4)
                        = 5 * 4 * factorial_recursivo(3)
                        = 5 * 4 * 3 * factorial_recursivo(2)
                        = 5 * 4 * 3 * 2 * factorial_recursivo(1)
                        = 5 * 4 * 3 * 2 * 1
                        = 120

```

## Diferencias Clave entre Iteración y Recursividad

| Iteración                                     | Recursividad                                                               |
|-----------------------------------------------|----------------------------------------------------------------------------|
| Utiliza bucles (for, while) para repetir.     | Una función se llama a sí misma repetidamente.                             |
| Consume menos memoria.                        | Puede consumir más memoria debido a la pila de llamadas.                   |
| Más fácil de entender para principiantes.     | Puede ser más compleja para problemas grandes.                             |
| Puede ser más eficiente en problemas simples. | Útil para problemas naturalmente recursivos (como árboles, combinaciones). |
