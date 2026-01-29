# Juego “Gestión del Refugio”

El jugador administra un refugio durante varios días y debe tomar decisiones diarias para mantener a salvo a sus habitantes.

## **Descripción del Juego**

1. **Estado inicial del refugio**

   * Energía: 50 puntos
   * Comida: 50 puntos
   * Moral: 50 puntos
   * El juego dura **5 días**.

2. **Decisión diaria del jugador**
   Al inicio de cada día, el jugador debe elegir **una única acción**:

   1. **Buscar comida** → +15 comida, −5 energía
   2. **Reparar el refugio** → +10 energía, −5 comida
   3. **Descansar** → +10 moral, −5 comida
   4. **Explorar** → evento aleatorio

3. **Eventos de exploración**
   Si el jugador elige explorar, el programa genera uno de los siguientes eventos:

   * Encuentro positivo → +10 a un recurso aleatorio
   * Encuentro negativo → −10 a un recurso aleatorio
   * Nada ocurre → sin cambios

4. **Límites de los recursos**

   * Ningún recurso puede superar 100 ni bajar de 0.
   * Si **cualquier recurso llega a 0**, el juego termina inmediatamente.

5. **Mensajes en pantalla**
   Cada día se debe mostrar:

   * Día actual
   * Acción elegida
   * Cambios producidos
   * Estado actualizado del refugio (energía, comida y moral)

6. **Final del juego**

   * Si se completan los 5 días con recursos mayores que 0 → *Refugio estabilizado*.
   * Si algún recurso llega a 0 → *El refugio colapsa*.
   * Al finalizar, se muestra un resumen del estado final.

7. **Repetición**

   * El programa pregunta si el jugador desea iniciar una nueva partida.
