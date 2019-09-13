#include <iostream>
using namespace std;
void calculos (int num, int *doble, int *triple)
{
	*doble = 2 * num;
	*triple = 3 * num;
	
	cout << "direcciones de las variables en calculos" << endl;
	cout << &num << " " << doble << " " << triple << endl;
}
int main()
{
	int numero = 2, doble = 0, triple = 0;
	calculos(numero, &doble, &triple);
	
	cout << "el doble de 2 es " << doble << endl;
	cout << "el doble de 2 es " << triple << endl;
	
	cout << "direcciones de las variables en main" << endl;
	cout << &numero << " " << &doble << " " << &triple << endl;
	return 0;
}