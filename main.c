#include <stdio.h>
#include <math.h>

// IMPORTANTE: Como este código tiene librerías <math.h> se debe compilar en GitHub con los comandos:
// gcc main.c -lm
// gcc main.c -o main -lm
// ./main

// Función para calcular la operación numérica para un número dado
int calcular_operacion(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    double num;

    printf("Programa para generacion de una sucesion numerica con la formula n(n+1)(2n+1)/6\n\n");


    // Solicitar al usuario que ingrese un número entero positivo
    printf("Ingrese un numero entero positivo: ");
    scanf("%lf", &num);

    // Verificar si el número ingresado es un entero positivo y sin decimales
    if (num > 0 && num == floor(num)) {
        int n = (int)num; // Convertir el número ingresado a un entero
        printf("Resultados para cada valor desde 1 hasta %d:\n", n);
        // Calcular y mostrar la operación numérica para cada valor desde 1 hasta n
        for (int i = 1; i <= n; i++) {
            int resultado = calcular_operacion(i);
            printf("Para n=%d, resultado=%d\n", i, resultado);
        }
    } else {
        printf("Error: El numero ingresado no es un entero positivo sin decimales.\n");
    }
    getc;    
    return 0;
}
