#include <stdio.h>

// Función para obtener el Signo Zodiacal
char* obtener_signo_zodiacal(int dia, int mes) {
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        return "Acuario";
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        return "Piscis";
    } else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        return "Aries";
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        return "Tauro";
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        return "Geminis";
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        return "Cancer";
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        return "Leo";
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        return "Virgo";
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        return "Libra";
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        return "Escorpio";
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        return "Sagitario";
    } else {
        return "Capricornio";
    }
}

int main() {
    int dia, mes;

    printf("Programa para consulta de signo zodiacal\n\n");

    // Solicitar fecha de nacimiento al usuario con los rangos permitidos
    printf("Ingrese su fecha de nacimiento:\n");
    printf("Dia (1-31): ");
    scanf("%d", &dia);
    printf("Mes (1-12): ");
    scanf("%d", &mes);

    // Validación de la fecha ingresada
    if ((dia < 1 || dia > 31) || (mes < 1 || mes > 12)) {
        printf("Fecha de nacimiento no valida, por favor ingresar ambos datos de acuerdo a los rangos indicados en cada caso.\n");
        getc;
        return 1;
    }

    // Obtención del signo zodiacal
    char* signo = obtener_signo_zodiacal(dia, mes);

    // Mostrar el signo zodiacal correspondiente
    printf("Tu signo zodiacal es: %s\n", signo);
    getc;
    return 0;
}
