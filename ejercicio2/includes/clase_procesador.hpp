#include "clases_formas.hpp"
#include <cmath>

template<typename T>
class ProcesadorFigura
{
    public:
        static float Area()
        {
            return 0.f;
        }
};

template<>
class ProcesadorFigura<Circulo>
{
    public:
        static float Area(float Radio)
        {
            return M_PI*Radio*Radio;
        }
};

template<>
class ProcesadorFigura<Elipse>
{
    public:
        static float Area(int a, int b)
        {
            return M_PI*a*b;
        }
};

template<>
class ProcesadorFigura<Rectangulo>
{
    public:
        static float Area(float largo, float ancho)
        {
            return largo*ancho;
        }
};