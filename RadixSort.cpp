#include<bits/stdc++.h>
using namespace std;
 
// Funcion para obtener el mayor valor en a[].
int getmax(int a[], int n)
{
  int max = a[0];
  for (int x=1; x<n; x++)
    if (a[x] > max)
      max = a[x];
  return max;
}
 

//Funcion para continuar sorteando dependiendo de los digitos significantes representados por exp (exp es 10 elevado a la i)
void CountSort(int a[], int n, int exp)
{  
  int result[n], i, count[10] = {0};
 
  // contando el numero de ocurrencias de los digitos
  for (i =0; i <n; i++)
    count[(a[i] / exp) % 10]++;
 
  //cambiando la posicion del elemento en count para que aparezca en la posicion actual en el resultado
  for (i =1; i<10; i++)
    count[i] += count[i-1];
 
  // Array resultado
  for (i =n-1; i>= 0; i--)
  {
    result[count[(a[i] / exp) % 10] - 1] = a[i];
    count[(a[i] / exp) % 10]--;
  }
  for (i =0; i <n; i++)
    a[i] = result[i];
}
 
// Radix sort para el arreglo a[] de un tamaño especifico
void radixsort(int a[], int n)
{
  int exp, i;
  i = getmax(a, n);
  for (exp = 1; i/exp > 0; exp *= 10)
    CountSort(a, n, exp);
}
// Main donde se llena el arreglo y se manda a llamar la funcion de sort
int main()
{
  int n;
  cout<<" Ingrese la cantidad de elementos a ordenar: ";
  cin>>n;
    int a[n];
  
  cout<<"\n Ingrese los elemetos: ";
  for(int i =0; i <n; i++)
  {
    cin>>a[i];
  }
    radixsort(a, n);
 
  // Imprimiendo el arreglo resultante
  cout<<"\nLista ordenada: ";
  for (int i = 0; i < n; i++)
    cout<<a[i]<<", ";
  return 0;
}
