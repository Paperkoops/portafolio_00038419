
#include <iostream>

using namespace std;

int main()
{
    int a[10];
    
    std::cout << "Ingrese los 10 numeros" << std::endl;
    
    for(int i = 0; i <= 9; i++)
    {
        cin >> a[i];
       
    }
    
    int suma = 0;
    for(int i = 0; i <= 9; i++)
    {
       suma += a[i];
    }
    double patata = suma;
    double prom = patata/10;
    
    std::cout << "la suma es " << suma << std::endl;
    std::cout << "el promedio es " << prom << std::endl;

    return 0;
}

