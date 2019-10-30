#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
    int arreglo = 0;
    int repeat = 0;
    int pasar = 0;
    char sistema;
    int password;
    int next = 0;
    int operacion;
    string nombreCliente[repeat];
    string telefonoCliente[repeat];
    string correoCliente[repeat];
    string reservacionCliente[repeat];
    int paquete;
    char paisPaquete1 = {'p', 'r', 'l'};
    int adultos;
    int niños, precio;



    //string user = salva243;
    cout<<"ingrese password"<<endl;
    cin >> password;
    while(password != 243){
        cout<<"ingrese password nuevamente"<<endl;
        cin>> password;

    }

    cout<<"Desea entrar al sistema [si = s][ no = n]"<<endl;
    cin >> sistema;

    if(sistema == 's'){
        cout<<"que operacion desea realizar?"<<endl;
        cout<<"Hacer una venta = 1"<<endl;
        cout<<"Salir del sistema = 2"<<endl;
        cin >>operacion;

                switch(operacion){
            case 1:
                cout<<"ingrese el nombre del cliente"<<endl;
                cin >>nombreCliente[arreglo];
                cout<<"ingrese el telefono del cliente"<<endl;
                cin >>telefonoCliente[arreglo];
                cout<<"ingrese el correo del cliente"<<endl;
                cin >>correoCliente[arreglo];
                cout<<"ingrese el numero de reservaciones"<<endl;
                cin >>reservacionCliente[arreglo];
                repeat += 1;

                cout<<"que paquete desea comprar"<<endl;
                cout<<"Europa = 1"<<endl;
                cout<<"nacional = 2"<<endl;
                cout<<"crucero = 3"<<endl;
                cin >>paquete;
                break;
                        switch(paquete){
                    case 1:
                        cout<<"seleccione un destino"<<endl;
                        cout<<"PARIS = p "<<endl;
                        cout<<"ROMA" = r<<endl;
                        cout<<"LONDRES = l"<<endl;
                        cin >> paisPaquete1;

                            switch(paisPaquete1){
                        case 'p':
                            cout<<"cuantos adultos van"<<endl;
                            cin >> adultos;
                            cout<<"cuantos niños van"<<endl;
                            cin >> niños;
                            precio = adultos *
                            }




        }//switch 2
    case 2;
        }//case 1
        cout<<"HASTA LUEGO"<<endl;
        break;
    }//if
    else{

    }//else

return 0;
}
