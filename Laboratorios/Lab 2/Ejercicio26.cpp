
#include <iostream>

using namespace std;
struct complejo{
    string preal;
    string pimaginaria;
};

int main()
{
   struct complejo guardar;
   
   cout <<"Ingrese la parte real del numero complejo: " << endl;
   cin >> guardar.preal;
    cout <<"Ingrese la parte imaginaria del imaginaria complejo con su signo: " << endl;
   cin >> guardar.pimaginaria;
   
  if(guardar.pimaginaria[0] == '+'){
      guardar.pimaginaria[0]='-';
  }else{
      guardar.pimaginaria[0]='+';
  }
    std::cout << "el cojudao del numero complejo es:" << guardar.preal <<" "<<guardar.pimaginaria << std::endl;
   

    return 0;
}

