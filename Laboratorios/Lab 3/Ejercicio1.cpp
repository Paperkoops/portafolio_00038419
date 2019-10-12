#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarDatos(int b[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << b[i] << " ";
		cout << endl;
	}
}
void mostrarPar(int b[], int tam) {
	for (int i = 0; i < tam; i++) {
		if (b[i] % 2 == 0) {
			cout << b[i] << " ";
			cout << endl;
		}
	}
}
void mostrarImpar(int b[], int tam) {
	for (int i = 0; i < tam; i++) {
		if (b[i] % 2 != 0) {
			cout << b[i] << " ";
			cout << endl;
		}
	}
}
void invertir(int b[], int tam) {
	for (int i = 11; i >= 0; i--) {
		cout << b[i] << " ";
		cout << endl;
	}

}
int main()
{
	const int lista = 12;
	int a[lista];
	srand(time(0));
	for (int i = 0; i < lista; i++)
		a[i] = 1 + rand() % 100;

	cout << "Inicializando..." << endl;
	bool continuar = true;
	do {
		int opcion = 0;
		cout << "Menu: \n\t1) Mostrar los datos\n\t2) Ver numeros pares"
			<< "\n\t3) Ver numeros impares \n\t4) Ver sentido inverso  \n\tOpcion elegida: ";
		cin >> opcion;
		switch (opcion) {
		case 1: cout << "Mostrando valores de la lista" << endl;
			mostrarDatos(a, lista);
			break;
			case 2: cout << "Valores pares" << endl;
				mostrarPar(a, lista);
				break;
			case 3: cout << "Valores impares" << endl;
				mostrarImpar(a, lista);
				break;
			case 4: cout << "invirtiendo" << endl;
				invertir(a, lista);
				break;
			default: cout << "Opcion erronea!" << endl;
				break;
		}
	} while (continuar);
}
