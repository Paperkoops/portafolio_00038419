void destruir_pila( ptrPila &p)
{
ptrPila aux;

while( p != NULL)
{
aux = p;
p = aux->sgte;
delete(aux);
}
}
int pop( ptrPila &p )
{
int num ;
ptrPila aux;

aux = p ;
num = aux->nro; // asignamos el primer vamor de la pila

p = aux->sgte ;
delete(aux);

return num;
}
void sacar(void)
{
if(!c)
{
cout<<"\n\nNo hay elementos!!";
return;
}

e=new(pilas);
e=c;
cout<<"\n\nElemento eliminado: " <<e->d;
c=e->a;
delete(e);
}

int main() {
int n = 0, i = 0;
cout<< "Ingrese la expresion de la pila" << endl;
cin >> Pila;

sacar ()
