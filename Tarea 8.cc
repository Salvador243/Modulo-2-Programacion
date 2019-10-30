#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int filas;
	int columnas;
	do{
		cout << "Indique cantidad de filas" << endl;
		cin >> filas;
		cout << "Indique cantidad de columnas" << endl;
		cin >> columnas;
	}while(filas != columnas);

	int mR[filas][columnas];
	int m1[filas][columnas];
	int m2[filas][columnas];
	cout << "Matriz 1" <<endl;
	for(int f = 0; f < filas;f++){
		for(int c = 0; c < columnas; c++)
		{
			cin>> m1[f][c];
		}
	}
	cout << "Fin Matriz 1" <<endl;
	cout << "Matriz 2" <<endl;
	for(int f = 0; f < filas;f++){
		for(int c = 0; c < columnas; c++)
		{
			cin>> m2[f][c];
		}
	}
	cout << "Fin Matriz 2" <<endl;

	for(int f=0; f<filas; f++){
		for(int c=0; c<columnas; c++){
			mR[f][c] = 0;
		}
	}

	for(int f=0; f<filas; f++)
        for(int c=0; c<columnas; c++)
            for(int z=0; z<filas; ++z)
                mR[f][c] += m1[f][z] * m2[z][c];


                // Fila 1 --> 0   Columa 1 --> 0  z --> 0 ---- mR[0][0] += m1[0][0] * m2[0][0];
                // Fila 1 --> 0   Columa 1 --> 0  z --> 1 ---- mR[0][0] += m1[0][1] * m2[1][0];
                // Fila 1 --> 0   Columa 1 --> 1  z --> 0 ---- mR[0][1] += m1[0][0] * m2[0][1];
                // Fila 1 --> 0   Columa 1 --> 1  z --> 1 ---- mR[0][1] += m1[0][1] * m2[1][1];

	for(int f = 0; f < filas;f++){
		for(int c = 0; c < columnas; c++){
			cout << mR[f][c] << " ";
		}
		cout << "" << endl;
	}

	return 0;
}
