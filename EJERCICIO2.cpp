/*2. Rotar Columnas de una Matriz (4 puntos):
Escriba un programa que genere una matriz aleatoria de 4x4 con números entre 1 y 9, y luego rote las
columnas de la matriz una posición a la derecha. El programa debe mostrar la matriz original y la
matriz rotada en horizontal.
Ejemplo de Salida:
Matriz inicial generada aleatoriamente:
1 2 3 4      
5 6 7 8
9 1 2 3
4 5 6 7
Matriz rotada:
4 1 2 3
8 5 6 7
3 9 1 2
7 4 5 6
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
int matriz[4][4];
int temp;
int menor=1;
int mayor=9;

	srand(time(0));
	for(int i=0; i<4;i++){
		for(int j=0;j<4;j++){
			matriz[i][j]=rand()%(mayor-menor +1)+menor;
		}
	}
	

	cout<<"\nMATRIZ  ORIGINAL\n";
 for(int i=0; i<4;i++){
 	for(int j=0; j<4;j++){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<"\n";
 }

	
	// Rotar las columnas una posición a la derecha
    for (int i = 0; i < 4; i++) {
        temp = matriz[i][4-1]; // Guardar la última columna
        for (int j = 4-1; j > 0; j--) {
            matriz[i][j] = matriz[i][j-1];
        }
        matriz[i][0] =temp; // Asignar la última columna a la primera posición
    }
	 
	 cout<<"\t";
	 
	 cout<<"\nMATRIZ  ROTADA\n";
 for(int i=0; i<4;i++){
 	for(int j=0; j<4;j++){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<"\n";
 }
	
	return 0;
}