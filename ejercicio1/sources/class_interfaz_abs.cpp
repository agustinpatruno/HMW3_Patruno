#include "../includes/class_interfaz_abs.hpp"

Medicionbase::Medicionbase(){cout << "se instancia un objeto de las clases derivadas" << endl;}

float Medicionbase::getTiempo() const
{
    return *tiempoMedicion;
}

Medicionbase::~Medicionbase(){}

Imediciones::~Imediciones(){}
