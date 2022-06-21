#include "Node.h"

Node::Node() {
	tarea = ' ';
	i = NULL;
	numerador = 1;
	numero_tarea = NULL;
}

void Node::set_numero_tarea(string cadena) {
	system("cls");
	imprimir_lista_de_tareas();
	cout << "Ingresa el numero de la tarea que deseas " << cadena << ": ";
	cin >> numero_tarea;
}

void Node::set_tarea() {
	system("cls");
	cout << "Ingrese el nombre de la tarea: ";
	cin.ignore();
	getline(cin, tarea);
}

void Node::agregar_tarea() {
	Tareas.push_back(tarea);
}

void Node::eliminar_tarea() {
	for (auto i = Tareas.begin(); i != Tareas.end(); i++) { //The auto keyword is simply asking the compiler to deduce the type of the variable from the initialization.
		if (numerador == numero_tarea) {
			i = Tareas.erase(i); // El metodo erase devuelve un puntero al nodo siguiente del que se ha eliminado en la lista
			break;
		}
		numerador++;
	}
	numerador = 1;
}

void Node::imprimir_lista_de_tareas() {
	system("cls");
	cout << "\n\tLISTA DE TAREAS\n\n";
	for (auto i = Tareas.begin(); i != Tareas.end(); i++) {
		cout << numerador << ". " << *i << endl;
		numerador++;
	}
	numerador = 1;
	cout << "\n\n\n";
	tarea = _getch();
}

void Node::marcar_como_completada() {
	for (auto i = Tareas.begin(); i != Tareas.end(); i++) {
		if (numerador == numero_tarea) {
			*i = *i + "...COMPLETADO";
			break;
		}
		numerador++;
	}
	numerador = 1;
}