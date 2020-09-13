#ifndef CALCULOS_H_
#define CALCULOS_H_

/**
 * brief Menu de opciones para calculadora
 * param sin parametros
 * return retorna la opcion elegida
 **/
int menuCalculadora();


/**
 * brief primer opcion para ingresar numero
 * param sin parametros
 * return retorna  el numero ingresado por el usuario
 **/
int ingresarNumero();


/**
 * brief calcula la suma de dos numeros ingresados por el usuario
 * param el primer numero entero ingresado por el usuario
 * param el segundo numero entero ingresado por el usuario
 * return retorna un entero con el resultado de la suma
 **/
int calcularSuma(int primerNumero, int segundoNumero);


/**
 * brief calcula la resta de dos numeros ingresados por el usuario
 * param el primer numero entero ingresado por el usuario
 * param el segundo numero entero ingresado por el usuario
 * return retorna un entero con el resultado de la resta
 **/
int calcularResta(int primerNumero, int segundoNumero);


/**
 * brief calcula la multiplicacion de dos numeros ingresados por el usuario
 * param el primer numero entero ingresado por el usuario
 * param el segundo numero entero ingresado por el usuario
 * return retorna un entero con el resultado de la multiplicacion
 **/
int calcularMultiplicacion(int primerNumero, int segundoNumero);


/**
 * brief calcula la division de dos numeros ingresados por el usuario
 * param el primer numero entero ingresado por el usuario
 * param el segundo numero entero ingresado por el usuario
 * return retorna un decimal con el resultado de la division
 **/
float calcularDivision(int primerNumero, int segundoNumero);


/**
 * brief calcula el factorial de un numero entero ingresado por el usuario
 * param numero entero ingresado por el usuario
 * return retorna un entero como  resultado del factorial
 **/
int calcularFactorial(int numero);


/**
 * brief manejo del menu en funcion de la opcion seleccionada por el usuario
 * param sin parametros
 * return retorna el resultado de los calculos
 **/
void manejoMenu();


/**
 * brief opcion para salir de la calculadora
 * sin parametros
 * return retorna un caractes 's'
 **/
void salir();

#endif /* CALCULOS_H_ */
