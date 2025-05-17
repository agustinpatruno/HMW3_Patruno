#include "../includes/class_Save.hpp"

/*
    comando para compilar:
        g++ -I../includes *.cpp -o programa
    comando para ejecutar:
        ./programa

*/

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
}
