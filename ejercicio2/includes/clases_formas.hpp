#include "iostream"
using namespace std;

class Punto
{
    private:

        int X;

        int Y;
        
    public:

        Punto(int x, int y); // constructor de Punto

        void Setx(int x); // pisa el valor guardado en X por el nuevo valor pasado por parametro

        void Sety(int y); // pisa el valor guardado en X por el nuevo valor pasado por parametro

        int Getx() const; // retorna el valor en X

        int Gety() const; // retorna el valor en Y
        
};

class Circulo
{
    private:
        
        Punto posicion;

        float Radio;

    public:

        Circulo(int x, int y, float R); // constructor de Circulo

        void SetRadio(float R); // pisa el Radio por el nuevo valor pasado por parametro.

        void Set_posx(int x); // pisa la posicion en X por el nuevo valor pasado por parametro.

        void Set_posy(int y); // pisa la posicion en Y por el nuevo valor pasado por parametro.

        float GetRadio() const; // retorna el Radio

        int Get_posx() const; // retorna el valor en X

        int Get_posy() const; // retorna el valor en Y
   
};

class Elipse
{
    private:
        
        Punto posicion;

        int semieje_a;

        int semieje_b;

    public:

        Elipse(int x, int y, int a, int b); // constructor de Elipse

        void Set_posx(int x); // pisa el posicion en X por el nuevo valor pasado por parametro

        void Set_posy(int y); // pisa el posicion en Y por el nuevo valor pasado por parametro

        void Set_a(int a); // pisa el semieje mayor "a" por el nuevo valor pasado por parametro

        void Set_b(int b); // pisa el semieje menor "b" por el nuevo valor pasado por parametro

        int Get_posx() const; // retorna la posicion en X

        int Get_posy() const; // retorna la posicion en Y

        int Get_a() const; // retorna el semieje mayor "a"

        int Get_b() const; // retorna el semieje menor "b"
};

class Rectangulo
{
    private:
        
        Punto vertice_izq;

        float Ancho;

        float Largo;

    public:

        Rectangulo(int x, int y, float ancho, float largo); // constructor de Rectangulo

        void Set_verx(int x); // pisa el posicion en X por el nuevo valor pasado por parametro

        void Set_very(int y); // pisa el posicion en Y por el nuevo valor pasado por parametro

        void Set_ancho(float ancho); // pisa el ancho por el nuevo valor pasado por parametro

        void Set_largo(float largo); // pisa el largo por el nuevo valor pasado por parametro

        int Get_verx() const; // retorna la posicion en X

        int Get_very() const; // retorna la posicion en Y

        float Get_ancho() const; // retorna el ancho

        float Get_largo() const; // retorna el largo
};
