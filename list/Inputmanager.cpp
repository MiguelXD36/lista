#include "Inputmanager.h"

using namespace std;

Inputmanager::Inputmanager() {
	Control = 1;
	opcion = NULL;
	N1 = new Node;
	eliminar = "eliminar";
	completada = "marcar como completada";
}

void Inputmanager::run() {
	while (Control) {
		Show_main_menu();
		set_option();
		evaluate_main_menu_input();
	}
}

void Inputmanager::Show_main_menu() {
	system("cls");
	cout << "\n *Acabas de ingresar a MAHG, digite el numero de la la tarea que necesitas ejecutar:*\n\n1. Agregar tareas a la lista.\n2. Eliminar tareas de la lista.\n3. Ver lista de tareas\n4. Marcar tareas como completadas.\n5. Salir del programa.\n\n";
}

void Inputmanager::set_option() {
	cin >> opcion;
}

void Inputmanager::evaluate_main_menu_input() {
	switch (opcion) {
	case 1:
		N1->set_tarea();
		N1->agregar_tarea();
		break;
	case 2:
		N1->set_numero_tarea(eliminar);
		N1->eliminar_tarea();
		break;
	case 3:
		N1->imprimir_lista_de_tareas();
		break;
	case 4:
		N1->set_numero_tarea(completada);
		N1->marcar_como_completada();
		break;
	case 5:
		Control = 0;
		break;
	default:
		break;
	}
}