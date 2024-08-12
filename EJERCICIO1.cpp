/*1. Gestión de Productos (8 puntos)
Crear una estructura llamada Producto que tenga las siguientes características: nombre, código,
precio, categoría, y stock. El programa debe constar de un menú que permita:
a) Mostrar listado general de productos registrados hasta ese momento.
b) Mostrar listado de productos existentes, ordenado por precio.
c) Salir del programa.
El programa debe mantenerse en ejecución continuamente hasta que el usuario indique que desea
salir del mismo.
Debe tener valores por defecto que tengan precios desordenados y al pulsar la opción b los ordene.
Utilice los siguientes productos ya predefinidos:
Producto productos[] = {
 {"Laptop", "A123", 1500.00, "Electrónica", 10},
 {"Teléfono", "B456", 800.00, "Electrónica", 20},
 {"Televisor", "C789", 1200.00, "Electrodomésticos", 5},
 {"Refrigeradora", "D012", 1000.00, "Electrodomésticos", 8}
};*/

#include <iostream>

using namespace std;
struct Producto{
	string nombre;
	string codigo;
	float precio;
	string categoria;
	int stock;
};
Producto aux;
	
	Producto productos[4] = {
 {"Laptop", "A123", 1500.00, "Electrónica", 10},
 {"Teléfono", "B456", 800.00, "Electrónica", 20},
 {"Televisor", "C789", 1200.00, "Electrodomésticos", 5},
 {"Refrigeradora", "D012", 1000.00, "Electrodomésticos", 8}
};
void lista(){
	system("cls");
	for(int i=0;i<4;i++){
		cout<<"NOMBRE DEL PRODUCTO: "<<productos[i].nombre<<endl;
		cout<<"CODIGO DEL PRODUCTO : "<<productos[i].codigo<<endl;
		cout<<"PRECIO DEL PRODUCTO : "<<productos[i].precio<<endl;
		cout<<"CATEGORIA DEL PRODUCTO : "<<productos[i].categoria<<endl;
		cout<<"STOCK DEL PRODUCTO : "<<productos[i].stock<<endl;
		cout<<"\n-------------------------\n";
	}
	system("pause");
}
// 2,1,3




Producto copia[4];



void ordenar(){
	system("cls");
	//clonación del arreglo original
	for(int i=0; i<4;i++){
		copia[i]=productos[i];
	}
	
	for(int i=0;i<4-1; i++){
		for( int j=i+1; j<4; j++){
			if(copia[i].precio>copia[j].precio){
			aux=copia[j];
			copia[j]=copia[i];
			copia[i]=aux;
			}

		}
	}
	
		for(int i=0;i<4;i++){
		cout<<"NOMBRE DEL PRODUCTO: "<<copia[i].nombre<<endl;
		cout<<"CODIGO DEL PRODUCTO : "<<copia[i].codigo<<endl;
		cout<<"PRECIO DEL PRODUCTO : "<<copia[i].precio<<endl;
		cout<<"CATEGORIA DEL PRODUCTO : "<<copia[i].categoria<<endl;
		cout<<"STOCK DEL PRODUCTO : "<<copia[i].stock<<endl;
		cout<<"\n-------------------------\n";
	}	
	
	system("pause");
}

int main(){

	char op;
	do{
		cout<<"\n\n-------MENU--------------\n\n";
		cout<<"\na). Mostrar listado general de productos registrados hasta ese momento:\n  ";
		cout<<"\nb).Mostrar listado de productos existentes, ordenado por precio: \n";
		cout<<"\nc). Salir del programa\n";
		cout<<"\nIngrese la opcion: \n"; cin>>op;
		switch (op){
			
			case 'a':
				lista();
				break;
			case 'b':
				ordenar();
				break;
			case 'c':
			cout<<"Saliendo del programa\n";
				break;
			default:
			cout<<"Ingrese la opcion valida\n";			
		}
			
	}while(op!='c');

	return 0;
}