#include "class_interfaz_abs.hpp"

class Presion : public Medicionbase
{
    public:

        float presionEstatica;

        float presionDinamica;

        Presion(float p, float q, float t); // constructor

        void serializar(ofstream& out) override; // metodo derivado de la interfaz

        void deserializar(ifstream& in) override; // metodo derivado de la interfaz

        void imprimir() const override; // metodo derivado de la clase abstracta
};

class Posicion : public Medicionbase
{
    public:

        float latitud;

        float longitud;

        float altitud;

        Posicion(float lat, float lon, float alt, float t); // constructor

        void serializar(ofstream& out) override; // metodo derivado de la interfaz

        void deserializar(ifstream& in) override; // metodo derivado de la interfaz

        void imprimir() const override; // metodo derivado de la clase abstracta
};
