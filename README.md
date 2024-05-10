DOCUMENTACIÓN PROGRAMA EN LENGUAJE C

PROGRAMA PARA CONSULTA DE SIGNO ZODIACAL 

Se crea este programa para consulta de signo zodiacal, con el fin de que el usuario indique su fecha de nacimiento (día y mes) y el programa resolverá con esa información qué signo zodiacal le corresponde. 
En el código se siguió el siguiente flujo: 
1)	INICIO DEL PROCESO
2)	Definición de librerías
3)	Se ingresa función para obtener el signo zodiacal “char* obtener_signo_zodiacal(int dia, int mes) { if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) { return "Acuario"; } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) { return "Piscis";“ y así sucesivamente, indicando los rangos de mes y días para cada signo zodiacal.
4)	Definición de las variables “día”, “mes” como entero.
5)	Se muestra en impresión en pantalla al usuario el título del programa “Programa para consulta de signo zodiacal”
6)	Se ingresa la función “printf(“Ingrese su fecha de nacimiento:)”” para que el usuario vea la solicitud de información por su parte.
7)	Se ingresa la función “printf("Dia (1-31):” para que el usuario vea la solicitud de información por su parte.
8)	Lectura y almacenamiento de la información del número entero positivo ingresado por el usuario, con la función “scanf ("%d", &dia)”.
9)	Se ingresa la función “printf("Mes (1-12):”” para que el usuario vea la solicitud de información por su parte.
10)	Lectura y almacenamiento de la información del número entero positivo ingresado por el usuario, con la función “scanf ("%d", &mes)”.
11)	Verificación y validación de la fecha de nacimiento ingresada:
a.	Se ingresa la función “if ((dia < 1 || dia > 31) || (mes < 1 || mes > 12)) {” para hacer la verificación antes mencionada
b.	En caso de no cumplirse la validación, se imprime o muestra en pantalla con la función “printf("Fecha de nacimiento no valida, por favor ingresar ambos datos de acuerdo a los rangos indicados en cada caso.\n");”
c.	Se ingresa función “getc” para no cerrar el programa inmediatamente, sino dar una pauta. 
12)	Se ingresa función “char* signo = obtener_signo_zodiacal(dia, mes);” para la obtención del signo zodiacal.
13)	Se ingresa la función “printf("Tu signo zodiacal es: %s\n", signo);”” para que el usuario vea el resultado de su signo zodiacal de acuerdo a la fecha de nacimiento ingresada.
14)	Se ingresa función “getc” para no cerrar el programa inmediatamente, sino dar una pauta. 
15)	FIN DEL PROCESO
NOTA: Ver adicionalmente comentarios dentro del mismo código para mayor referencia.
