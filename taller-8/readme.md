# Ejercicio tipo examen: Juego de Registro de Puntos de una Partida de Bolos

## Objetivo

Diseñar un programa que registre los puntajes de varios jugadores en una partida de bolos. Cada
jugador tiene 10 rondas para intentar conseguir la mayor puntuación posible. El programa debe permitir:

1. Registrar los nombres de los jugadores.
2. Registrar los puntos obtenidos en cada ronda.
3. Mostrar el puntaje total de cada jugador al final de la partida.
4. Indicar quién ganó la partida.

## Requisitos del Programa

1. Estructura de datos: Utilizar un struct para representar a un jugador, incluyendo su nombre, los puntos por ronda
(array de 10 enteros) y el puntaje total.

2. Lecturas por teclado: Permitir al usuario ingresar el nombre de cada jugador y los puntos obtenidos en cada una de las
10 rondas.

3. Cálculo del puntaje total: Almacenar los puntajes de cada ronda y calcular el puntaje total acumulado para cada jugador.

4. Mostrar resultados: Mostrar una tabla con el nombre del jugador, sus puntajes por ronda y su puntaje total.
Indicar el jugador con el mayor puntaje al final.

5. Bucle y mensajes: Utilizar bucles para gestionar la entrada de datos y procesar múltiples jugadores.

## Rúbrica

| Criterio                              | Ponderación | Descripción                                                                                       |
|---------------------------------------|-------------|---------------------------------------------------------------------------------------------------|
| 1. Declaración y uso de structs       | 2 puntos    | - Se utiliza correctamente un struct para representar al jugador.                                 |
|                                       |             | - Incluye el nombre, los puntajes por ronda y el puntaje total.                                   |
| 2. Entrada de datos por teclado       | 2 puntos    | - El programa solicita el nombre de los jugadores.                                                |
|                                       |             | - El programa permite ingresar los puntajes de las 10 rondas para cada jugador.                   |
| 3. Cálculo correcto del puntaje total | 2 puntos    | - El puntaje total de cada jugador se calcula correctamente sumando las 10 rondas.                |
| 4. Visualización de resultados        | 2 puntos    | - El programa muestra los nombres, puntajes por ronda y el total en una tabla clara y organizada. |
|                                       |             | - Indica correctamente el jugador ganador.                                                        |
| 5. Uso de bucles y modularidad        | 2 puntos    | - Se utiliza al menos un bucle para registrar puntajes de múltiples jugadores.                    |
|                                       |             | - Opcional: El código incluye funciones para encapsular la lógica principal.                      |
