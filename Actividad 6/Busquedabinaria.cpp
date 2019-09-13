#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int buscar(int low, int high, int num);
int a[] = {1,3,4,5,17,18,31,33};
int main()
{   
int num;
cin >> num;

cout << "esta en la posicion " <<  buscar(0, 7, num) << " del arreglo" << endl; 
if (buscar(0, 7, num) == -1) cout << "(no se encuentra en el arreglo)" << endl;
}

int buscar (int low, int high, int num){
	int mid;
	if (low>high) return (-1);
	mid = (low + high) / 2;
	if (num == a[mid]) return (mid);
	if (num < a[mid]) return (buscar(low, mid-1, num));
	else return (buscar(mid+1, high, num));
}