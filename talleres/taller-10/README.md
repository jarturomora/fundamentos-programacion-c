# Juego "Exploración Espacial"

El jugador controla una nave espacial que debe recorrer distintos sectores del espacio evitando peligros y gestionando su energía.

## **Descripción del Juego**

1. **Estado inicial de la nave**

   * La nave comienza con **100 puntos de energía**.
   * El recorrido consta de **5 sectores espaciales**.

2. **Eventos por sector**
   En cada sector, el programa genera aleatoriamente uno de los siguientes eventos:

   * **Zona tranquila** → no ocurre nada.
   * **Campo de asteroides** → se pierde entre 10 y 25 puntos de energía.
   * **Estación espacial** → se recuperan 10 puntos de energía (sin superar 100).

3. **Turno del jugador**
   Antes de avanzar a cada sector, el jugador puede elegir:

   1. Avanzar normalmente.
   2. Usar escudos (reduce a la mitad el daño recibido en ese sector).

4. **Cálculo de energía**

   * Si ocurre un daño y se usan escudos, el daño se reduce a la mitad (entero).
   * La energía nunca puede ser mayor que 100 ni menor que 0.

5. **Mensajes en pantalla**
   En cada sector se debe mostrar:

   * Número de sector actual
   * Evento ocurrido
   * Energía ganada o perdida
   * Energía restante de la nave

6. **Final del juego**

   * El juego termina cuando:

     * Se recorren los 5 sectores, o
     * La energía llega a 0.
   * Al finalizar, se muestra si la nave completó la misión o quedó inutilizada.

7. **Repetición**

   * El programa pregunta si el jugador desea iniciar una nueva misión.
