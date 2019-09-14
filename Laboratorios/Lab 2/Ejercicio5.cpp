
#include <iostream>
using namespace std;

void torres(int n, string deTorre, string aTorre, string aux){
    if (n == 1)
    {
        cout << "mover disco 1 de torre " << deTorre <<" a torre " << aTorre<<endl;
        return;
    }else{
    torres(n - 1, deTorre, aux, aTorre);
    cout << "mover disco " << n << " de torre " << deTorre <<" a torre " << aTorre << endl;
    torres(n - 1, aux, aTorre, deTorre);  
    }
}


int main()
{
  int n;
  cout<<"Ingrese el numero de discos"<<endl;
  cin>>n;
    torres(n, "Inicial", "Final", "Auxiliar");
    return 0;
}
