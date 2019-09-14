#include <iostream>
using namespace std;

int digitos();
int main()
{
	int n;
	cout << "Ingrese el valor de un numero: " << endl;
	cin >> n;

	digitos();
}


int digitos(int n) {
	int sum;
	if (n % 10 == 0) {
		sum = n % 10 + sum / 10;
		cout << "el numero ingresado tiene : " << sum << " digitos" << endl;
	}
	return sum;
}
