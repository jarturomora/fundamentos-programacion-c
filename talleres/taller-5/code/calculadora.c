/**
 * @file calculadora.c
 * @brief Implementación de una calculadora en C que soporta suma, resta, multiplicación, división y potencias.
 * @author J. Arturo Mora Soto
 * @date 2025-01-22
 * 
 * Este programa permite realizar operaciones matemáticas básicas entre dos números, solicitando al usuario la operación deseada.
 */

#include <stdio.h>
#include <math.h> // Incluir la biblioteca para funciones matemáticas

/**
 * @brief Realiza la suma de dos números enteros.
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * @return La suma de los dos números.
 */
int suma(int a, int b) {
    return a + b;
}

/**
 * @brief Realiza la resta de dos números enteros.
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * @return La diferencia entre los dos números.
 */
int resta(int a, int b) {
    return a - b;
}

/**
 * @brief Realiza la multiplicación de dos números enteros.
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * @return El producto de los dos números.
 */
int multiplicacion(int a, int b) {
    return a * b;
}

/**
 * @brief Realiza la división de dos números enteros.
 * @param a Dividendo.
 * @param b Divisor.
 * @return El cociente de la división si el divisor no es 0. En caso de división por 0, retorna 0.
 * @note Si b es 0, se muestra un mensaje de error.
 */
int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: División por cero no permitida.\n");
        return 0; // Retornar un valor por defecto
    }
}

/**
 * @brief Calcula la potencia de un número.
 * @param base Base de la potencia.
 * @param exponente Exponente al que se eleva la base.
 * @return El resultado de base elevado a exponente.
 * @note Usa la función pow de la biblioteca math.h.
 */
double potencia(double base, double exponente) {
    return pow(base, exponente);
}

/**
 * @brief Función principal del programa.
 * 
 * Solicita dos números y una operación al usuario. Realiza la operación deseada llamando a la función correspondiente
 * y muestra el resultado en pantalla.
 * 
 * @return 0 si el programa finaliza correctamente.
 */
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
