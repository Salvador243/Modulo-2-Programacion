#include <iostream>
#include <cstdlib>

using namespace std;
int main(){

    string matricula [2];
     int votoCandidato = 0;
     int candidatoA = 0;
     int candidatoB = 0;
     int candidatoC = 0;
     int votosTotales = 0;

     for(int i = -1; i < 1; i++){
        cout<<"Introduzca su  Matricula"<<endl;
        cin >>matricula [(i + 1)];
        cout<<"Por que candidato desea votar : "<<endl;
        cout<<"Candidato A: [1] "<<endl;
        cout<<"Candidato B: [2] "<<endl;
        cout<<"Candidato C: [3] "<<endl;
        cin >> votoCandidato;

         switch(votoCandidato){
        case 1:
            candidatoA++;
            break;
        case 2:
            candidatoB++;
            break;
        case 3:
            candidatoC++;
            break;
        default:
            cout<<"No pude entender lo que agrego"<<endl;
            break;
        }
    }
        string numeroMayor;
        numeroMayor = matricula[0];

        for (int x = 0; x < 4; x++){
        if (matricula[x]> numeroMayor){
        numeroMayor = matricula[x];
        }
        if(candidatoA > candidatoB && candidatoA > candidatoC){
            cout<<"el Candidato A es el ganador "<<endl;
        }
        else if (candidatoB > candidatoA && candidatoB > candidatoC){
            cout<<"el Candidato B es el ganador" << endl;
        }
        else if(candidatoC> candidatoA && candidatoC > candidatoB){
            cout<< "el Candidato C es el ganador "<< endl;
        }
        votosTotales = (candidatoA+candidatoB+candidatoC);

        cout<<"El Numero Total de Votos son : "<<votosTotales<<endl;
        cout<<"El Numero Total de Votos Para el candidato A son : "<<candidatoA<<endl;
        cout<<"El Numero Total de Votos Para el candidato B son : "<<candidatoB<<endl;
        cout<<"El Numero Total de Votos Para el candidato C son : "<<candidatoC<<endl;

    system("pause");
}
}
