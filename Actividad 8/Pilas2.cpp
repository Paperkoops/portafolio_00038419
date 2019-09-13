//Leonardo Antonio Sanchez Albiñana 00038419
//Andres Eduardo Aguilar Barahona

#include <iostream>
using namespace std;

struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

void pop(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
}


void popUltimoVaciar(Pila *s, float *e){
	float u=0;
  if (s->top >= 0){
  	 while (s->top > 0){
  	 	pop(s,&u);
    }
    *e = s->elements[s->top];
    (s->top)--;
  	} 
  	
}

void popUltimoMantener(Pila *s, float *e){
	Pila pilados;
	initialize(&pilados);
	
	float u=0;
  if (s->top >= 0){
  	 while (s->top > 0){
  	 	pop(s,&u);
  	 	push(&pilados, u);
    }
    *e = s->elements[s->top];
    (s->top)--;
    push(&pilados, *e);
  	 while (pilados.top >=0){
  	 	pop(&pilados, &u);
  	 	push(s,u);
    }
  	
}
}



int main() {
    Pila unaPila;
    initialize(&unaPila);
    
    push(&unaPila, 4.5);
    push(&unaPila, 7.8);
    push(&unaPila, 9.6);
    
    float y = 0;
    int opc = 0;
    float valor = 0;
    cout << "Seleccione una opcion" << endl << "1 - Obteber el ultimo valor de la pila y vaciarla" << endl << "2 - Obtener el ultoml valor de la pila y dejarla intacta" << endl;
    cin >> opc;
    if (opc == 1) {
    	popUltimoVaciar(&unaPila, &valor);
    }
    else if (opc == 2){
    	popUltimoMantener(&unaPila, &valor);
    }
    else {
    	cout << "opcion invalida" << endl;
    }
    
    cout << "el valor obtenido es " << valor << endl;
    
      cout << "la pila es: " << endl;
        while(!empty(&unaPila)){
        pop(&unaPila, &y);
        cout << y << endl;
    }
    return 0;
}