#include<bits/stdc++.h>
using namespace std;
 struct cuenta{
     string tipo;
     string propietario;
     long long int monto;
 };
 
// Funcion para obtener el mayor valor en a[].
int getmax(cuenta a[], int n)
{
  long long int max = a[0].monto;
  for (int x=1; x<n; x++)
    if (a[x].monto > max)
      max = a[x].monto;
  return max;
}
 

//Funcion para continuar sorteando dependiendo de los digitos significantes representados por exp (exp es 10 elevado a la i)
void CountSort(cuenta a[], int n, int exp)
{  
  cuenta result[n];
  int i, count[10] = {0};
 
  // contando el numero de ocurrencias de los digitos
  for (i =0; i <n; i++)
    count[(a[i].monto / exp) % 10]++;
 
  //cambiando la posicion del elemento en count para que aparezca en la posicion actual en el resultado
  for (i =1; i<10; i++)
    count[i] += count[i-1];
 
  // Array resultado
  for (i =n-1; i>= 0; i--)
  {
    result[count[(a[i].monto / exp) % 10] - 1] = a[i];
    count[(a[i].monto / exp) % 10]--;
  }
  for (i =0; i <n; i++)
    a[i] = result[i];
}
 
// Radix sort para el arreglo a[] de un tamaño especifico
void radixsort(cuenta* a[], int n)
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
  cout<<" Ingrese el número de cuentas a crear: ";
  cin>>n;
    cuenta a[n];
  
  for(int i=0; i<n; i++)
	{
		cout<<"Ingrese el nombre del propietario: ";
		cin>>a[i].propietario;
		cout<<"Ingrese el tipo de cuenta: ";
		cin>>a[i].tipo;
		cout<<"Ingrese el monto en $: ";
		cin>>a[i].monto;
	}
    radixsort(&a, n);
 /*
  // Imprimiendo el arreglo resultante
  cout<<"\nLista ordenada: ";
  for (int i = 0; i < n; i++)
    cout<<a[i].monto<<", ";*/
    
    for(int i=0; i<n; i++)
	{	    
		cout<<"Cuenta #: "<<i<<endl;
        cout<<"Nombre del propietario: "<<a[i].propietario<<endl;
        cout<<"Tipo de cuenta: "<<a[i].tipo<<endl;
        cout<<"Monto: $"<<a[i].monto<<endl;
        cout<<"--------------------------------------------------------------"<<endl;
	}
	
  return 0;
}
