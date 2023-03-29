#include "proceso.h"
#include <stdlib.h>
#include <stdio.h>


// Inicializa una lista vacía 
Process* mesa_init_malloc(char* NAME, int PID, char* STATE, int IOWAIT)
{
  Process* process = malloc(sizeof(Process));

  *process = (Process) {
    .NAME = NAME,
    .PID = PID,
    .STATE = STATE,
    .IOWAIT = IOWAIT,
  };
  return process;
}


// Insertamos un nuevo elemento al final de la lista 

// Libera todos los recursos asociados a esta lista 
void destroy_process(Process* process)
{
  free(process);
}