/*
 * utn_calculator.c
 *
 *  Created on: 13 sep. 2021
 *      Author: Usuario
 */


#include "utn_calculator.h"


 int sumarNumero(float numUno, float numDos)//realiza las sumas entre dos numeros
 {
 int retorno;
 retorno = numUno + numDos;
 return retorno;
 }

 int restaNumero(float numUno, float numDos)//realiza las restas entre dos numeros
 {
 int retorno;
 retorno = numUno - numDos;
 return retorno;
 }

 int multiNumeros(float multiNumUno, float multiNumDos)//realiza las multiplicaciones entre dos numeros
 {
 int retorno;
 retorno = multiNumUno * multiNumDos;
 return retorno;
 }

 float divNumero(float divNumUno, float divNumDos)//realiza la division entre dos numeros, siempre y cuando el segundo numero sea distinto de 0
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

 void imprimirResultado(float resultado)//imprime variables
 {
	 printf("el resultado es %f \n", resultado);

 }

 int factorialNum(float num)//para sacar el factorial de un numero
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


