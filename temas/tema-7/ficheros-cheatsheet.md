# Cheat Sheet: Manejo de Ficheros en C

## 1. Abrir un fichero: `fopen`

Permite abrir un fichero existente o crear uno nuevo.

``` c
FILE *fopen(const char *path, const char *mode);
```

### Modos comunes

- `"r"`: Abre un archivo para lectura.
- `"w"`: Crea un archivo para escritura.
- `"a"`: Abre un archivo para agregar datos al final.
- `"rb"`, `"wb"`, `"ab"`: Igual
    que los anteriores, pero para archivos binarios.

### Ejemplo

``` c
#include 

int main() {
    FILE *fichero = fopen("archivo.txt", "r");
    if (fichero == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }
    printf("Archivo abierto correctamente.\\n");
    fclose(fichero);
    return 0;
}
```

## 2. Cerrar un fichero: `fclose`

Cierra un flujo abierto y libera los recursos asociados.

``` c
int fclose(FILE *stream);
```

**Ejemplo:**

``` c
fclose(fichero);
```

## 3. Leer de un fichero: `fscanf`

Lee datos formateados desde un fichero.

``` c
int fscanf(FILE *stream, const char *format, ...);
```

### Ejemplo

``` c
#include 

int main() {
    FILE *fichero = fopen("archivo.txt", "r");
    char linea[100];
    if (fichero == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }
    while (fscanf(fichero, "%[^\n]\\n", linea) != EOF) {
        printf("%s\\n", linea);
    }
    fclose(fichero);
    return 0;
}
```

## 4. Escribir en un fichero: `fprintf`

Escribe datos formateados en un fichero.

``` c
int fprintf(FILE *stream, const char *format, ...);
```

### Ejemplo

``` c
#include 

int main() {
    FILE *fichero = fopen("salida.txt", "w");
    if (fichero == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }
    fprintf(fichero, "Hola, mundo!\\n");
    fclose(fichero);
    return 0;
}
```

## 5. Escribir/Leer cadenas: `fputs` y `fgets`

- **`fputs`**: Escribe una cadena en un archivo.
- **`fgets`**: Lee una línea desde un archivo.

### Ejemplo

``` c
#include 

int main() {
    FILE *fichero = fopen("archivo.txt", "w");
    fputs("Este es un ejemplo.\\n", fichero);
    fclose(fichero);

    fichero = fopen("archivo.txt", "r");
    char buffer[100];
    fgets(buffer, 100, fichero);
    printf("Leído: %s", buffer);
    fclose(fichero);
    return 0;
}
```

## 6. Escribir/Leer bloques: `fwrite` y `fread`

Permiten trabajar con datos binarios o estructuras.

### Ejemplo

``` c
#include 

struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    struct Persona p = {"Juan", 30};
    FILE *fichero = fopen("datos.bin", "wb");
    fwrite(&p, sizeof(struct Persona), 1, fichero);
    fclose(fichero);

    fichero = fopen("datos.bin", "rb");
    struct Persona p_leido;
    fread(&p_leido, sizeof(struct Persona), 1, fichero);
    printf("Nombre: %s, Edad: %d\\n", p_leido.nombre, p_leido.edad);
    fclose(fichero);
    return 0;
}
```

## 7. Mover el puntero en el fichero: `fseek`, `ftell`

- **`fseek`**: Mueve el puntero de lectura/escritura en
    el archivo.
- **`ftell`**: Devuelve la posición actual del puntero.

### Ejemplo

``` c
#include 

int main() {
    FILE *fichero = fopen("archivo.txt", "r");
    fseek(fichero, 0, SEEK_END);  // Mover al final del archivo
    long tamano = ftell(fichero); // Obtener posición (tamaño del archivo)
    printf("Tamaño del archivo: %ld bytes\\n", tamano);
    fclose(fichero);
    return 0;
}
```

## 8. Detectar fin de fichero: `feof`

Permite verificar si se ha alcanzado el final del archivo.

### Ejemplo

``` c
#include 

int main() {
    FILE *fichero = fopen("archivo.txt", "r");
    char c;
    while ((c = fgetc(fichero)) != EOF) {
        putchar(c);
    }
    if (feof(fichero)) {
        printf("\\nFin del archivo alcanzado.\\n");
    }
    fclose(fichero);
    return 0;
}
```
