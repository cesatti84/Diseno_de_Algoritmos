DOCUMENTACIÓN PROGRAMA EN LENGUAJE C

PROGRAMA PARA SUMAR LOS PRIMEROS “N” NÚMEROS PARES INDICADOS POR UN USUARIO.
Se crea este programa para que el usuario final pueda ingresar un número “n” entero positivo, a partir de dicho número el programa será capaz de calcular y mostrar la suma d ellos primeros números pares acorde a dicha cifra e indicará un error en caso de que el usuario ingrese números fuera de los parámetros o rangos solicitados. 
En el código se siguió el siguiente flujo: 
1)	INICIO DEL PROCESO
2)	Definición de librerías “<stdio.h>
3)	Definición de las variables “n”, “i”, “suma = 0”, como entero.
4)	Se muestra en impresión en pantalla al usuario el título del programa con la función “printf("Programa para sumar los primeros n numeros pares indicados por el usuario\n\n");”
5)	Comienza la solicitud al usuario para ingreso del valor “n” con la función “printf("Ingrese un numero entero positivo n: ");”
6)	Con la función “scanf("%d", &n);” se guarda el número entero positivo ingresado por el usuario, esto en la variable “n”.
7)	Se hace validación para que el número entero positivo ingresado por el usuario cumpla el parámetro con la función “while (n <= 0) { printf("Por favor, ingrese un numero entero positivo: ");scanf("%d", &n);}”
8)	Se comienza con el cálculo partiendo del número “n” ingresado correctamente por el usuario con la función “for (i = 1; i <= n; i++) { suma = 2 * i; printf("Para n=%d, suma=%d\n", i, suma);}”
9)	Se ingresa función “getc” para no cerrar el programa inmediatamente, sino dar una pauta. 
10)	FIN DEL PROCESO
NOTA: Ver adicionalmente comentarios dentro del mismo código para mayor referencia.
