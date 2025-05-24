#include <iostream>
#include <ctime>
#include <memory>
#include <fstream>
using namespace std;

class Imediciones
{
    public:

        virtual void serializar(ofstream& out) = 0;

        virtual void deserializar(ifstream& in) = 0;

        virtual ~Imediciones(); // destructor de la interfaz. 
};

class Medicionbase : public Imediciones
{
    protected:

        unique_ptr<float> tiempoMedicion; // inciso a)

    public:

        Medicionbase(float tiempo); // constructor de la clase abstracta

        float getTiempo() const; // metodo propio de la clase

        virtual void imprimir() const = 0; // metodo que heredan las clases derivadas

        virtual ~Medicionbase(); // destructor de la clase abstracta
};