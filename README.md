DOCUMENTACIÓN PROGRAMA EN LENGUAJE C

PROGRAMA PARA GENERACIÓN DE UNA SUCESIÓN NUMÉRICA CON LA FÓRMULA n(n+1)(2n+1)/6 
NOTA IMPORTANTE: 
// Como este código tiene librerías <math.h> se debe compilar en GitHub con los comandos:
// gcc main.c -lm
// gcc main.c -o main -lm
// ./main

Se crea este programa para generar una sucesión numérica con la fórmula n(n+1)(2n+1)/6, con el fin de que el usuario indique el número entero positivo sin decimales “n” y el programa resolverá la fórmula indicando adicionalmente los resultados de los números enteros positivos sin decimales comenzando del número 1 al número “n” indicado por el usuario. 
En el código se siguió el siguiente flujo: 
1)	INICIO DEL PROCESO
2)	Definición de librerías
3)	Definición del número “n” como entero. 
4)	Definición de función “calcular_operacion” y fórmula para calcular la operación numérica para un número “n” dado “return (n*(n+1)*(2*n+1))/6.
5)	Se comienza con el desarrollo del código indicando la función “double num” para la configuración del tipo de número que ingresa el usuario, número que debe ser entero positivo y sin decimales.
6)	Se muestra en impresión en pantalla al usuario el título del programa “Programa para generacion de una sucesion numerica con la formula n(n+1)(2n+1)/6”
7)	Se ingresa la función “printf(“Ingrese un numero entero positivo:” para que el usuario vea la solicitud de información por su parte.
8)	Lectura y almacenamiento de la información del número entero positivo ingresado por el usuario, con la función “scanf("%lf", &num)”.
9)	Verificación si el número ingresado por el usuario es un entero positivo y sin decimales:
a.	Se ingresa la función “if (num > 0 && num == floor(num))” para hacer la verificación antes mencionada
b.	Se convierte el número ingresado como entero con la función “int n = (int)num”
c.	Se imprime o muestra en pantalla con la función “printf("Resultados para cada valor desde 1 hasta %d:”
d.	Se calcula y muestra la operación numérica para cada valor desde 1 hasta “n” con la función “for (int i = 1; i <= n; i++) { int resultado = calcular_operacion(i)”
e.	Se imprime en pantalla el resultado de la operación con la función “printf("Para n=%d, resultado=%d\n", i, resultado)”
f.	En caso de no cumplir el numero entero positivo sin decimales con dichos parámetros, la pantalla imprimirá el error con la siguiente función “printf("Error: El numero ingresado no es un entero positivo sin decimales.”
10)	Se ingresa función “getch ()” para no cerrar el programa inmediatamente, sino dar una pauta. 
11)	FIN DEL PROCESO
NOTA: Ver adicionalmente comentarios dentro del mismo código para mayor referencia.
