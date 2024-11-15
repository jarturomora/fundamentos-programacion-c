#include <stdio.h>

int main() {
    int low = 1, high = 100, guess;
    char response;

    printf("Piensa en un número entre 1 y 100. Voy a adivinarlo.\n");
    printf("Responde con 'm' si mi número es más pequeño, 'M' si es más grande, y 'c' si lo he adivinado.\n");

    while (low <= high) {
        guess = (low + high) / 2;
        printf("¿Es tu número %d? ", guess);
        scanf(" %c", &response);  // Espacio inicial para ignorar caracteres previos

        if (response == 'c') {
            printf("¡Genial! He adivinado tu número.\n");
            break;
        } else if (response == 'M') {
            low = guess + 1;
        } else if (response == 'm') {
            high = guess - 1;
        } else {
            printf("Respuesta no válida. Por favor, responde con 'm', 'M' o 'c'.\n");
        }
    }

    return 0;
}
