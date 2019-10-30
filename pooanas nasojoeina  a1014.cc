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
    int opcion;



    while(opcion !=3){

        cout<<"indique operacion a realizar"<<endl;
        cout<<"[1]ciclo definido"<<endl;
        cout<<"[2]ciclo indefinido"<<endl;
        cout<<"[3]salir"<<endl;
        cin>>opcion;

            if(opcion == 3){
                cout<<"break"<<endl;
                break;
            }

    switch(opcion){
    case 1:

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

                    cout<<"desea intentarlo de nuevo"<<endl;

        break;

    case 2:
        break;
    default:
        break;

    }
    }
   /*cout<<"indique operacion a realizar"<<endl;
    cout<<"[1]ciclo definido"<<endl;
    cout<<"[2]ciclo indefinido"<<endl;
    cout<<"[3]salir"<<endl;
    cin>>opcion;*/




    return 0;
}

