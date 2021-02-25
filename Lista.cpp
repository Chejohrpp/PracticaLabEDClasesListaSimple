#include<iostream>
#include "lista.h"
#include<string>
using namespace std;

List::List(){
	
}

void List::add(int id){
	Nodo* nuevo = new (Nodo);
	nuevo->id = id;
	if (primero == NULL){
		primero = nuevo;
		primero->sig = NULL;
		ultimo = primero;
	}else{
		nuevo->sig = NULL;
		ultimo->sig = nuevo;
		ultimo = nuevo;
	}
}
int List::eliminar(int id){
	Nodo* tmp = new(Nodo);
	tmp = primero;
	Nodo* ant = new(Nodo);
	ant = NULL;
	if (primero != NULL){
		do
		{
			if (tmp->id == id)
			{
				if (tmp ==primero){
					primero = primero->sig;
					delete(tmp);
				}else if (tmp == ultimo)
				{
					ultimo = ant;
					ultimo->sig= NULL;
					delete(tmp);
				}else{
					ant->sig = tmp->sig;
					delete(tmp);
				}
				cout <<"nodo: "<<id<< " eliminado"<<endl;
				return 0;
			}
			ant = tmp;
			tmp = tmp->sig;
		} while (tmp !=NULL);
	}

	cout <<"nodo: "<<id<< " No encontrado"<<endl;
	return 0;
	
}
int List::buscar(int id){
	Nodo* tmp = new(Nodo);
	tmp = primero;
	if (primero !=NULL)
	{
		do
		{
			if (tmp->id == id)
			{
				cout <<"se encontro el id: "<<id<<endl;
				return 0;
			}			
			tmp = tmp->sig;
		} while (tmp !=NULL);
	}

	cout <<"No se encontro el id: "<<id<<endl;
	return 0;
}

void List::mostrarLista(){
	Nodo* tmp = new(Nodo);
	tmp = primero;
	if (primero !=NULL)
	{
		do
		{
			cout <<"el id es: "<<tmp->id<<endl;
			tmp = tmp->sig;
		} while (tmp !=NULL);
	}
	
}
