#include "../includes/class_Save.hpp"

SaveFlightData::SaveFlightData(const Posicion& q, const Presion& p):pos(Posicion(q.latitud, q.longitud, q.altitud, q.getTiempo())), pres(Presion(p.presionDinamica, p.presionEstatica, p.getTiempo())) {}
/*
    para solucionar el problema del inciso c), lo que hago es crearme un nuevo objeto de la clase Posicion y Presion. pasandole
    como parametros los almacenados en los objetos recibidos por referencia. Dichos objetos creados los alamceno en los atributos
    pos y pres. 
*/

void SaveFlightData::serializar(ofstream& out)
{
    pos.serializar(out);
    pres.serializar(out);
}

void SaveFlightData::deserializar(ifstream& in)
{
    pos.deserializar(in);
    pres.deserializar(in);
}

void SaveFlightData::imprimir() const
{
    pos.imprimir();
    pres.imprimir();
}