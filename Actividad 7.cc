#include<iostream>
#include<cstdlib>

using namespace std;
int main(){

    int tipoBoleto, precioAdulto,precioKid, precioAnciano,precioTotal;
    int precio;
    int adulto = 0;
    int kid = 0;
    int adultoMayor = 0;
    char intento;


    cout<<"Desea realizar una compra s/n"<<endl;
    cin >>intento;

    do
    {
    cout<<"Que tipo de cliente eres:"<<endl;
    cout<<"Precio Boleto Adulto [1]"<<endl;
    cout<<"Precio Boleto de kids [2]"<<endl;
    cout<<"Precio Boleto Adulto Mayor [3]"<<endl;
    cin >> tipoBoleto;

    switch(tipoBoleto)
    {
    case 1:
        precio = 120;
        cout<<"el precio es de $120 MXN"<<endl;
        adulto ++;
        cout<<"Desea realizar otra compra s/n"<<endl;
        cin >>intento;
        break;
    case 2:
        precio = 60;
        cout<<"el precio es de $60 MXN"<<endl;
        kid ++;
        cout<<"Desea realizar otra compra s/n"<<endl;
        cin >>intento;
        break;
    case 3:
        precio = 40;
        cout<<"el precio es de $40 MXN"<<endl;
        adultoMayor ++;
        cout<<"Desea realizar otra compra s/n"<<endl;
        cin >>intento;
        break;
    default:
        break;
    }

    }
    while(intento == 's');

    cout<<"Gracias por usar nuestros servicios"<<endl;
    cout<<"Los boletos comprados son: "<<endl;
    cout<<"Adultos: "<< adulto <<endl;
    cout<<"kids: "<< kid <<endl;
    cout<<"Adultos Mayores: "<< adultoMayor <<endl;
    precioAdulto = adulto*120;
    precioKid = kid*60;
    precioAnciano=adultoMayor*40;

    precioTotal = precioAdulto + precioAnciano + precioKid;

    cout<<"TOTAL A PAGAR : "<< precioTotal <<endl;

    system("PAUSE");
    return 0;
}
