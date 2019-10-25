#include <iostream>
using namespace std;
struct nodo{
    int dato;
    nodo *sig;
};

class Lista{
private:
    nodo *pInicio;
public:
    Lista(void);
    void mostrarLista(void);
    void mostrarListaInverso(void);
    void mostrarListaInverso(nodo *);
    void agregar(int);
};

Lista::Lista(void) {
    pInicio = NULL;
}

void Lista::agregar(int dato) {
    nodo *p, *q;
    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        p = pInicio;
        q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}
void Lista::mostrarLista(void) {
    nodo *s = pInicio;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}
void Lista::mostrarListaInverso(void) {
    mostrarListaInverso(pInicio);
}
void Lista::mostrarListaInverso(nodo *s) {
    if (s != NULL) {
        mostrarListaInverso(s->sig);
        cout << s->dato << " ";
    }
}
int main(void)
{
    Lista lista;
    lista.agregar(1);
    lista.agregar(2);
    lista.agregar(3);
    lista.agregar(4);
    lista.agregar(5);
    cout << "Items presentes en la lista:" << endl;
    lista.mostrarLista();
    cout << endl << "Items presentes en lista con orden invertido:" << endl;
    lista.mostrarListaInverso();
    return 0;
}
