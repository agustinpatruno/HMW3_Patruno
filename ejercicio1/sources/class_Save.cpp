#include "../includes/class_Save.hpp"

SaveFlightData::SaveFlightData(const Posicion& q, const Presion& p):pos(Posicion(q.latitud, q.longitud, q.altitud, q.getTiempo())), pres(Presion(p.presionDinamica, p.presionEstatica, p.getTiempo())) {}

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

