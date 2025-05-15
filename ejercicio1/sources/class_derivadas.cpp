#include "../includes/class_derivadas.hpp"

Presion::Presion(float p, float q, float t):presionEstatica(p),presionDinamica(q)
{
    tiempoMedicion = make_unique<float>(t);
}

void Presion::serializar(ofstream& out)
{
    out.write(reinterpret_cast<char*>(&tiempoMedicion), sizeof(float));
    out.write(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    out.write(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}

void Presion::deserializar(ofstream& in)
{
    float tiempo;
    in.read(reinterpret_cast<char*>(&tiempo), sizeof(float));
    

}

void Presion::imprimir() const
{
    cout << "presion estatica: " << presionEstatica << endl;
    cout << "presion dinamica: " << presionDinamica << endl;
}

