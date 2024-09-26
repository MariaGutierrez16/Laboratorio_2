#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int TAMANO = 200;
    char arreglo[TAMANO];
    int conteo[26] = {0};

    srand(static_cast<unsigned int>(time(0))); // Inicializa la semilla para números aleatorios

    // Generar el arreglo de letras mayúsculas aleatorias
    for (int i = 0; i < TAMANO; ++i) {
        arreglo[i] = 'A' + rand() % 26; // Genera una letra mayúscula aleatoria
    }

    // Imprimir el arreglo generado
    for (int i = 0; i < TAMANO; ++i) {
        std::cout << arreglo[i];
    }
    std::cout << std::endl;

    // Contar cuántas veces se repite cada letra
    for (int i = 0; i < TAMANO; ++i) {
        conteo[arreglo[i] - 'A']++;
    }

    // Imprimir el conteo de cada letra
    for (int i = 0; i < 26; ++i) {
        if (conteo[i] > 0) {
            std::cout << static_cast<char>('A' + i) << ": " << conteo[i] << std::endl;
        }
    }

    return 0;
}
