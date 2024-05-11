DOCUMENTACIÓN PROGRAMA EN LENGUAJE C

PROGRAMA PARA SOLICITUD DE 3 NUMEROS ENTEROS Y ORDENACION DE LOS MISMOS DE MAYOR A MENOR

Se crea este programa para ordenación de numeración de mayor a menor, con el fin de que el usuario indique 3 números, mismos que deberán ser mayores de 3 y menores de 15; el programa regresará con esa información los números ordenados de mayor a menor e indicará un error en caso de que el usuario ingrese números fuera de los parámetros o rangos establecidos. 
En el código se siguió el siguiente flujo: 
1)	INICIO DEL PROCESO
2)	Definición de librerías “<stdio.h>
3)	Se ingresa función para intercambiar dos números “void swap(int *a, int *b) { int temp = *a; *a = *b; *b = temp;}“.
4)	Se ingresa función “void ordenar_numeros(int *num1, int *num2, int *num3) {if (*num1 < *num2) {swap(num1, num2);}” y así sucesivamente para ordenar los números de mayor a menor. 
5)	Definición de las variables “num1”, “num2”, “num3” como entero.
6)	Se muestra en impresión en pantalla al usuario el título del programa “Programa para solicitud de 3 numeros enteros y ordenacion de los mismos de mayor a menor”
7)	Se ingresa la función “printf("Ingrese tres numeros enteros (mayores de 3 y menores de 15):\n");” para que el usuario vea la solicitud de información por su parte.
8)	Se ingresa la función “printf("Primer numero: ");” para que el usuario vea la solicitud de información por su parte.
9)	Lectura y almacenamiento de la información del número entero positivo ingresado por el usuario, con la función “scanf ("%d", &num1)”.
10)	Se ingresa la función “printf("Segundo numero: ");” para que el usuario vea la solicitud de información por su parte.
11)	Lectura y almacenamiento de la información del número entero positivo ingresado por el usuario, con la función “scanf ("%d", &num2)”.
12)	Se ingresa la función “printf("Tercer numero: ");” para que el usuario vea la solicitud de información por su parte
13)	Lectura y almacenamiento de la información del número entero positivo ingresado por el usuario, con la función “scanf ("%d", &num3)”.
14)	Verificación y validación de que los 3 números ingresados estén dentro del rango especificado:
a.	Se ingresa la función “if ((num1 < 3 || num1 > 15) || (num2 < 3 || num2 > 15) || (num3 < 3 || num3 > 15)) {” para hacer la verificación antes mencionada.
b.	En caso de no cumplirse la validación, se imprime o muestra en pantalla con la función “printf("Error: Los numeros deben estar entre 3 y 15.\n");”
15)	Se ingresa función “ordenar_numeros(&num1, &num2, &num3);” para la ordenación de los números de mayor a menor.
16)	Se ingresa la función “printf("Numeros ordenados de mayor a menor: %d, %d, %d\n", num1, num2, num3);” para que el usuario vea el resultado de la ordenación de los 3 números ingresados por su parte de mayor a menor.
17)	Se ingresa función “getc” para no cerrar el programa inmediatamente, sino dar una pauta. 
18)	FIN DEL PROCESO
NOTA: Ver adicionalmente comentarios dentro del mismo código para mayor referencia.
