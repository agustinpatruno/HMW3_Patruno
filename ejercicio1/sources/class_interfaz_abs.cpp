#include "../includes/class_interfaz_abs.hpp"

Medicionbase::Medicionbase(float tiempo)
{   
    tiempoMedicion = make_unique<float>(tiempo);
}

float Medicionbase::getTiempo() const
{
    return *tiempoMedicion;
}

Medicionbase::~Medicionbase(){}

Imediciones::~Imediciones(){}
