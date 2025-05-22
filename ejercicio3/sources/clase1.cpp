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
string Clase1<T>::procesar() const
{
    ostringstream oss;
    oss << "[";
    if constexpr(is_same<T, double>::value || is_same<T, string>::value)
    {
        for (size_t i = 0; i < vector_T.size(); ++i) 
        {
            oss << vec[i];
            if (i != vec.size() - 1)
            {
                oss << ",";
            }
        }
    }
    else if constexpr(is_same<T, vector<int>>::value)
    {
        oss << "\n";
        for (vector<int> fila : vector_T)
        { 
            oss << "[";
            for (int elemento : fila) 
            {
                oss << elemento;
                if ( &elemento != fila.back())
                {
                    oss << ",";
                }
            }
            oss << "]," << "\n";
        }
        oss << "\n";
    }
    else
    {
        oss << "desconocido";
    }
    oss << "]";
    return oss.str();
}
