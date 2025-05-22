#include "../includes/clase1.hpp"

template <typename T>
Clase1<T>::Clase1()
{
   cout << "Constructor de Clase1" << endl;
}

template <typename T>
void Clase1<T>::agregar_elemento(T elemento)
{
   vector_T = elemento;
}

template <typename T>
vector<T> Clase1<T>::get_vector() const
{
    return vector_T;
}

template <typename T>
string Clase1<T>::procesar() const
{
    if constexpr(is_same<vector_T, vector<double>>)
    {
        return "vec_doubles";
    }
    else if constexpr(is_same<vector_T, vector<string>>)
    {
        return "palabras";
    }
    else if constexpr(is_same<vector_T, vector<vector<int>>)
    {
        return "listas";
    }
    else
    {
        return "desconocido";
    }
}

