#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    srand(static_cast<unsigned int>(time(0)));  // Inicializa la semilla para números aleatorios

    const int tamanoArreglo = 200;
    char letras[tamanoArreglo];
    int contadorLetras[26] = {0};  // Arreglo para contar la frecuencia de cada letra

    // Llenar el arreglo con letras aleatorias
    for (int i = 0; i < tamanoArreglo; ++i) {
        letras[i] = 'A' + rand() % 26;  // Genera letras aleatorias de 'A' a 'Z'
    }

    // Imprimir el arreglo de letras
    for (int i = 0; i < tamanoArreglo; ++i) {
        std::cout << letras[i];
    }
    std::cout << std::endl;

    // Contar la frecuencia de cada letra
    for (int i = 0; i < tamanoArreglo; ++i) {
        contadorLetras[letras[i] - 'A']++;  // Incrementa el conteo basado en la letra
    }

    // Imprimir cuántas veces se repite cada letra
    for (int i = 0; i < 26; ++i) {
        if (contadorLetras[i] > 0) {
            std::cout << static_cast<char>('A' + i) << ": " << contadorLetras[i] << std::endl;
        }
    }

    return a.exec();
}
