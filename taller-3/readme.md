# Taller 3: Juego de Adivina Palabra

## Descripción del Juego

El juego es una adaptación del clásico "Adivina la Palabra". Los jugadores deben descubrir el nombre de un animal seleccionando letras o adivinando directamente la palabra completa. Al inicio, el programa selecciona al azar un nombre de animal de una lista. La palabra se presenta enmascarada, mostrando únicamente la primera y la última letra, mientras las demás letras están ocultas con asteriscos (`*`).

Cada jugador tiene un máximo de 3 intentos para adivinar la palabra. Pueden introducir una letra para intentar descubrir parte de la palabra o arriesgarse a escribir la palabra completa. Según el intento en el que acierten, reciben puntos:

* 10 puntos si aciertan en el primer intento.

* 5 puntos si aciertan en el segundo intento.

* 2 puntos si aciertan en el tercero.

El juego también permite la participación de múltiples jugadores. Al finalizar el turno de cada jugador, se muestran los puntajes acumulados de todos los jugadores, y el programa pregunta si se quiere añadir un nuevo jugador o terminar el juego.

### Objetivos Didácticos

El juego tiene varios propósitos educativos para principiantes en programación:

1. Familiarizarse con arrays:

    * Se utiliza un array de cadenas para almacenar una lista de palabras (nombres de animales).

    * El uso de arrays ayuda a entender cómo se almacenan y acceden datos estructurados.

2. Comprender el uso de punteros:

   * Los punteros se utilizan para gestionar dinámicamente la lista de jugadores, mostrando cómo gestionar la memoria en tiempo de ejecución.

3. Introducción a la manipulación de cadenas:

    * Se emplean funciones como `strlen` y `strcmp` para trabajar con cadenas.
    * Se enmascara la palabra con un bucle y se valida la entrada del usuario, lo que refuerza la lógica sobre el manejo de caracteres y cadenas.

4. Estructuras dinámicas:

    * Se usa `realloc` para añadir jugadores a una lista dinámica, enseñando cómo gestionar estructuras de datos que crecen según las necesidades del programa.

5. Uso de funciones modulares:

    * El programa está dividido en funciones específicas para manejar tareas como enmascarar la palabra, calcular puntos y mostrar resultados. Esto enseña la importancia de dividir problemas en subproblemas más pequeños.

6. Práctica con condicionales y bucles:

    * Los condicionales (`if`, `else`) y los bucles (`for`, `while`) son fundamentales en el juego, lo que permite reforzar su comprensión.

7. Interacción con el usuario:

    * Los jugadores interactúan ingresando letras o palabras completas, permitiendo practicar el manejo de entrada y salida en C.

## Contenido

* [adivina-palabra.c](code/adivina-palabra.c): Código en lenguaje C que implementa el juego.
