#include <stdio.h>

// Función para intercambiar dos números
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función para ordenar los números de mayor a menor
void ordenar_numeros(int *num1, int *num2, int *num3) {
    if (*num1 < *num2) {
        swap(num1, num2);
    }
    if (*num1 < *num3) {
        swap(num1, num3);
    }
    if (*num2 < *num3) {
        swap(num2, num3);
    }
}

int main() {
    int num1, num2, num3;

    printf("Programa para solicitud de 3 numeros enteros y ordenacion de los mismos de mayor a menor\n\n");

    // Solicitar al usuario los tres números
    printf("Ingrese tres numeros enteros (mayores de 3 y menores de 15):\n");
    printf("Primer numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    printf("Tercer numero: ");
    scanf("%d", &num3);

    // Validar que los números estén en el rango especificado
    if ((num1 < 3 || num1 > 15) || (num2 < 3 || num2 > 15) || (num3 < 3 || num3 > 15)) {
        printf("Error: Los numeros deben estar entre 3 y 15.\n");
        return 1;
    }

    // Ordenar los números de mayor a menor
    ordenar_numeros(&num1, &num2, &num3);

    // Mostrar los números ordenados
    printf("Numeros ordenados de mayor a menor: %d, %d, %d\n", num1, num2, num3);
    getc;
    return 0;
}
