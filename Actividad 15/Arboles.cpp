#include <iostream>
using namespace std;
//Se crea el arbol y el nodo
struct nodo {
	int info;
	struct nodo* izq;
	struct nodo* der;
};
typedef struct nodo Nodo;
typedef struct nodo* Arbol;

Arbol crearArbol(int x) {
	Arbol p = new Nodo;
	p->info = x;
	p->izq = NULL;
	p->der = NULL;
	return p;
}
//----Se define la prfundidad del arbol
int profundidad (Arbol a) {
	if (a != NULL) {
		int izq = profundidad(a->izq) + 1;
		int der = profundidad(a->der) + 1;
		if (izq > der) { 
			cout << izq;
		}
		cout << der;
	}
	return -1;
}

//------ Se agregn nodos al arbol ------
void asignarIzq(Arbol a, int unDato) {
	if (a == NULL)
		cout << "Error: arbol vacio" << endl;
	else if (a->izq != NULL)
		cout << "Error: subarbol IZQ ya existe" << endl;
	else
		a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato) {
	if (a == NULL)
		cout << "Error: arbol vacio" << endl;
	else if (a->der != NULL)
		cout << "Error: subarbol DER ya existe" << endl;
	else
		a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a) {
	//solicitar informacion (numero a agregar)
	int numero = 0;
	cout << "Numero a agregar: ";
	cin >> numero;

	Arbol p = a;

	while (true) {
		if (numero == p->info) {
			cout << "Error: " << numero << " ya existe" << endl;
			return;
		}
		else if (numero < p->info) {//ir a la izquierda
			if (p->izq == NULL)
				break;
			else
				p = p->izq;
		}
		else {//ir a la derecha
			if (p->der == NULL)
				break;
			else
				p = p->der;
		}
	}

	//agregar el nuevo nodo
	if (numero < p->info)
		asignarIzq(p, numero);
	else
		asignarDer(p, numero);
}

//------ para recorrer un arbol ------
void preorden(Arbol a) {
	if (a != NULL) {
		cout << " " << a->info;
		preorden(a->izq);
		preorden(a->der);
	}
}
void inorden(Arbol a) {
	if (a != NULL) {
		inorden(a->izq);
		cout << " " << a->info;
		inorden(a->der);
	}
}
void postorden(Arbol a) {
	if (a != NULL) {
		postorden(a->izq);
		postorden(a->der);
		cout << " " << a->info;
	}
}

void recorrerArbol(Arbol a) {
	cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
	cout << "Recorrido IN orden:"; inorden(a); cout << endl;
	cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}

int main() {
	int variable = 0;
	cout << "Inicializando arbol...\nValor contenido en la raiz: ";
	cin >> variable;

	Arbol arbol = crearArbol(variable);

	bool continuar = true;
	do {
		int opcion = 0;
		cout << "Menu: \n\t1) Agregar\n\t2) Recorrer\n\t3) Ver profundidad"
			<< "\n\t4) Salir\n\tOpcion elegida: ";
		cin >> opcion;
		switch (opcion) {
		case 1: agregarNodo(arbol);
			break;
		case 2: recorrerArbol(arbol);
			break;
		case 3: profundidad(arbol);
			break;
		case 4: continuar = false;
			break;
		default: cout << "Opcion erronea!" << endl;
			break;
		}
	} while (continuar);

	return 0;
}
