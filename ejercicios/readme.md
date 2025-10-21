# Ejercicios de Programación en C

Prepárate para el examen con estos ejercicios en C

Ha llegado el momento de poner a prueba tus habilidades en programación en C. He preparado una serie de 5 ejercicios prácticos diseñados especialmente para ayudarte a reforzar los conceptos clave antes del examen. Estos ejercicios cubren entrada y salida de datos, estructuras de control, bucles, manipulación de cadenas y generación de números aleatorios.

**¿Por qué resolver estos ejercicios?**

* Te ayudarán a identificar áreas en las que necesitas mejorar.
* Resolverlos sin ver la solución te permitirá desarrollar un pensamiento lógico más sólido.
* ¡Y lo más importante! Te ayudarán a ganar confianza en tus habilidades de programación en C.

**¿Cómo debes trabajar en ellos?**

* Intenta resolver cada ejercicio sin ver la solución.
* Si tienes complicaciones para resolver un ejercicio, vuelve a revisar tus apuntes o el material del curso.
* Si después de varios intentos no encuentras la solución, entonces puedes revisar las soluciones que he generado para cada problema en este [enlace](soluciones.md).
* Recuerda que aprender a depurar errores es parte fundamental de la programación.

## Ejercicio 1: Cálculo del promedio de tres números

**Objetivo:** Practicar la entrada y salida de datos, variables y
operaciones aritméticas.

**Enunciado:** Escribe un programa en C que solicite al usuario tres
números enteros y calcule su promedio. Luego, muestra el resultado en
pantalla con dos decimales.

### Ejemplo de entrada/salida

    Ingrese el primer número: 10
    Ingrese el segundo número: 20
    Ingrese el tercer número: 30
    El promedio es: 20.00
            

Pistas:

* Usa `scanf()` para capturar la entrada del usuario.
* Usa `printf()` con `%.2f` para mostrar dos decimales.

## Ejercicio 2: Determinar si un número es par o impar

**Objetivo:** Practicar estructuras de control (`if-else`).

**Enunciado:** Escribe un programa que solicite al usuario un número
entero y determine si es **par o impar**.

### Ejemplo de entrada/salida

    Ingrese un número: 7
    El número 7 es impar.
            

Pistas:

* Usa el operador módulo `%` para verificar si `numero % 2 == 0`.

## Ejercicio 3: Tabla de multiplicar

**Objetivo:** Practicar bucles (`for`).

**Enunciado:** Crea un programa que pida al usuario un número entero y
luego imprima la tabla de multiplicar del 1 al 10 de ese número.

### Ejemplo de entrada/salida

    Ingrese un número: 5
    5 x 1 = 5
    5 x 2 = 10
    ...
    5 x 10 = 50
          
Pistas:

* Usa un bucle `for` para recorrer del 1 al 10.

## Ejercicio 4: Contar vocales en una cadena

**Objetivo:** Practicar manipulación de cadenas (`char[]`) y bucles.

**Enunciado:** Escribe un programa que pida al usuario una palabra y
cuente cuántas vocales (`a, e, i, o, u`) contiene.

### Ejemplo de entrada/salida

    Ingrese una palabra: hola
    Número de vocales: 2
            
Pistas:

* Usa un bucle `for` para recorrer la cadena.
* Usa `tolower()` de `ctype.h` para hacer la comparación sin
    distinguir mayúsculas y minúsculas.

## Ejercicio 5: Juego de Piedra, Papel o Tijera

**Objetivo:** Practicar el uso de `if-else`, generación de números
aleatorios y comparación de cadenas.

**Enunciado:** Escribe un programa en C que permita al usuario jugar
**Piedra, Papel o Tijera** contra la computadora. El programa debe
generar una opción aleatoria para la computadora y comparar el resultado
con la elección del usuario para determinar el ganador.

### Reglas del juego

* Piedra (1) gana a Tijera (3)
* Tijera (3) gana a Papel (2)
* Papel (2) gana a Piedra (1)
* Si ambos eligen la misma opción, el juego termina en empate.

### Ejemplo de entrada/salida

    Bienvenido al juego de Piedra, Papel o Tijera.
    Elige una opción:
    1. Piedra
    2. Papel
    3. Tijera
    Tu elección: 1
    La computadora eligió: Papel
    ¡Has perdido! Papel envuelve Piedra.
     
Pistas:

* Usa `rand() % 3 + 1` para generar la elección de la computadora.
* Usa `if-else` para comparar las opciones y determinar el ganador.
