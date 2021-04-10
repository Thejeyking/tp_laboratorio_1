/*
 ============================================================================
 OVIEDO MATIAS 1º "F"
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
 (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones
 ============================================================================
 */

#include <stdio.h>

#include "tool_kits.h"

int main(void) {
	int oneNumber;
	int twoNumber;
	int suma;
	int resta;
	float division;
	int multiplicacion;
	int factorialA;
	int factorialB;
	int goodbye;
	goodbye = 0;
	int options;
	int addNum1;
	int addNum2;
	addNum1 = 0;
	addNum2 = 0;
	options = 0;

	setbuf(stdout, NULL);

	while (goodbye != 1) {
		printf(
				"\n Menu de opciones \n 1. Ingresar 1er operando \n 2. Ingresar 2do operando \n 3. Calcular todas las operaciones \n 4. Informar resultados \n 5. Salir \n");

		options = Ask_number("Opcion");

		switch (options) {

		case 1:
			printf("\n Primer Operando:");
			oneNumber = Ask_number("numero");
			addNum1 = 1;
			break;

		case 2:
			printf("\n Segundo Operando:");
			twoNumber = Ask_number("numero");
			addNum2 = 1;
			break;
		case 3:
			if (addNum1 == 0 || addNum2 == 0) {
				printf(
						"\n Falta Ingresar un Operador Numerico, Solo brindare el factorial del numero Ingresado\n");
				if (addNum1 == 0) {
					printf(
							"\n Ingrese a la opcion 1 y ingrese un numero para validar las demas operaciones matematicas\n");
				}
				if (addNum2 == 0) {
					printf(
							"\n Ingrese a la opcion 2 y ingrese un numero para validar las demas operaciones matematicas\n");
				}
			} else {
				suma = Sum(oneNumber, twoNumber);
				resta = Subtraction(oneNumber, twoNumber);
				multiplicacion = Multiplication(oneNumber, twoNumber);
				division = Division(oneNumber, twoNumber);
				factorialA = Factory(oneNumber);
				factorialB = Factory(twoNumber);
				printf("\n Operaciones ya Calculadas! \n");

				break;

				case 4:
				if (addNum1 == 0 || addNum2 == 0) {
					printf(
							"\n Falta Ingresar un de los Operador Numerico para realizar las operaciones matematicas");
					if (addNum1 == 0) {
						printf("\n Ingrese a la opcion 1 y ingrese un numero");
					}
					if (addNum2 == 0) {
						printf("\n Ingrese a la opcion 2 y ingrese un numero");
					}
				} else {
					printf("\n Informes:");
					printf("\n“El resultado de %d+%d es: %d”", oneNumber,
							twoNumber, suma);
					printf("\n“El resultado de %d-%d es: %d”", oneNumber,
							twoNumber, resta);
					if (twoNumber == 0) {
						printf("\n “No es posible dividir por cero");
					} else {
						printf("\n“El resultado de %d divido %d es: %.2f”",
								oneNumber, twoNumber, division);
					}
					printf("\nEl resultado de %dx%d es: %d", oneNumber,
							twoNumber, multiplicacion);

				}
				if (addNum1 == 1) {
					printf("\n“El factorial de %d es: %d”", oneNumber,
							factorialA);
				} else {
					printf(
							"\nNo se ha ingresado el operador numerido, Eliga la OPCION 1 e Ingrese UN NUMERO");
				}
				if (addNum2 == 1) {
					printf("\n“El factorial de %d es: %d” \n", twoNumber,
							factorialB);
				} else {
					printf(
							"\nNo se ha ingresado el operador numerido, Eliga la OPCION 2 e Ingrese UN NUMERO");
				}
				break;

				case 5:
				printf("Has finalizado la calculadora, ADIOS!!!");
				goodbye = 1;
				break;

				default:
				printf("\nINGRESE UNA OPCION VALIDA");
				break;
			}

		}
	}
}
