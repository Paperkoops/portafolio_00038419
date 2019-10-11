//Funcion para eliminar Libros de misterio
void eliminarLibrosMisterio() {
	Verificar:
	Nodo* p = pInicio, * q = NULL;
	while (p != NULL && (p->dato).genero != misterio) {
		q = p;
		p = p->sig;
	}
	if (p == NULL) {
		cout << "Libros a borrar NO existen" << endl;
		return;
	}
	if (q == NULL)
		pInicio = p->sig;
	else
		q->sig = p->sig;
	delete(p);
	cout << "Libros borrados!" << endl;
	if (p != NULL)
		goto Verificar;
}
