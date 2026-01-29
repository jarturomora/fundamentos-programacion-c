# Juego “Defensa del Castillo”

El jugador es el encargado de defender un castillo de varias oleadas de enemigos utilizando recursos limitados.

## **Descripción del Juego**

1. **Estado inicial del castillo**

   * El castillo comienza con **100 puntos de vida**.
   * El jugador dispone de **3 defensas**:

     * Muralla
     * Arqueros
     * Aceite hirviendo

2. **Oleadas de ataque**

   * El juego consta de **5 rondas** (oleadas).
   * En cada ronda, el programa genera aleatoriamente un **nivel de ataque enemigo** entre 10 y 30.

3. **Turno del jugador**
   En cada ronda, el jugador debe elegir una defensa:

   1. Muralla → reduce el daño en 5 puntos
   2. Arqueros → reduce el daño en 10 puntos
   3. Aceite hirviendo → reduce el daño en 15 puntos

4. **Cálculo del daño**

   * El daño final se calcula restando la defensa elegida al ataque enemigo.
   * Si el daño final es menor que 0, se considera 0.
   * El daño resultante se resta a la vida del castillo.

5. **Mensajes en pantalla**

   * En cada ronda se muestra:

     * Ataque enemigo
     * Defensa elegida
     * Daño recibido
     * Vida restante del castillo

6. **Final del juego**

   * El juego termina cuando:

     * Se completan las 5 rondas, o
     * La vida del castillo llega a 0.
   * Al finalizar, se muestra un mensaje indicando si el castillo ha resistido o ha sido destruido.

7. **Repetición**

   * Se pregunta al jugador si desea iniciar una nueva partida.
