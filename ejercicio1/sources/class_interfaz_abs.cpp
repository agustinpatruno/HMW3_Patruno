#include "../includes/class_interfaz_abs.hpp"

// defino el destructor de la interfaz

Imediciones::~Imediciones(){}

// metodos de la clase abstracta

Medicionbase::Medicionbase(float tiempo)
{   
    tiempoMedicion = make_unique<float>(tiempo);
}

float Medicionbase::getTiempo() const
{
    return *tiempoMedicion;
}

// destructor de la clase abstracta

Medicionbase::~Medicionbase(){}