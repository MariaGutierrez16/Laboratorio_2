#include <iostream>
using namespace std;



int main() {

    int opcion=1;
    cout<<"Bienvenido a la practica 2"<<endl;

    while(opcion!=0)
    {
        cout<< "seleccione una opcion" <<endl;
        cout<< "1.Problema 1"<<endl;
        cout<< "0. Salir"<<endl;
        cin>>opcion;


        switch (opcion){
        case 1:{
            cout<<"Ejecutando el problema 1 ..."<<endl;
            int billetes[6] = {0}; // Para almacenar los billetes de 1000, 2000, 5000, 10000, 20000, 50000
            int monedas[4] = {0};  // Para almacenar las monedas de 50, 100, 200, 500
            int faltante = 0;
            int cantdinero;

            cout << "Ingresa el valor de cantidad de dinero: ";
            cin >> cantdinero;

            // Denominaciones de billetes y monedas
            int valores_billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
            int valores_monedas[] = {500, 200, 100, 50};

            // Calcular billetes
            for (int i = 0; i < 6; i++) {
                billetes[i] = cantdinero / valores_billetes[i];
                cantdinero %= valores_billetes[i];
            }

            // Calcular monedas
            for (int i = 0; i < 4; i++) {
                monedas[i] = cantdinero / valores_monedas[i];
                cantdinero %= valores_monedas[i];
            }

            faltante = cantdinero; // Lo que queda es el faltante

            // Mostrar el resultado
            cout << "50000 : " << billetes[0] << endl;
            cout << "20000 : " << billetes[1] << endl;
            cout << "10000 : " << billetes[2] << endl;
            cout << "5000  : " << billetes[3] << endl;
            cout << "2000  : " << billetes[4] << endl;
            cout << "1000  : " << billetes[5] << endl;
            cout << "500   : " << monedas[0] << endl;
            cout << "200   : " << monedas[1] << endl;
            cout << "100   : " << monedas[2] << endl;
            cout << "50    : " << monedas[3] << endl;
            cout << "Faltante: " << faltante << endl;

        }
        break;
        default:
            if(opcion!=0)
                cout<<"opcion no valida"<<endl;
            break;
        }


    }

}

