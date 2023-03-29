// despúes de crear el struct del proceso.
#pragma once
#include "proceso.h"

// Declaramos el struct para un nodo de la lista
struct process_list_node;

// Definimos un alias para el struct nodo.
// La sintaxis es "typedef tipo alias"
typedef struct process_list_node ProcessNode;

// Definimos el struct nodo
struct process_list_node
{
  // El valor que guarda el nodo 
  Process process;
  // Un puntero al siguiente nodo de la lista 
  ProcessNode* next;
};

// Declaramos el struct para la lista
struct process_list;
// Definimos un alias para el struct lista
typedef struct process_list ProcessList;

// Definimos el struct lista
struct process_list
{
  // El primer nodo de la lista 
  ProcessNode* head;
  // El último nodo de la lista 
  ProcessNode* tail;
};

// Declaramos las funciones asociadas

// Inicializa una lista vacía 
ProcessList* process_list_init();

// Inserta un nuevo elemento al final de la lista 
void process_list_append(ProcessList* list, Process process);

// Libera todos los recursos asociados a esta lista 
void process_list_destroy(ProcessList* list);

// Recorre la lista y la imprime
void process_list_print(ProcessList* list, FILE *file);

int final_count(ProcessList* list);

ProcessList* last_item_destroy(ProcessList* list);

Process last_item(ProcessList* list);
