#include <iostream>
using namespace std;
struct nodo{
    int dato;
    nodo *sig;
};
class ListaSimple
{
private:
    nodo *inicio;

public:
    ListaSimple();
    nodo *CrearNodo(int);
    void insertarFinal(int);
    bool eliminar(int);
    void mostrar();
    int contador(int);
};

ListaSimple::ListaSimple(){
    this->inicio = NULL;
}

nodo *ListaSimple::CrearNodo(int dato){
    nodo *nuevo = new (nodo);
    nuevo->dato = dato;
    nuevo->sig = NULL;
    return nuevo;
}

void ListaSimple::insertarFinal(int dato){
    nodo *nuevo = ListaSimple::CrearNodo(dato);
    nodo *aux;
    if (this->inicio){
        aux = this->inicio;
        while (aux->sig){
            aux = aux->sig;
        }
        aux->sig = nuevo;
        nuevo->sig = NULL;
    }else{
        nuevo->sig = this->inicio;
        this->inicio = nuevo;
    }
}

bool ListaSimple::eliminar(int dato){
    nodo *aux = this->inicio;
    nodo *saltarin;
    nodo *salto;
    int contador = 0;

    while (aux && aux->dato != dato){
        aux = aux->sig;
        contador++;
    }
    if (aux){
        if (contador == 0){
            saltarin = aux->sig;
            aux->sig = NULL;
            this->inicio = saltarin;
            delete (aux);
        }else{
            salto = this->inicio;
            saltarin = aux->sig;
            while (salto->sig->dato != dato){
                salto = salto->sig;
            }
            aux->sig = NULL;
            salto->sig = saltarin;
            delete (aux);
        }
        return true;
    }else{
        return false;
    }
}

void ListaSimple::mostrar(){
    nodo *salto = this->inicio;
    while (salto){
        cout << salto->dato << " ";
        salto = salto->sig;
    }
    cout << endl;
}

int ListaSimple::contador(int dato){
    int contador=0;
    nodo *salto = this->inicio;
    while (salto){
        if(dato==salto->dato){
            contador++;
        }
        salto = salto->sig;
    }
    return contador;
}

int main(){
    ListaSimple lista;
    int contador, dato, eliminar;
    
    do{
        cout << "Nuevo numero para agregar a la lista: [Ingrese 0 para terminar]";
        cin>>dato;
        if(dato > 0){
            lista.insertarFinal(dato);
        }
    }while(dato > 0);
    
    cout << "¿Que numero desea eliminar?";
    cin >> eliminar;
    contador = lista.contador(eliminar);
    cout << "Lista original: " << endl;
    lista.mostrar();
    while(contador > 0){
        lista.eliminar(eliminar);
        contador--;
    }
    cout << "Resultado" << endl;
    lista.mostrar();
    return 0;
}
