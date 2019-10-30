#include <iostream>
#include <cstdlib>

using namespace std;
int main(){

    int calificaciones [10];
    int sumaCalificaciones = 0;
    float promedio;
    int valorMaximo, valorMinimo;

    for(int i = -1; i < 9; i++){

        cout<<"ingrese la calificacion : "<< (i+2) <<endl;
        cin >>calificaciones [(i+1)];

        sumaCalificaciones += calificaciones[(i+1)];
    }
        int numeroMayor, numeroMenor;
        numeroMayor = calificaciones[0];
        numeroMenor = calificaciones[0];

        for (int i=0; i<10; i++){
            if (calificaciones[i]> numeroMayor){
            numeroMayor = calificaciones[i];
        }
            if (calificaciones[i]< numeroMenor){
            numeroMenor=calificaciones[i];
        }
    }
    promedio = sumaCalificaciones/10;

    cout <<"la suma de las calificaciones es : " << sumaCalificaciones <<endl;
    cout <<"el numero mayor es : " << numeroMayor <<endl;
    cout <<"el numero menor es : " << numeroMenor <<endl;
    cout <<"el promedio es : " << promedio <<endl;


    return 0;
}
