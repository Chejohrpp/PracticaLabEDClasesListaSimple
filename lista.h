#include<iostream>
#include<string>
using namespace std;

class List{
private:
typedef struct nodo{
	int id;
	struct nodo* sig;
}Nodo;
Nodo* primero;
Nodo* ultimo;
public:
	List();
	void add(int id);
	int eliminar(int id);
	int buscar(int id);
	void mostrarLista();

};