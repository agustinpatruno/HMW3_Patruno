#include "../includes/clase1.hpp"

template <typename T>
Clase1<T>::Clase1()
{
   cout << "Constructor de Clase1" << endl;
}

template <typename T>
void Clase1<T>::agregar_elemento(T elemento)
{
    if constexpr (is_same_v<T, double>)
    {
        vector_double.push_back(elemento);
    }
    else if constexpr (is_same_v<T, string>)
    {
        vector_string.push_back(elemento);
    }
    else if constexpr (is_same_v<T, vector<int>>)
    {
        vector_int.push_back(elemento);
    }
    else
    {
        cout << "Tipo desconocido" << endl;
    }
    cout << "Elemento agregado: " << elemento << endl;
}
