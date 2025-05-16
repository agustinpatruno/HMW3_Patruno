#include "../includes/clase_procesador.hpp"

template<typename T>
float ProcesadorFigura<T>::Area(){
    return 0.0f;
}

float ProcesadorFigura<Circulo>::Area(float Radio)
{
    return M_PI*Radio*Radio;
}

float ProcesadorFigura<Elipse>::Area(int a, int b)
{
    return M_PI*a*b;
}

float ProcesadorFigura<Rectangulo>::Area(float largo, float ancho)
{
    return largo*ancho;
}