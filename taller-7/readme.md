# Ejercicio Tipo Examen: Adivina la Capital

## Objetivo

Diseñar un programa interactivo que ponga a prueba los conocimientos geográficos del jugador. El programa seleccionará al azar un país de una lista y pedirá al jugador que adivine su capital. El jugador gana puntos por cada respuesta correcta.

## Descripción del Juego

1. Lista de países y capitales: El programa contiene una lista de 10 países con sus respectivas capitales.

2. Selección aleatoria: El programa selecciona al azar un país de la lista y solicita al jugador que ingrese la capital correspondiente.

3. Validación de respuestas:
    * Si la respuesta es correcta, se otorgan puntos al jugador.
    * Si la respuesta es incorrecta, el programa muestra la respuesta correcta.

4. Contador de puntos: Se lleva un registro de los puntos obtenidos (por ejemplo, 1 punto por respuesta correcta).

5. Opciones finales:
    * El programa pregunta si el jugador desea continuar con otro país o terminar el juego.
    * Al finalizar, se muestra el puntaje total del jugador.

## Rúbrica

| Criterio                                                                                      | Ponderación | Descripción                                                                                          |
|-----------------------------------------------------------------------------------------------|-------------|------------------------------------------------------------------------------------------------------|
| 1. Manejo de datos en estructuras adecuadas                                                   | 2 puntos    | - El programa utiliza correctamente un array o estructura para almacenar los países y sus capitales. |
|                                                                                               |             | - La lista debe contener al menos 10 países y sus respectivas                                        |
| 2. Generación aleatoria de países                                                             | 2 puntos    | - El programa selecciona aleatoriamente un país para cada ronda.                                     |
|                                                                                               |             | - Se utiliza una función adecuada como rand para generar la aleatoriedad.                            |
| 3. Validación de respuestas                                                                   | 2 puntos    | - El programa compara correctamente la respuesta del jugador con la capital del país seleccionado.   |
|                                                                                               |             | - Se otorgan puntos por respuestas correctas y se muestran las respuestas correctas si falla.        |
| 4. Interactividad y múltiples rondas                                                          | 2 puntos    | - El programa permite jugar varias rondas y preguntar si el jugador desea continuar.                 |
|                                                                                               |             | - El flujo es claro y el jugador puede terminar el juego cuando desee.                               |
| 5. Resultados finales y claridad                                                              | 2 puntos    | - Se muestra un resumen claro del puntaje total al finalizar el juego.                               |
|                                                                                               |             | - Los mensajes son amigables y fáciles de entender.                                                  |
