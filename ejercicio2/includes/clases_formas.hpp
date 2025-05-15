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

        Circulo(int x, int y, float R);

        void SetRadio(float R);

        void Set_posx(int x);

        void Set_posy(int y);

        float GetRadio() const;

        int Get_posx() const;

        int Get_posy() const;
   
};

class Elipse
{
    private:
        
        Punto posicion;

        int semieje_a;

        int semieje_b;

    public:

        Elipse(int x, int y, int a, int b);

        void Set_posx(int x);

        void Set_posy(int y);

        void Set_a(int a);

        void Set_b(int b);

        int Get_posx() const;

        int Get_posy() const;

        int Get_a() const;

        int Get_b() const;
};

class Rectangulo
{
    private:
        
        Punto vertice_izq;

        float Ancho;

        float Largo;

    public:

        Rectangulo(int x, int y, float ancho, float largo);

        void Set_verx(int x);

        void Set_very(int y);

        void Set_ancho(float ancho);

        void Set_largo(float largo);

        int Get_verx() const;

        int Get_very() const;

        float Get_ancho() const;

        float Get_largo() const;
};
