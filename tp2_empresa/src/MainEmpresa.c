/*
 ============================================================================
 Name        : MainEmpresa.c
 Author      : Emanuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "arrayEmployees.h"

int main(void) {
	setbuf(stdout, NULL);

	//int edad;
	float peso;
	char letra;
	//int respuestaI;
	int respuestaF;
	int respuestaC;
/*
	respuestaI = utn_getNumero(&edad, "edad?", "La edad debe estar entre 0 y 120", 0, 120, 2);

	if(respuestaI == 0){
		printf("La edad es: %d", edad);
	}
	else{
		printf("Error");
	}*/

	respuestaF = utn_getNumeroFlotante(&peso, "peso?", "El peso debe ser mayor a 0 y menos a 100", 0,  100, 2);
	if(respuestaF == 0){
			printf("El peso es: %.2f", peso);
		}
		else{
			printf("Error");
		}

	respuestaC = utn_getCaracter(&letra, "Letra?",  "La letra debe estar entre A y J",  'A',  'J',  2);
	if(respuestaC == 0){
			printf("La letra es: %c", letra);
		}
		else{
			printf("Error");
		}

return EXIT_SUCCESS;
}
















