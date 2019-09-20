#include <iostream>
#include <stack>

using namespace std;

float popUltimoVaciar(stack<float>*s){
	float x = 0;
  if (s->size() >=1){
  	 while (s->size() > 1){
  	 	s->pop();
    }
    x = s->top();
    s->pop();
  	} 
  	return x;
}

float popUltimoMantener(stack<float> *s){
	stack<float> pilados;
	float x =0;
  if (s->size() >= 1){
  	 while (s->size() > 1){
  	 	pilados.push(s->top());
  	 	s->pop();
    }
  	  x = s->top();
  	 while (pilados.size() >=1){
  	 	s->push(pilados.top());
  	 	pilados.pop();
    }
}
return x;
}



int main() {
	
	stack<float>unaPila;
	
   unaPila.push(4.5);
   unaPila.push(7.8);
   unaPila.push(9.6);
    
    float y = 0;
    int opc = 0;
    float valor = 0;
    cout << "Seleccione una opcion" << endl << "1 - Obteber el ultimo valor de la pila y vaciarla" << endl << "2 - Obtener el ultoml valor de la pila y dejarla intacta" << endl;
    cin >> opc;
    if (opc == 1) {
    	valor = popUltimoVaciar(&unaPila);
    }
    else if (opc == 2){
    	valor = popUltimoMantener(&unaPila);
    }
    else {
    	cout << "opcion invalida" << endl;
    }
    
    cout << "el valor obtenido es " << valor << endl;
    
      cout << "la pila es: " << endl;
        while(!(unaPila.empty())){
        	y = unaPila.top();
        cout << y <<endl;
        unaPila.pop();
    }
    return 0;
}
