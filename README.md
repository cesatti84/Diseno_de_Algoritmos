DOCUMENTACIÓN PROGRAMA EN LENGUAJE C

PROGRAMA PARA ELECCIÓN DE MENÚ

Se crea este programa para que el usuario final pueda visualizar un menú con 4 paquetes distintos, de los cuáles deberá elegir alguno de los paquetes listados e indicará un error en caso de que el usuario ingrese números fuera de los parámetros o rangos establecidos de cada paquete. 
En el código se siguió el siguiente flujo: 
1)	INICIO DEL PROCESO
2)	Definición de librerías “<stdio.h>"
3)	Definición de la variable “opcion”, como entero.
4)	Se muestra en impresión en pantalla al usuario el título del programa “Programa para eleccion de Menu”
5)	Se ingresa las siguientes funciones para mostrar el menú al cliente: 
a.	 Función “printf("Bienvenido al Restaurante Velma de comida rapida\n");” para que el usuario vea mensaje de bienvenida.
b.	Función “printf("Menu disponible para elegir:\n");” para que el usuario vea la solicitud de información por su parte.
c.	Función “printf("1. Hamburguesa de carne de res con papas a la francesa y refresco\n");” para que el usuario vea el primer paquete disponible.
d.	Función “printf("2. Pizza Pepperoni con Refresco\n");” para que el usuario vea el segundo paquete disponible.
e.	Función “printf("3. Hot dog con papas gajo y refresco\n");” para que el usuario vea el tercer paquete disponible.
f.	Función “printf("4. Tacos carne angus con refresco\n");” para que el usuario vea el cuarto paquete disponible.
g.	Función “printf("Seleccione su opcion (1-4): ");” para que el usuario vea las opciones que se pueden elegir, es decir, del 1 al 4.
h.	Función “scanf("%d", &opcion);” para que el programa guarde la selección del usuario final (de las opciones del 1 al 4).
6)	Se ingresa la función “switch(opcion) {” para comenzar con procesamiento de la opción seleccionada por el usuario de acuerdo con los siguientes casos:
a.	case 1: printf("Ha seleccionado Hamburguesa de carne de res con papas a la francesa y refresco. Buen provecho!\n"); break;
b.	case 2: printf("Ha seleccionado Pizza Pepperoni con Refresco. Buen provecho!\n"); break;
c.	case 3: printf("Ha seleccionado Hot dog con papas gajo y refresco. Buen provecho!\n"); break;
d.	case 4: printf("Ha seleccionado Tacos carne angus con refresco. Buen provecho!\n"); break;
7)	Se hace validación para que la opción elegida por el usuario esté dentro del rango solicitado (1-4) con la función “default: printf("Opcion no valida. Por favor seleccione una opcion valida del 1 al 4.\n"); break;”
8)	Se ingresa función “getc” para no cerrar el programa inmediatamente, sino dar una pauta. 
9)	FIN DEL PROCESO
NOTA: Ver adicionalmente comentarios dentro del mismo código para mayor referencia.
