
#include <iostream>
#include <algorithm>
#include <math.h>


using namespace std;

float mediana(float arreglo[], int tama);

int main()
{
    int tamano, cont;
    float num;
    cout << "Cuantos digitos ingresará?" << endl;
    cin >> tamano;
    cont = tamano;
    float nums[tamano];
    cout << "Ingrese los digitos: " << endl;
    while(cont > 0){
        cont--;
        cin >> num;
        nums[cont] = num;
    }
    
    int nn = sizeof(nums)/sizeof(nums[0]); 
  
    sort(nums, nums+nn);
    cout << "Digitos ordenados:  " << endl;
    for (int p = 0; p < nn; ++p){
        cout << nums[p] << " "; 
        
    }
    cout << endl;
    
    cout << "La mediana es:  " << mediana(nums, tamano) << endl;
    
    return 0;
}

float mediana(float arreglo[], int tama)
{
    int posicion;
    float median;
    if(tama%2 == 0)
    {
        posicion = tama/2;
        median = (arreglo[posicion-1] + arreglo[posicion]) / 2;
    }
    else
    {
        posicion = ceil(tama/2);
        median = arreglo[posicion];
    }
    
    return median;
}
