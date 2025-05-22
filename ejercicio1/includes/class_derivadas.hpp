#include "class_interfaz_abs.hpp"

class Presion : public Medicionbase
{
    public:

        float presionEstatica;

        float presionDinamica;

        Presion(float p, float q, float t);

        void serializar(ofstream& out) override;

        void deserializar(ifstream& in) override;

        void imprimir() const override;
};

class Posicion : public Medicionbase
{
    public:

        float latitud;

        float longitud;

        float altitud;

        Posicion(float lat, float lon, float alt, float t);

        void serializar(ofstream& out) override;

        void deserializar(ifstream& in) override;

        void imprimir() const override;
};
