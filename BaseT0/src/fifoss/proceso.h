#pragma once
#include <stdlib.h>
#include <stdio.h>

// Declaramos el struct para el estableciemiento.
struct process;
typedef struct process Process;

struct process
{
    char* NAME;
    int PID;
    char* STATE;
    int IOWAIT;
};


Process* process_init_malloc(char* NAME, int PID, char* STATE, int IOWAIT);
void destroy_prcess(Process* process);
