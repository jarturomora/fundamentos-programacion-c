#include <stdio.h>
#include <math.h> // Incluir la biblioteca para funciones matemáticas

// Función para sumar dos números
int suma(int a, int b) {
    return a + b;
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

// Función para elevar un número a una potencia
double potencia(double base, double exponente) {
    return pow(base, exponente); // Usar la función pow de math.h
}

int main() {
    double num1, num2, resultado;
    char operacion;

    // Solicitar al usuario los dos números
    printf("Introduce el primer número: ");
    scanf("%lf", &num1);
    printf("Introduce el segundo número: ");
    scanf("%lf", &num2);

    // Solicitar al usuario la operación
    printf("Introduce la operación (+, -, *, /, ^ para potencia): ");
    scanf(" %c", &operacion); // Espacio antes del %c para ignorar caracteres previos

    // Llamar a la función correspondiente según la operación
    if (operacion == '+') {
        resultado = suma((int)num1, (int)num2);
        printf("El resultado de %.0lf + %.0lf es: %.0lf\n", num1, num2, resultado);
    } else if (operacion == '-') {
        resultado = resta((int)num1, (int)num2);
        printf("El resultado de %.0lf - %.0lf es: %.0lf\n", num1, num2, resultado);
    } else if (operacion == '*') {
        resultado = multiplicacion((int)num1, (int)num2);
        printf("El resultado de %.0lf * %.0lf es: %.0lf\n", num1, num2, resultado);
    } else if (operacion == '/') {
        resultado = division((int)num1, (int)num2);
        if ((int)num2 != 0) {
            printf("El resultado de %.0lf / %.0lf es: %.0lf\n", num1, num2, resultado);
        }
    } else if (operacion == '^') {
        resultado = potencia(num1, num2);
        printf("El resultado de %.2lf ^ %.2lf es: %.2lf\n", num1, num2, resultado);
    } else {
        printf("Operación no válida.\n");
    }

    return 0;
}
