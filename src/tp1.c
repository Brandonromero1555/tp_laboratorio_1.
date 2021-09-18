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

	int opcion;
	float num1;
	float num2;
	float suma;
	float resta;
	float multi;
	float div;
	int factoreoUno;
	int factoreoDos;

	do {
		printf("\n1) Ingresar 1er operando\n");
		printf("2) Ingresar 2do operando\n");
		printf("3) Calcular todas las operaciones\n");
		printf("4) Informar resultados\n");
		printf("5) salir\n");
		printf("opcion:\n");
		scanf("%d", &opcion);

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

			suma =sumarNumero(num1, num2);
			resta = restaNumero(num1, num2);
			multi = multiNumeros(num1, num2);
			div = divNumero(num1, num2);
			factoreoUno = factorialNum(num1);
			factoreoDos = factorialNum(num2);
			break;

		case 4:
			imprimirResultado(suma);
			imprimirResultado(resta);
			imprimirResultado(multi);
			imprimirResultado(div);
			imprimirResultado(factoreoUno);
			imprimirResultado(factoreoDos);

		}

	} while (opcion != 5);



	return EXIT_SUCCESS;
}


