#include "class_derivadas.hpp"

class SaveFlightData
{
    public:

        Posicion pos;

        Presion pres;

        SaveFlightData(const Posicion& q, const Presion& p);

        void serializar(ofstream& out);

        void deserializar(ifstream& in);

        void imprimir() const;
};
