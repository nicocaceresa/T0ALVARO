#include <stdio.h>	// FILE, fopen, fclose, etc.
#include <stdlib.h> // malloc, calloc, free, etc
#include "../process/process.h"
#include "../queue/queue.h"
#include "../file_manager/manager.h"
#include "proceso.h"
#include "listas_ligadas.h"

int main(int argc, char const *argv[])
{
	/*Lectura del input*/
	char *file_name = (char *)argv[1];
	InputFile *input_file = read_file(file_name);

	/*Mostramos el archivo de input en consola*/
	printf("Nombre archivo: %s\n", file_name);
	printf("Cantidad de procesos: %d\n", input_file->len);
	printf("Procesos:\n");




	/*int N_LOCATIONS;
  	fscanf(input_file, "%d", &N_LOCATIONS);

	Process* proceso_prueba = mesa_init_malloc(table_id, capacity, location_id); */


	for (int i = 0; i < input_file->len; ++i)
	{
		char* NAME = input_file->lines[i][0];
		int PID = 123;
		char* STATE = "READY";
		int IO
		printf("%s \n", NAME);
		/*
		for (int j = 0; j < 7; ++j)
		{
			printf("%s ", input_file->lines[i][7]);
		}
		printf("\n");*/
	}

	input_file_destroy(input_file);
}