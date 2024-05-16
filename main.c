#include <stdio.h>

int main() {
    int opcion;

    printf("Programa para eleccion de Menu\n\n");

    // Mostrar el menú al cliente
    printf("Bienvenido al Restaurante Velma de comida rapida\n");
    printf("Menu disponible para elegir:\n");
    printf("1. Hamburguesa de carne de res con papas a la francesa y refresco\n");
    printf("2. Pizza Pepperoni con Refresco\n");
    printf("3. Hot dog con papas gajo y refresco\n");
    printf("4. Tacos carne angus con refresco\n");
    printf("Seleccione su opcion (1-4): ");
    scanf("%d", &opcion);

    // Procesamiento de la opción seleccionada
    switch(opcion) {
        case 1:
            printf("Ha seleccionado Hamburguesa de carne de res con papas a la francesa y refresco. Buen provecho!\n");
            break;
        case 2:
            printf("Ha seleccionado Pizza Pepperoni con Refresco. Buen provecho!\n");
            break;
        case 3:
            printf("Ha seleccionado Hot dog con papas gajo y refresco. Buen provecho!\n");
            break;
        case 4:
            printf("Ha seleccionado Tacos carne angus con refresco. Buen provecho!\n");
            break;
        default: // Validación de la opción elegida por el usuario
            printf("Opcion no valida. Por favor seleccione una opcion valida del 1 al 4.\n");
            break;
    }
    getc;
    return 0;
}