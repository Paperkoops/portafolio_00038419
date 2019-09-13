#include <iostream>
#include <time.h>
using namespace std;

int mult(int numa, int numb){
    if(numb==1){
        return numa;
    }else{
        
        return numa + mult(numa, numb-1);
    }
}

int main()
{
	int a, b;
	cout << "Ingrese ambos numeros a multiplicar" << endl;
	cin >> a;
	cin >> b;
	cout << "la respuesta es " << mult(a, b) << endl;
}