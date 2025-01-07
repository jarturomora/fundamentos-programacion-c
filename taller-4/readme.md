# Taller 4: Juego de Dados entre Dos Jugadores

## Descripción del Ejercicio

En este ejercicio, implementarás un juego de dados para dos jugadores en el lenguaje de programación C. El objetivo del juego es sumar puntos en rondas consecutivas tirando dados de 6 o 12 caras, y determinar quién tiene el puntaje más alto al finalizar el juego.

## Requisitos del Programa

1. Estructura del Juego:

    * Crear un programa que permita registrar los nombres de dos jugadores.
    * Los jugadores eligen si quieren jugar con dados de 6 o 12 caras.

2. Turnos de Juego:

    * Cada jugador tira el dado por turnos.
    * El programa genera un número aleatorio en el rango del dado seleccionado.
    * Los puntos obtenidos en cada tirada se suman al puntaje acumulado del jugador.

3. Mostrar Resultados por Ronda:

    * Después de que ambos jugadores tiren el dado, se debe mostrar quién ganó la ronda y los puntajes acumulados hasta ese momento.

4. Continuar o Finalizar:

    * Al final de cada ronda, se debe preguntar si desean continuar jugando.
    * Si deciden terminar el juego, se debe mostrar el marcador final y anunciar al ganador.

5. Estructuras de Datos:

    * Los datos de los jugadores (nombre y puntaje acumulado) deben implementarse usando un struct.
    * Utilizar punteros para gestionar los puntajes acumulados dinámicamente.

## Puntos Clave del Ejercicio

* Entrada de Datos:
  * Pedir al usuario los nombres de los jugadores.
  * Permitir elegir entre dados de 6 o 12 caras.
* Uso de Números Aleatorios:
  * Utilizar la función rand() para generar tiradas aleatorias de los dados.
* Turnos y Lógica de Juego:
  * Implementar un sistema por turnos que compare las tiradas de ambos jugadores y declare al ganador de cada ronda.
* Estructuras de Datos:
  * Usar un struct para almacenar los nombres y puntajes de los jugadores.
  * Actualizar dinámicamente los puntajes usando punteros.
* Mensajes Claros:
  * Mostrar mensajes informativos al jugador sobre el progreso del juego y los resultados.

## Criterios de Evaluación

| **Criterio**                                      | **Ponderación** | **Descripción**                                                                                     |
|---------------------------------------------------|-----------------|-----------------------------------------------------------------------------------------------------|
| **1. Registro de jugadores**                     | 2 puntos        | - El programa solicita y almacena correctamente los nombres de los jugadores.                      |
| **2. Generación de tiradas aleatorias**          | 2 puntos        | - Se implementa correctamente la función para generar tiradas aleatorias en el rango esperado.      |
| **3. Gestión de turnos y puntuación**            | 2 puntos        | - El programa alterna turnos y actualiza los puntajes acumulados de ambos jugadores.               |
| **4. Mensajes informativos**                     | 2 puntos        | - Los mensajes en pantalla son claros, mostrando los resultados de cada ronda y los puntajes.       |
| **5. Marcador final y ganador**                  | 2 puntos        | - Al finalizar el juego, se muestra el marcador y se declara correctamente al ganador.             |

---

**Total: 10 puntos**
