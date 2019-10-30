#include<iostream>
#include<cstdlib>

//ACTIVIDAD 9
//DE SALVA, PARA EL PROFE. CON MI MEJORES DESEOS <3

using namespace std;
int main(){
    int valores[2][2] = {{0,0},{0,0}};
    int numAlumnos;
    int numCalif;
    cout <<"indique la cantidad de alumnos" << endl;
    cin >>numAlumnos;
    cout <<"indique la cantidad de calificaciones por alumno"<<endl;
    cin >> numCalif;
    int sumaAlumnos = 0;
    int sumaAlumno = 0;
    int calificaciones[numAlumnos][numCalif];
    for(int f = 0; f < numAlumnos; f++){
            cout<<"calificaciones del alumno"<<(f+1)<<endl;
        for(int c = 0; c < numCalif; c++){
            cout<<"calificaiones no"<<(c+1)<<endl;
            cin >> calificaciones [f][c];
            sumaAlumno += calificaciones [f][c];
        }
        cout << "promedio de alumno"<<(f+1)<<"es"<<(sumaAlumno/numCalif)<<endl;
        sumaAlumnos += (sumaAlumno/numCalif);
        sumaAlumno = 0;
    }
    cout << "promedio del grupo" << (sumaAlumnos/numAlumnos) <<endl;
    return 0;
}
