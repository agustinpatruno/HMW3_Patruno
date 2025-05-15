#include "iostream"
using namespace std;


class Punto
{
    private:

        int X;

        int Y;
        
    public:

        Punto(int x, int y);

        void Setx(int x);

        void Sety(int y);

        int Getx() const;

        int Gety() const;
        
};

class Circulo
{
    private:
        
        Punto posicion;

        float Radio;

    public:

        Circulo(float x, float y, float R);

        void SetRadio(float R);

        void Set_posx(float x);

        void Set_posy(float y);

        float GetRadio() const;

        float Get_posx() const;

        float Get_posy() const;
   
};


class elipse
{
    private:
        
        Punto posicion;

        int semieje_a;

        int semieje_b;

    public:

        elipse(float x, float y, float a, float b);

        void Set_posx(float x);

        void Set_posy(float y);

        void Set_a(float a);

        void Set_b(float b);

        float Get_posx() const;

        float Get_posy() const;

        float Get_a() const;

        float Get_b() const;
};

class rectangulo
{
    private:
        
        Punto vertice_izq;

        float Ancho;

        float Largo;

    public:

        rectangulo(float x, float y, float ancho, float largo);

        void Set_verx(float x);

        void Set_very(float y);

        void Set_ancho(float ancho);

        void Set_largo(float largo);

        float Get_verx() const;

        float Get_very() const;

        float Get_ancho() const;

        float Get_largo() const;
};

template<typename T, enable_if_t<is_same<T, Circulo>::value>>
class ProcesadorFigura
{
    public:
      
        static float Area();
};

template<typename T, enable_if_t< is_same<T, elipse>::value>>
class ProcesadorFigura
{
    public:

        static float Area();
  
};

template<typename T, enable_if< is_same<T, rectangulo>::value>>
class ProcesadorFigura
{
    public:
        static float Area();
};
