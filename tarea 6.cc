#include<iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
    int numero;
    int repetir;
    int pares = 0;
    int impares = 0;

    cout <<"Introduzca el numero de numeros a evaluar : "<<endl;
    cin >> repetir ;

    for(int i = 0; i < repetir; i++){

    cout<<"Introduzca el numero a calcular" <<endl;
    cin >> numero;

    if ( (numero % 2) == 0){
        cout<<"ES PAR"<<endl;
        pares ++;

    }
	else if((numero % 2) !=0){
 	    cout<<"ES IMPAR"<<endl;
       impares ++;
    }

    //ejemplo para commits
}
    cout << "El total de numeros pares : " << pares<<endl;
	cout << "El total de numeros impares : " << impares<<endl;

    return 0;
}

