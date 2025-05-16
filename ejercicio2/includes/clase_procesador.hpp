#include "clases_formas.hpp"
#include <cmath>

template<typename T>
class ProcesadorFigura
{
    public:
        static float Area();
};

template<>
class ProcesadorFigura<Circulo>
{
    public:
        static float Area(float Radio);
};

template<>
class ProcesadorFigura<Elipse>
{
    public:
        static float Area(int a, int b);
};

template<>
class ProcesadorFigura<Rectangulo>
{
    public:
        static float Area(float largo, float ancho);
};


