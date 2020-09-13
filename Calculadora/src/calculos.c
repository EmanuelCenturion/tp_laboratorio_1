#include <stdio.h>
#include <stdlib.h>

int menuCalculadora() {
	int opcion = 0;

	printf("\n\t\tMenu Calculadora");
	printf("\n\t.---------------------------------------.");
	printf("\n\t| 1)Ingresar primer operando (A=x)      |");
	printf("\n\t| 2)Ingresar segundo operando (B=y)     |");
	printf("\n\t| 3)Calcular todas las operaciones      |");
	printf("\n\t| 4)Informar resultados                 |");
	printf("\n\t| 5)Salir                               |");
	printf("\n\t°---------------------------------------°");
	printf("\n\tIngrese una opcion: ");
	fflush(stdin);
	scanf("%d", &opcion);
	return opcion;
}

int ingresarNumero() {
	int numIngresado = 0;
	do {
		printf("\nIngrese un Numero: ");
		fflush(stdin);
		scanf("%d", &numIngresado);
	} while (numIngresado < 0);
	printf("\n----------------------------------------");
	return numIngresado;
}

int calcularSuma(int primerNumero, int segundoNumero) {
	return primerNumero + segundoNumero;
}

int calcularResta(int primerNumero, int segundoNumero) {
	return primerNumero - segundoNumero;
}

int calcularMultiplicacion(int primerNumero, int segundoNumero) {
	return primerNumero * segundoNumero;
}

float calcularDivision(int primerNumero, int segundoNumero) {
	float resultado;
	if (segundoNumero == 0) {
		printf("Error\n No se puede dividir por cero");
		return -1;
	} else {
		resultado = (float) primerNumero / segundoNumero;
		return resultado;
	}
}

int calcularFactorial(int numero) {
	int factorial = 1;
	for (int i = 0; i < numero; i++) {
		factorial = factorial * (i + 1);
	}
	return factorial;
}

void salir() {
	printf("\nHasta luego");
	exit(0);
}

void manejoMenu() {
	int primerNumero;
	int segundoNumero;
	int flagPrimerNumero = 0;
	int flagSegundoNumero = 0;
	int flagCalculos = 0;
	char salirCalculadora = 'n';
	int suma;
	int resta;
	int multiplicacion;
	float division;
	int factorialPrimerNum;
	int factorialSegundoNum;

	do {
		switch (menuCalculadora()) {
		case 1:
			primerNumero = ingresarNumero();
			if (primerNumero >= 0) {

				flagPrimerNumero = 1;
			}
			break;
		case 2:
			segundoNumero = ingresarNumero();
			if (segundoNumero >= 0) {

				flagSegundoNumero = 1;
			}
			break;
		case 3:
			if (flagPrimerNumero == 1 && flagSegundoNumero == 1) {
				printf("\nLos numeros ingresados son: (A = %d) y (B = %d)",
						primerNumero, segundoNumero);
				suma = calcularSuma(primerNumero, segundoNumero);
				resta = calcularResta(primerNumero, segundoNumero);
				multiplicacion = calcularMultiplicacion(primerNumero,
						segundoNumero);
				division = calcularDivision(primerNumero, segundoNumero);
				factorialPrimerNum = calcularFactorial(primerNumero);
				factorialSegundoNum = calcularFactorial(segundoNumero);
				flagCalculos = 1;
			} else {
				printf(
						"\nError\n Se necesitan ingresar los dos numeros para calcular");
			}
			break;
		case 4:
			if (flagCalculos == 1) {
				printf("\nEl resultado de %d + %d es igual a: %d", primerNumero,
						segundoNumero, suma);
				printf("\nEl resultado de %d - %d es igual a: %d", primerNumero,
						segundoNumero, resta);
				printf("\nEl resultado de %d * %d es igual a: %d", primerNumero,
						segundoNumero, multiplicacion);
				printf("\nEl resultado de %d / %d es igual a: %.2f",
						primerNumero, segundoNumero, division);
				printf("\nEl factorial de %d es igual a: %d", primerNumero,
						factorialPrimerNum);
				printf("\nEl factorial de %d es igual a: %d", segundoNumero,
						factorialSegundoNum);
				flagPrimerNumero = 0;
				flagSegundoNumero = 0;
				flagCalculos = 0;
			} else {
				printf(
						"\nError \nNo se pueden imprimir los resultados sin hacer los calculos primero");
			}
			break;
		case 5:
			salirCalculadora = 's';
			flagPrimerNumero = 0;
			flagSegundoNumero = 0;
			flagCalculos = 0;
			break;
		default:
			printf("\nDebe ingresar una opcion valida\n");
			break;
		}

	} while (salirCalculadora == 'n' || salirCalculadora == 'N');

	if (salirCalculadora == 's' || salirCalculadora == 'S') {
		salir();
	}
}

