#ifndef CLASE1_HPP
#define CLASE1_HPP

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
class Clase1
{
    private:
        
        vector<T> vector_T;

    public:
        Clase1();

        void agregar_elemento(T elemento);

        string procesar() const;
};

template <typename T>
Clase1<T>::Clase1()
{
   cout << "Constructor de Clase1" << endl;
}

template <typename T>
void Clase1<T>::agregar_elemento(T elemento)
{
   vector_T.push_back(elemento);
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
            oss << vector_T[i];
            if (i != vector_T.size() - 1)
            {
                oss << ",";
            }
        }
    }
    else if constexpr(is_same<T, vector<int>>::value)
    {
        for (vector<int> fila : vector_T)
        { 
            oss << "[";
            for (size_t i = 0; i < fila.size(); ++i) 
            {
                oss << fila[i];
                if ( i != fila.size() -1)
                {
                    oss << ",";
                }
            }
            oss << "],";
        }
        
    }
    else
    {
        oss << "desconocido";
    }
    oss << "]";
    return oss.str();
}

#endif
