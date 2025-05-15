#include <iostream>
#include <ctime>
#include <memory>
#include <fstream>
using namespace std;

class Imediciones
{
    public:

        virtual void serializar(ofstream& out) = 0;

        virtual void deserializar(ofstream& in) = 0;

        virtual ~Imediciones();
};

class Medicionbase : public Imediciones
{
    protected:

        unique_ptr<float> tiempoMedicion;

    public:

        float getTiempo() const;

        virtual void imprimir() const = 0;

        virtual ~Medicionbase();
};

