#pragma once
#include <list>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Node {
public:
	Node();
	list<string> Tareas;
	int* i;
	int numerador, numero_tarea;
	string tarea;
	void set_tarea();
	void set_numero_tarea(string);
	void agregar_tarea();
	void eliminar_tarea();
	void imprimir_lista_de_tareas();
	void marcar_como_completada();
};






