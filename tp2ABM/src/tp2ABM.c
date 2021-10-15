/*
 ============================================================================
 Name        : tp2ABM.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000
#include "funciones.h"



int main()
{
	setbuf(stdout,NULL);

    int nextId = 1001;
    char seguir = 's';
    eEmpleado lista[TAM];
    int flag =0;

    inicializarEmpleados(lista, TAM);




    do
    {

        switch (menu())
        {

        case 1:
            if(altaEmpleado( nextId, lista, TAM) == 1)
            {
                nextId++;
                flag =1;
            }
            break;
        case 2:
            if(flag ==1)
            {
                modificarEmpleado (lista, TAM);
            }
            else
            {

                printf("\nNo dio de alta ningun empleado\n");
            }

            break;
        case 3:
            if(flag ==1)
            {
                bajaEmpleado(lista, TAM);
            }
            else
            {
                printf("\nNo dio de alta ningun empleado\n");
            }
            break;
        case 4:
            if(flag ==1)
            {
                informar(lista, TAM);
            }
            else
            {
                printf("\nNo dio de alta ningun empleado\n");
            }

            break;

        case 5:
        	printf("confirma la salida? s/n: ");
        	        fflush(stdin);
        	         scanf("%c",&seguir);

        	         if(seguir=='s')
        	         {
        	        	 printf("gracias por hoy");
        	        	 seguir='n';
        	         }


        	        break;


            break;

        default:
            printf("opcion no valida\n\n");
        }

    }
    while (seguir =='s');

    return 0;
}
