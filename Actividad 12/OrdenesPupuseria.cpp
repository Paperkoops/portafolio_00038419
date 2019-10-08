#include <iostream>
#include <vector>
using namespace std;

struct TOrden {
	int revueltas;
	int frijolConQueso;
	int queso;
	int arroz;
};
typedef struct TOrden Orden;

Orden solicitarOrden() {
	Orden p;
	int op = 0;
	cout << "Cantidad de pupusas revueltas a ordenar: "; cin >> p.revueltas;
	cout << "Cantidad de pupusas de frijol con queso a ordenar: ";   cin >> p.frijolConQueso;
	cout << "Cantidad de pupusas de queso a ordenar: "; cin >> p.queso;
	cout << "De que desea que sean sus pupusas? " << endl;
	cout << "1) Arroz" << endl << "2) Maiz" << endl
		<< "Elija una opcion: ";
		cin >> p.arroz;

	return p;
}

//Mostrando la orden ingresada
void mostrarOrden(Orden p) {
	cout << "Cantidad de pupusas revueltas a ordenar: "<< p.revueltas<<endl;
	cout << "Cantidad de pupusas de frijol con queso a ordenar: "<< p.frijolConQueso<<endl;
	cout << "Cantidad de pupusas de queso a ordenar: " <<p.queso<<endl;
	cout << "Las pupusas estaran hechas de ";
	if (p.arroz == 1)
		cout << "Arroz";
	else 
		cout << "Maiz";
	cout << endl;
}

vector<Orden> lista;

void agregarOrden() {
	Orden p = solicitarOrden();
	bool continuar = true;
	do {
		int opcion = 0;
		cout << "1) Traer orden primero " << endl << "2) Traer primero bebidas"
			<< endl << "elija una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: lista.insert(lista.begin(), p);
			cout << "Se entregaran las bebidas al mismo tiempo de la comida" << endl;
			continuar = false;
			break;
		case 2: lista.push_back(p);
			cout << "Se entregaran las bebidas antes de la comida" << endl;
			continuar = false;
			break;
		default: cout << "Opcion invalida" << endl;
			break;
		}
	} while (continuar);
}

void mostrarLista() {
	for (int i = 0; i < lista.size(); i++)
		mostrarOrden(lista[i]);
}

int main() {
	cout << "Bienvenido!" << endl;

	bool continuar = true;
	do {
		int opcion = 0;
		cout << "Menu:" << endl << "1) Agregar Orden" << endl << "2) Ver Orden"
			<< endl << "3) Salir" << endl << "Elija una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: cout << "Agregando la orden: " << endl;
			agregarOrden();
			break;
		case 2: cout << "Mostrando su orden: " << endl;
			mostrarLista();
			break;
		case 3: continuar = false;
			break;
		default: cout << "Opcion invalida" << endl;
			break;
		}
	} while (continuar);

	return 0;
}
