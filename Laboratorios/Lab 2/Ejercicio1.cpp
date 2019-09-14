#include <iostream>
using namespace std;

int mcm() {
	int mayor, menor;
	if (mayor / menor == 0) {
		cout << "El mcd es: " << menor << endl;
	}
	else {
		menor = mayor;
		cout << "El mcd es: " << menor << endl;
	}
	return menor;
}

int main()
{
	int mayor = 0, menor = 0;
	cout << "ingrese un valor mayor y un valor menor: " << endl;
	cin >> mayor >> menor;

	mcm();
}
