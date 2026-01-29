# Soluciones a los Ejercicios de Programación en C

## Ejercicio 1: Cálculo del promedio de tres números

    #include <stdio.h>

    int main() {
        float num1, num2, num3, promedio;
        printf("Ingrese tres números: ");
        scanf("%f %f %f", &num1, &num2, &num3);
        promedio = (num1 + num2 + num3) / 3;
        printf("El promedio es: %.2f", promedio);
        return 0;
    }
            
## Ejercicio 2: Determinar si un número es par o impar

    #include <stdio.h>

    int main() {
        int num;
        printf("Ingrese un número: ");
        scanf("%d", &num);
        if (num % 2 == 0)
            printf("El número %d es par.", num);
        else
            printf("El número %d es impar.", num);
        return 0;
    }
            
## Ejercicio 3: Tabla de multiplicar

    #include <stdio.h>

    int main() {
        int num;
        printf("Ingrese un número: ");
        scanf("%d", &num);
        for (int i = 1; i <= 10; i++)
            printf("%d x %d = %d\n", num, i, num * i);
        return 0;
    }
            
## Ejercicio 4: Contar vocales en una cadena

    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>

    int main() {
        char palabra[100];
        int contador = 0;
        printf("Ingrese una palabra: ");
        scanf("%s", palabra);
        
        for (int i = 0; palabra[i] != '\\0'; i++) {
            char c = tolower(palabra[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                contador++;
        }
        
        printf("Número de vocales: %d", contador);
        return 0;
    }

## Ejercicio 5: Juego de Piedra, Papel o Tijera

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    int main() {
        int usuario, computadora;
        srand(time(NULL));
        computadora = rand() % 3 + 1;

        printf("Elige una opción:\n1. Piedra\n2. Papel\n3. Tijera\n");
        scanf("%d", &usuario);

        printf("La computadora eligió: %d\n", computadora);

        if (usuario == computadora)
            printf("Empate.\n");
        else if ((usuario == 1 && computadora == 3) || (usuario == 2 && computadora == 1) || (usuario == 3 && computadora == 2))
            printf("¡Ganaste!\n");
        else
            printf("Perdiste.\n");

        return 0;
    }
