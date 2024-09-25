int billetes[6] = {0}; // Para almacenar los billetes de 1000, 2000, 5000, 10000, 20000, 50000
int monedas[4] = {0};  // Para almacenar las monedas de 50, 100, 200, 500
int faltante = 0;
int cantdinero;

cout << "Ingresa el valor de cantidad de dinero: ";
cin >> cantdinero;

// Llamada a la función para calcular billetes y monedas
calcular(cantdinero, billetes, monedas, &faltante);

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

return 0;
}
