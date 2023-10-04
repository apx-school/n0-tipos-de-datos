#include <stdio.h>

int main() {
    int numero = 42;

    char texto[] = "Hola mundo!";

    printf("Entero: %d\n", numero);
    printf("Texto: %s\n", texto);

    return 0;
}

/* 
En algunos lenguajes como C, es obligatorio
indicar el tipo de cada dato.
*/

// clang -o programita-en-c estricto.c