#include "../includes/clases_formas.hpp"

// metodos de la clase Punto //

Punto::Punto(int x, int y): X(x), Y(y){}

void Punto::Setx(int x)
{
    X = x;
}

void Punto::Sety(int y)
{
    Y = y;
}

int Punto::Getx() const
{
    return X;
}

int Punto::Gety() const
{
    return Y;
}

// metodos de la clase Circulo //

Circulo::Circulo(int x, int y, float R):posicion(x,y),Radio(R){}

void Circulo::SetRadio(float R)
{
    Radio = R;
}

void Circulo::Set_posx(int x)
{
    posicion.Setx(x);
}

void Circulo::Set_posy(int y)
{
    posicion.Sety(y);
}

float Circulo::GetRadio() const
{
    return Radio;
}

int Circulo::Get_posx() const
{
    return posicion.Getx();
}

int Circulo::Get_posy() const
{
    return posicion.Gety();
}

// metodos de la clase elipse //

Elipse::Elipse(int x, int y, int a, int b): posicion(x,y),semieje_a(a),semieje_b(b) {}

void Elipse::Set_posx(int x)
{
    posicion.Setx(x);
}

void Elipse::Set_posy(int y)
{
    posicion.Sety(y);
}

void Elipse::Set_a(int a)
{
    semieje_a = a;
}

void Elipse::Set_b(int b)
{
    semieje_b = b;
}

int Elipse::Get_posx() const
{
    return posicion.Getx();
}

int Elipse::Get_posy() const
{
    return posicion.Gety();
}

int Elipse::Get_a() const
{
    return semieje_a;
}

int Elipse::Get_b() const
{
    return semieje_b;
}

// metodos de la clase rectangulo //

Rectangulo::Rectangulo(int x, int y, float ancho, float largo): vertice_izq(x,y), Ancho(ancho), Largo(largo) {}

void Rectangulo::Set_verx(int x)
{
    vertice_izq.Setx(x);
}

void Rectangulo::Set_very(int y)
{
    vertice_izq.Sety(y);
}

void Rectangulo::Set_ancho(float ancho)
{
    Ancho = ancho;
}

void Rectangulo::Set_largo(float largo)
{
    Largo = largo;
}

int Rectangulo::Get_verx() const
{
    return vertice_izq.Getx();
}

int Rectangulo::Get_very() const
{
    return vertice_izq.Gety();
}

float Rectangulo::Get_ancho() const
{
    return Ancho;
}

float Rectangulo::Get_largo() const
{
    return Largo;
}

