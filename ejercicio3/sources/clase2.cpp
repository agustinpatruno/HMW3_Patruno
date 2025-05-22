#include "../includes/clase2.hpp"

template <typename T>
clase2<T>::clase2()
{
    cout << "Constructor de clase2" << endl;
}

template <typename T>
void clase2<T>::agregar_etiquetas(Clase1<T> elemen)
{
    datos.push_back(elemen.procesar());

    if (is_same<elemen, vector<double>)
    {
        etiquetas.push_back("vec_doubles");
    }
    else if (is_same<elemen, vector<string>)
    {
        etiquetas.push_back("palabras");
    }
    else if (is_same<elemen, vector<vector<int>>>)
    {
        etiquetas.push_back("listas");
    }
}

template <typename T>
void clase2<T>::crear_JSON()
{
    json dats;

    for (size_t i = 0; i < etiquetas.size()-1; i++)
    {
        dats[etiquetas[i]] = datos[i];
    }
    
    cout << "JSON generado:\n" << dats.dump(4) << endl;

}
