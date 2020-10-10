/*
 * nomina.c
 *
 *  Created on: 24 sep. 2020
 *      Author: Emanuel
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "utn.h"

//isEmpty cuando esta vacio es 0 cuando esta lleno es 1.

int menuEmployees() {
	int opcion = 0;

	printf("\n\t\tMenu Empleados");
	printf("\n\t.---------------------------------------.");
	printf("\n\t| 1)ALTAS                               |");
	printf("\n\t| 2)MODIFICAR                           |");
	printf("\n\t| 3)BAJA                                |");
	printf("\n\t| 4)INFORMAR                            |");
	printf("\n\t°---------------------------------------°");
	printf("\n\tIngrese una opcion: ");
	fflush(stdin);
	scanf("%d", &opcion);
	return opcion;
}




int initEmployees(Employee* list, int len)// terminado
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0)
	{
		for(i = 0; i < len; i++)
		{
			list[i].isEmpty = 0;
		}
		retorno = 0;
	}

	return retorno;
}


int addEmployee(Employee* list, int len, int id, char name[], char lastName[], float salary, int sector)// terminado
{
	int retorno = 0;

	 list[id].id = id;
	    strcpy(list[id].name, name);
	    strcpy(list[id].lastName, lastName);
	    list[id].salary = salary;
	    list[id].sector = sector;
	    list[id].isEmpty = 1;
	    return id;

	return retorno;
}

int findEmployeeById(Employee* list, int len, int id)// terminado
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0)
	{
		for(i = 0; i < len; i++)
		{
			if(list[i].isEmpty == 1 && list[i].id == id)
			{
				return i;
			}
		}
	}
	return retorno;
}

int removeEmployee(Employee* list, int len, int id)
{
	int retorno = -1;
	int posicion = findEmployeeById(list, len, id);
	if(list != NULL && len > 0 && id > 0)
		{
			if(posicion != 1)
			{
				list[posicion].isEmpty = 0;
				retorno = 0;
			}
	}
	return retorno;
}

int sortEmployees(Employee* list, int len, int order)
{
	int retorno = -1;
	int i;
	int j;
	Employee auxiliar;

	if(order == 1)
	{
		if(list != NULL && len > 0)
		{
			for(i = 0;i < len - 1; i++)
			{
				for(j = 0; j < len; j++)
				{
					if(strcmp(list[j].lastName, list[i].lastName) > 0)
					{
						auxiliar = list[j];
						list[j] = list[i];
						list[i] = auxiliar;
					}
					else if(strcmp(list[j].lastName, list[i].lastName) == 0 && strcmp(list[j].sector, list[i].sector) > 0)
					{
						auxiliar = list[j];
						list[j] = list[i];
						list[i] = auxiliar;
					}
				}
			}
			retorno = 0;
		}
	}
	return retorno;
}

int printEmployees(Employee* list, int length)
{
	int retorno = -1;
	int i;
	if(list != NULL && length > 0)
	{
		for(i = 0;i < length;i++)
		{
			if(list[i].isEmpty == 1)
			{
				printf("\nID Empleado: %d\nNombre: %s\nApellido: %s\nSueldo: %.2f\nSector: %d\n\n",
						list[i].id,list[i].name,list[i].lastName,list[i].salary,list[i].sector);
			}

		}
		retorno = 0;
	}
	return retorno;
}

int findEmpty(Employee* list, int len, int *position)// terminado
{
	int retorno = -1;
	int i;
	if(list != NULL && len > 0 && position != NULL)
	{
		for(i = 0; i < len; i++)
		{
			if(list[i].isEmpty == 0)
			{
				*position = i;
				retorno = 0;
				break;
			}
		}
	}

	return retorno;
}

int enterEmployeeData(Employee list, int len, int i)
{
	int retorno = -1;
	int espacioLibre;
	int lugar = findEmpty(list,len, &i);

	if(lugar != -1)
	{
		Employee empleado;
			empleado.id = i;
			printf("Ingrese el nombre del trabajador: ");
			fflush(stdin);
			gets(empleado.name);
			printf("Ingrese el apellido deltrabajador: ");
			fflush(stdin);
			gets(empleado.lastName);
			printf("Ingrese el salario del trabajador: ");
		    scanf("%f", &empleado.salary);
		    printf("Ingrese el sector del trabajador: ");
		    scanf("%d", &empleado.sector);
		    empleado.isEmpty = 1;
			retorno = 0;
	}
	else
	{
		printf("\nNo se pueden cargar mas empleados ");
	}
	return retorno;

}


