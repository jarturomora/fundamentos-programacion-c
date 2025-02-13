#include <stdio.h>

// Función para sumar dos números
void suma(int a, int b, int *res) {
    *res = a + b;
}

// Función para restar dos números
int resta(int a, int b) {
    return a - b;
}

// Función para multiplicar dos números
int multiplicacion(int a, int b) {
    return a * b;
}

// Función para dividir dos números
int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: División por cero no permitida.\n");
        return 0; // Retornar un valor por defecto
    }
}

int main() {
    int num1, num2, resultado=0;
    char operacion;

    // Solicitar al usuario los dos números
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    // Solicitar al usuario la operación
    printf("Introduce la operación (+, -, *, /): ");
    scanf(" %c", &operacion); // Espacio antes del %c para ignorar caracteres previos

    // Llamar a la función correspondiente según la operación
    if (operacion == '+') {
        suma(num1, num2, &resultado);
        printf("El resultado de %d + %d es: %d\n", num1, num2, resultado);
    } else if (operacion == '-') {
        resultado = resta(num1, num2);
        printf("El resultado de %d - %d es: %d\n", num1, num2, resultado);
    } else if (operacion == '*') {
        resultado = multiplicacion(num1, num2);
        printf("El resultado de %d * %d es: %d\n", num1, num2, resultado);
    } else if (operacion == '/') {
        resultado = division(num1, num2);
        if (num2 != 0) {
            printf("El resultado de %d / %d es: %d\n", num1, num2, resultado);
        }
    } else {
        printf("Operación no válida.\n");
    }

    return 0;
}
