#include "class_derivadas.hpp"

class SaveFlightData
{
    public:

        Posicion pos; // objeto de la clase Posicion

        Presion pres; // objeto de la clase Presion

        SaveFlightData(const Posicion& q, const Presion& p); // constructor

        void serializar(ofstream& out); // llama al metodo serializar() de los atributos

        void deserializar(ifstream& in); // llama al metodo deserializar() de los atributos (en orden).

        void imprimir() const; // llama al metodo imprimir() de los atributos.
};
