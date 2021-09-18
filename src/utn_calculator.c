/*
 * utn_calculator.c
 *
 *  Created on: 13 sep. 2021
 *      Author: Usuario
 */


#include "utn_calculator.h"

/*void menu(char *uno, char *dos, char *tres, char *cuatro, char *cinco)
{
	int opcion;
	float num1;
	float num2;
	do {
		printf("1) Ingresar 1er operando\n");
		printf("2) Ingresar 2do operando\n");
		printf("3) Calcular todas las operaciones");
		printf("4) Informar resultados\n");
		printf("5) salir\n");
		scanf("%d", &opcion);

		if (opcion == 1) {
			scanf("%f", num1);
		} else {
			if (opcion == 2) {
				scanf("%f", num2);
			} else {
				if (opcion == 3) {

				} else {
					if (opcion == 4) {

					} else {
						if (opcion < 1 || opcion > 5) {
							printf("error al ingresar opcion.\n");
						}
					}
				}
			}
		}

	} while (opcion != 5);
}*/

 int sumarNumero(float numUno, float numDos)
 {
 int retorno;
 retorno = numUno + numDos;
 return retorno;
 }

 int restaNumero(float numUno, float numDos)
 {
 int retorno;
 retorno = numUno - numDos;
 return retorno;
 }

 int multiNumeros(float multiNumUno, float multiNumDos)
 {
 int retorno;
 retorno = multiNumUno * multiNumDos;
 return retorno;
 }

 float divNumero(float divNumUno, float divNumDos)
 {
 int retorno = -1;

 if(divNumDos != 0)
 {
  retorno = divNumUno / divNumDos;

 }
 else
 {
	  retorno = printf("no se puede dividir por 0");
 }
 return retorno;


 }

 void imprimirResultado(float resultado)
 {
	 printf("el resultado es %f \n", resultado);

 }

 int factorialNum(float num)
 {
	 int factorial = 1;
	 int i;


	 if(num != 0)
	 {
		 for(i=1;i <= num; i++)
		 {
			factorial *= i;
		 }
	 }
	 else
	 {
		 factorial = 0;
	 }
	 return factorial;
 }


