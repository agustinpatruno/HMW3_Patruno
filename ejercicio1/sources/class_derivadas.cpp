#include "../includes/class_derivadas.hpp"

// implementacion de los metodos de Presion //

Presion::Presion(float p = 0, float q = 0, float t = 0):presionEstatica(p),presionDinamica(q)
{
    tiempoMedicion = make_unique<float>(t);
}

void Presion::serializar(ofstream& out)
{
    out.write(reinterpret_cast<char*>(&tiempoMedicion), sizeof(float));
    out.write(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    out.write(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}

void Presion::deserializar(ifstream& in)
{
    float tiempo;
    in.read(reinterpret_cast<char*>(&tiempo), sizeof(float));
    *tiempoMedicion = tiempo;

    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}

void Presion::imprimir() const
{
    cout << " tiempo de medicion: " << *tiempoMedicion << endl;
    cout << "presion estatica: " << presionEstatica << endl;
    cout << "presion dinamica: " << presionDinamica << endl;
}

// implementacion de los metodos de Posicion //

Posicion::Posicion(float lat = 0, float lon = 0, float alt = 0, float t = 0): latitud(lat), longitud(lon), altitud(alt)
{
    tiempoMedicion = make_unique<float>(t);
}

void Posicion::serializar(ofstream& out)
{
    out.write(reinterpret_cast<char*>(&tiempoMedicion), sizeof(float));
    out.write(reinterpret_cast<char*>(&latitud), sizeof(float));
    out.write(reinterpret_cast<char*>(&longitud), sizeof(float));
    out.write(reinterpret_cast<char*>(&altitud), sizeof(float));
}

void Posicion::deserializar(ifstream& in)
{
    float tiempo;
    in.read(reinterpret_cast<char*>(&tiempo), sizeof(tiempo));
    *tiempoMedicion = tiempo;

    in.read(reinterpret_cast<char*>(&latitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(float));
}

void Posicion::imprimir() const
{
    cout << " tiempo de medicion: " << *tiempoMedicion << endl;
    cout << " latitud: " << latitud << endl;
    cout << "longitud: " << longitud << endl;
    cout << "altitud: " << altitud << endl;
}