#include <stdio.h>

int main() {
    // Se declara el array tridimensional
    int m[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Bucle for para recorrer la primera dimensión
    for (int i = 0; i < 2; i++) {
        printf("Capa %d:\n", i + 1);
        // Bucle for para recorrer la segunda dimensión
        for (int j = 0; j < 3; j++) {
            // Bucle for para recorrer la tercera dimensión
            for (int k = 0; k < 4; k++) {
                printf("%d ", m[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
