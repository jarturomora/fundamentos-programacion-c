# Guía de Uso de las Funciones de la Calculadora

Esta calculadora implementada en C incluye las siguientes funciones. A
continuación, se explica cómo utilizarlas:

## Funciones Matemáticas

### Suma

* **Firma de la función:** `int suma(int a, int b);`

* **Descripción:** Suma dos números enteros.

* **Ejemplo de Uso:**

    ``` c
    int resultado = suma(3, 5); // Resultado: 8
    ```

### Resta

* **Firma de la función:** `int resta(int a, int b);`

* **Descripción:** Resta dos números enteros.

* **Ejemplo de Uso:**

    ``` c
    int resultado = resta(10, 4); // Resultado: 6
    ```

### Multiplicación

* **Firma de la función:** `int multiplicacion(int a, int b);`

* **Descripción:** Multiplica dos números enteros.

* **Ejemplo de Uso:**

    ``` c
    int resultado = multiplicacion(3, 7); // Resultado: 21
    ```

### División

* **Firma de la función:** `int division(int a, int b);`

* **Descripción:** Divide dos números enteros. Si el divisor es 0,
devuelve 0 y muestra un mensaje de error.

* **Ejemplo de Uso:**

    ``` c
    int resultado = division(20, 5); // Resultado: 4
    ```

* **Nota:** Si el divisor es 0:

    ``` c
    int resultado = division(10, 0); // Muestra: "Error: División por cero no permitida."
    ```

### Potencia

* **Firma de la función:** `double potencia(double base, double exponente);`

* **Descripción:** Calcula la potencia de un número dado (base^exponente).

* **Ejemplo de Uso:**

    ``` c
    double resultado = potencia(2.0, 3.0); // Resultado: 8.0
    ```
