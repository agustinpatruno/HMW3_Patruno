#include "../includes/class_interfaz_abs.hpp"

float Medicionbase::getTiempo() const
{
    return *tiempoMedicion;
}

Medicionbase::~Medicionbase(){}