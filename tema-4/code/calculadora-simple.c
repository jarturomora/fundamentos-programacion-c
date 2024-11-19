#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char operacion;

    // Solicitar al usuario los dos números
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    // Solicitar al usuario la operación
    printf("Introduce la operación (+, -, *, /): ");
    scanf(" %c", &operacion); // Espacio antes del %c para ignorar caracteres previos

    // Realizar la operación según el símbolo ingresado
    if (operacion == '+') {
        resultado = num1 + num2;
        printf("El resultado de %d + %d es: %d\n", num1, num2, resultado);
    } else if (operacion == '-') {
        resultado = num1 - num2;
        printf("El resultado de %d - %d es: %d\n", num1, num2, resultado);
    } else if (operacion == '*') {
        resultado = num1 * num2;
        printf("El resultado de %d * %d es: %d\n", num1, num2, resultado);
    } else if (operacion == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("El resultado de %d / %d es: %d\n", num1, num2, resultado);
        } else {
            printf("Error: División por cero no permitida.\n");
        }
    } else {
        printf("Operación no válida.\n");
    }

    return 0;
}
