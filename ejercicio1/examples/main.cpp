#include "../includes/class_Save.hpp"

//  comando para compilar manualmente:
// g++ -I../includes ../sources/*.cpp main.cpp -o programa1 -Wall

// comando para ejecutar manualmnete:
//    ./programa1

// comando para compilar y ejecutar con makefile
// make

int main()
{
    // ejercicio 1)b)

    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3); 
    Presion presion(101.3f, 5.8f, 6.1f);

    cout << "datos de posicion: " << endl;
    posicion.imprimir();
    cout << " datos de precision: " << endl;
    presion.imprimir();

    // creo un objeto SaveFlightData con los objetos anteriores //
  
    SaveFlightData data(posicion, presion);
    cout << " datos del objeto SaveFlightData: " << endl;
    data.imprimir();

    return 0;
}
