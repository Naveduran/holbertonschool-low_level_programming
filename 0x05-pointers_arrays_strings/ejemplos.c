#include <stdio.h>

#include <string.h> /*para strlen*/

void main(void)
{
	int variable0, variable1, variable2, c;
	int* puntero1, puntero2;

	char array1[] = "Hola";
	char array2[5]= "Halo";
	char array3[10];

	char string[6] = {'H','E','L','L','O','\0'};


	char empty[5] = {'\0'}; /*strlen = 0, aunque contiene el caracter nulo*/


	char null[5]; /* strlen = impredecible porque no se ha inicializado*/
/* no se refiere a un objeto válido*/

/* para declarar un array se requiere poner el tamaño  o dejarlo vacío*/
	char array4[18] = "dinosaurio peludo";
	char array5[] = "dinosaurio";

/* no se le puede asignar el tamaño de una variable */
/* no se le puede dejar sin tamaño ni contenido al tiempo */
/* ejemplo a no seguir : char array6[]; */

	variable1 = 1;
	variable2 = 2;
	variable0 = 0;
	puntero1 = &variable1;

	printf("Lea los comentarios internos de este codigo");

/* Las variables enteras se imprimen con %d */
	printf("Valor de variable 1 : %d\n", variable1);

/* Las direcciones de memoria se imprimen con %p */
	printf("Dirección de variable &1 : %p\n\n", &variable1);
	printf("Valor del puntero 1 : %p\n", puntero1);
	printf("Dirección del puntero &1 : %p\n", &puntero1);

/* El contenido de la variable apuntada entera se imprime con %d*/
	printf("Contenido del puntero1: %d\n", *puntero1);


/* Al imprimir un array se imprime la dirección de memoria del primer elemento*/
	printf("array1 : %p\n", array1);
	printf("sizeof array1 : %lu\n", sizeof(array1));
	printf("&array1 : %p\n", &array1);

/*array3[variable1] = variable2, print array3 [1]= 2*/
/* se puede desreferenciar usando variables*/

	array3[variable1] = variable2;
	printf("Elemento 1 del array3 : %d\n", array3[1]);
	printf("Elemento 1 del array3 : %d\n", array3[variable1]);


	/* para declarar el tamaño de un array se requiere usar una constante */
	/* array4[variable2]; es inaceptable */

/* array4[]= "dinosaurio peludo" no es permitido, necesita un tamaño */

/* imprimir un string con %s*/
	printf("%s\n", string);

/* averiguar el largo de un string*/
	printf("Largo del string : %zu \n", strlen(string));

	/* averiguar el tamaño de un array así: */

/*
	for (c = 0; array4[c] != NULL; c++);
	{
	}
	printf("%d", c);
*/

}
