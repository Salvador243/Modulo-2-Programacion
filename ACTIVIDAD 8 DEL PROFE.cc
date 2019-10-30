#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    char votos[5];
    string matriculas[5];
    int totalVotos[3] = {0,0,0};
    char opciones[3]={'a', 'b', 'c'};
    char voto;
    string matricula;
    int aux;

    for(int x =0; x < 5; x++){
        cout<<"ingrese su matricula"<<endl;
        cin >> matricula;
        matriculas [x] = matricula;
        cout<<"vota por alguno a/b/c"<<endl;
        cin >> voto;
        votos [x] = voto;

        switch(voto){
    case 'a':
        totalVotos[0] += 1;
        break;
    case 'b':
        totalVotos[1] += 1;
        break;
    case 'c':
        totalVotos[2] += 1;
        break;
    default:
        break;

        }
    }
    int mayor = totalVotos[0];
    int ganador = 0;

    for (int i = 0; i < 3; i++){

    cout << "Votos de "<< opciones[i] << "son : "<<totalVotos[i] << endl;
        if(mayor < totalVotos[i]){
            mayor = totalVotos[i];
            ganador = i;
        }
        }
    cout<< "el ganador es la opcion "<< opciones[ganador]<< "con total votos " <<totalVotos[ganador]<<endl;
    /*if(totalVotos[0] > totalVotos[1] && totalVotos[0] > totalVotos[2]){
        cout<< "el ganador es la opcion a" << endl;
    }else if(totalVotos[1] > totalVotos[0] && totalVotos[1] > totalVotos[2]){
        cout<< "el ganador es la opcion b" << endl;
    }else if(totalVotos[2] > totalVotos[0] && totalVotos[2] > totalVotos[1]){
        cout<< "el ganador es la opcion c" << endl;
    }else{
    };*/

    return 0;
}
