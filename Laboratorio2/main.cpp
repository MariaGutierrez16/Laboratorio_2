#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool compararCadenas(const char* cadena1, const char* cadena2);
int convertirACadena(const char* cadena);
void convertirEnteroACadena(int numero, char* cadena);

int main() {

    int opcion=1;
    cout<<"Bienvenido a la practica 2"<<endl;

    while(opcion!=0)
    {
        cout<< "seleccione una opcion" <<endl;
        cout<< "1.Problema 1"<<endl;
        cout<< "2.Problema 2"<<endl;
        cout<< "3.Problema 3"<<endl;
        cout<< "4.Problema 4"<<endl;
        cout<< "5.Problema 5"<<endl;
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
        case  2:{
            cout<<"Ejecutando el problema 2 ..."<<endl;

            srand(static_cast<unsigned int>(time(0)));  // Inicializa el generador de números aleatorios
            const int tamano = 200;
            char arreglo[tamano];
            int contador[26] = {0};

            // Generar el arreglo de letras aleatorias
            for (int i = 0; i < tamano; ++i) {
                arreglo[i] = 'A' + (rand() % 26);  // Genera una letra mayúscula aleatoria
            }

            // Imprimir el arreglo
            for (int i = 0; i < tamano; ++i) {
                std::cout << arreglo[i];
            }
            std::cout << std::endl;

            // Contar cuántas veces se repite cada letra
            for (int i = 0; i < tamano; ++i) {
                contador[arreglo[i] - 'A']++;  // Incrementa el contador correspondiente a la letra
            }

            // Imprimir el conteo de cada letra
            for (int i = 0; i < 26; ++i) {
                if (contador[i] > 0) {
                    std::cout << static_cast<char>('A' + i) << ": " << contador[i] << std::endl;
                }
            }

        }
           break;
        case 3:{
            cout<<"Ejecutando el problema 3 ..."<<endl;
            const char cadena1[] = "hola";
            const char cadena2[] = "hola";
            const char cadena3[] = "mundo";

            if (compararCadenas(cadena1, cadena2)) {
                std::cout << "cadena1 y cadena2 son iguales." << std::endl;
            } else {
                std::cout << "cadena1 y cadena2 son diferentes." << std::endl;
            }

            if (compararCadenas(cadena1, cadena3)) {
                std::cout << "cadena1 y cadena3 son iguales." << std::endl;
            } else {
                std::cout << "cadena1 y cadena3 son diferentes." << std::endl;
            }

        }
        break;
        case 4:{
            const char cadena[] = "123";
            int resultado = convertirACadena(cadena);
            std::cout << "El número es: " << resultado << std::endl;

        }
        break;
        case 5:{
            int numero = 123;
            char cadena[12];  // Espacio suficiente para un entero con signo
            convertirEnteroACadena(numero, cadena);
            std::cout << "El numero convertido es: " << cadena << std::endl;

        }
        break;

        default:
            if(opcion!=0)
                cout<<"opcion no valida"<<endl;
            break;
        }


    }

}

bool compararCadenas(const char* cadena1, const char* cadena2) {
    // Comparar longitudes
    int longitud1 = 0;
    int longitud2 = 0;

    // Calcular longitud de cadena1
    while (cadena1[longitud1] != '\0') {
        longitud1++;
    }

    // Calcular longitud de cadena2
    while (cadena2[longitud2] != '\0') {
        longitud2++;
    }

    // Si las longitudes son diferentes, las cadenas no son iguales
    if (longitud1 != longitud2) {
        return false;
    }

    // Comparar contenido
    for (int i = 0; i < longitud1; ++i) {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
    }

    return true;
}
int convertirACadena(const char* cadena) {
    int numero = 0;
    while (*cadena) {
        numero = numero * 10 + (*cadena - '0');
        cadena++;
    }
    return numero;
}
void convertirEnteroACadena(int numero, char* cadena) {
    int indice = 0;
    bool esNegativo = false;

    if (numero < 0) {
        esNegativo = true;
        numero = -numero;
    }

    do {
        cadena[indice++] = (numero % 10) + '0';
        numero /= 10;
    } while (numero > 0);

    if (esNegativo) {
        cadena[indice++] = '-';
    }

    cadena[indice] = '\0';

    // Invertir el arreglo para que quede en el orden correcto
    int inicio = 0;
    int fin = indice - 1;
    while (inicio < fin) {
        char temp = cadena[inicio];
        cadena[inicio] = cadena[fin];
        cadena[fin] = temp;
        inicio++;
        fin--;
    }
}
