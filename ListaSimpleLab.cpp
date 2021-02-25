#include<iostream>
#include "lista.h"
using namespace std;
List lista;

int main(){
	int choice = 0;
	do
	{
		int id = 0;
		cout<<endl;
		cout <<"Lista Simple"<<endl;
		cout <<"Escriba el numero de la eleccion a elegir"<<endl;
		cout <<"1.Insertar"<<endl;
		cout <<"2.Eliminar"<<endl;
		cout <<"3.Buscar"<<endl;
		cout <<"4.Mostrar lista"<<endl;
		cout <<"5.salir"<<endl;
		cin >> choice;
		if (choice==1){
			cout <<"ingrese el id"<<endl;
			cin>>id;
			lista.add(id);
		}else if (choice==2){
			cout <<"ingrese el id"<<endl;
			cin>>id;
			lista.eliminar(id);
		}else if (choice==3){
			cout <<"ingrese el id"<<endl;
			cin>>id;
			lista.buscar(id);

		}else if (choice==4){
			lista.mostrarLista();
		}

	} while (choice!=5);

}