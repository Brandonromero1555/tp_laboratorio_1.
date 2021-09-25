/*
 ============================================================================
 Name        : tp1.c
 Author      : brandon romero
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_calculator.h"

int main(void) {
	setbuf(stdout, NULL);

	//estas son las variables utilizadas
	int opcion;
	float num1;
	float num2;
	float suma;
	float resta;
	float multi;
	float div;
	int factoreoUno;
	int factoreoDos;

	//un do while para usar las funciones de la calculadora
	do {
		//las opciones de la calculadora
		printf("\n1) Ingresar 1er operando\n");
		printf("2) Ingresar 2do operando\n");
		printf("3) Calcular todas las operaciones\n");
		printf("4) Informar resultados\n");
		printf("5) salir\n");
		printf("opcion:\n");
		scanf("%d", &opcion);//transforma la opcion que elija el usuario a un decimal

		/*este switch es para decirle al programa que hacer segun
		la opcion(numeros del 1 al 5) que elija el usuario*/
		switch (opcion) {
		case 1:
			scanf("%f", &num1);
			printf("A=%f", num1);
			break;

		case 2:
			scanf("%f", &num2);
			printf("B=%f", num2);
			break;

		case 3:

			//realiza las operaciones
			suma =sumarNumero(num1, num2);
			resta = restaNumero(num1, num2);
			multi = multiNumeros(num1, num2);
			div = divNumero(num1, num2);
			factoreoUno = factorialNum(num1);
			factoreoDos = factorialNum(num2);
			break;

		case 4:
			//muestra los resultados del case 3
			imprimirResultado(suma);
			imprimirResultado(resta);
			imprimirResultado(multi);
			imprimirResultado(div);
			imprimirResultado(factoreoUno);
			imprimirResultado(factoreoDos);

		}

	} while (opcion != 5); //si el usuario preciona el 5 saldrá del do while



	return EXIT_SUCCESS;
}


