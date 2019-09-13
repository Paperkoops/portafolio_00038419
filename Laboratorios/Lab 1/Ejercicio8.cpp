#include <iostream>

using namespace std;
void imprimirConteo(int num, int act);
int main()
{
   int num = 0;
   cout<<"Ingrese un numero: "<<endl;
   cin>> num;
   
   imprimirConteo(num, 0);
   
   return 0;
}
void imprimirConteo(int num, int act){
    
    act++;
    if(num==act)
    {
        cout<<act;
    }
    else
    {
        cout<<act;
        imprimirConteo(num,act);
        cout<<act;
    }
}
