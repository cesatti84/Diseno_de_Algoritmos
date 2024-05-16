#include <stdio.h>

int main() {
    int n, i, suma = 0;

    printf("Programa para sumar los primeros n numeros pares indicados por el usuario\n\n");

    // Solicitud al usuario para ingresar el valor de n
    printf("Ingrese un numero entero positivo n: ");
    scanf("%d", &n);

    // Validación de que n sea un número entero positivo
    while (n <= 0) {
        printf("Por favor, ingrese un numero entero positivo: ");
        scanf("%d", &n);
    }

    // Cálculo de la suma de los primeros n números pares
    for (i = 1; i <= n; i++) {
        suma = 2 * i;
        printf("Para n=%d, suma=%d\n", i, suma);
    }
    
    getc;
    return 0;
}
