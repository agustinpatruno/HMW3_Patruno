#include "clases_formas.hpp"
#include <cmath>

template<typename T, enable_if_t<is_same<T, Circulo>::value>>
class ProcesadorFigura
{
    public:
      
        static float Area();
};

template<typename T, enable_if_t< is_same<T, Elipse>::value>>
class ProcesadorFigura
{
    public:

        static float Area();
  
};

template<typename T, enable_if< is_same<T, Rectangulo>::value>>
class ProcesadorFigura
{
    public:
        static float Area();
};


