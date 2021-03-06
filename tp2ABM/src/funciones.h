/*
 * funciones.h
 *
 *  Created on: 15 oct. 2021
 *      Author: fboga
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

typedef struct
{

    int id;
    char nombre[20];
    char apellido[20];
    float sueldo;
    int sector;
    int isEmpty;


}eEmpleado;

#endif /* FUNCIONES_H_ */
int menu();

void mostrarEmpleado(eEmpleado x);

void mostrarEmpleados(eEmpleado vec[], int tam);

void ordenarEmpleados(eEmpleado vec[], int tam);

void inicializarEmpleados(eEmpleado vec[], int tam);

int buscarLibre( eEmpleado vec[], int tam);

int buscarEmpleado(int id,eEmpleado vec[], int tam);

int altaEmpleado(int id, eEmpleado vec[], int tam);

void bajaEmpleado(eEmpleado vec[], int tam);

int menuInformes();

void informarSueldos(eEmpleado vec[], int tam);

void harcodearEmpleados (eEmpleado vec[], int cant);

void modificarEmpleado (eEmpleado vec[], int tam);

void informar(eEmpleado vec[], int tam);
