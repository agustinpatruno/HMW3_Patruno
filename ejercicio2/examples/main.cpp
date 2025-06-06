#include "../includes/clase_procesador.hpp"

//  comando para compilar manualmente:
// g++ -I../includes ../sources/*.cpp main.cpp -o programa2 -Wall

// comando para ejecutar manualmente:
//    ./programa2

// comando para compilar y ejecutar con makefile:
// make

int main()
{

    // muestra del funcionamiento de cada clase de formas //
  
    Punto punto1(2,4);
    cout << "informacion del objeto punto" << endl;
    cout << "valor en x: " << punto1.Getx() << endl;
    cout << " valor en y: " << punto1.Gety() << endl;

    Circulo circulo1(1,2, 5.6f);
    cout << "informacion del objeto circulo" << endl;
    cout << "valor en x: " << circulo1.Get_posx() << endl;
    cout << "valor en y: " << circulo1.Get_posy() << endl;
    cout << "radio: " << circulo1.GetRadio() << endl;

    Elipse elipse1(3,6,5,7);
    cout << "informacion del objeto elipse" << endl;
    cout << "valor en x: " << elipse1.Get_posx() << endl;
    cout << "valor en y: " << elipse1.Get_posy() << endl;
    cout << "semieje a: " << elipse1.Get_a() << endl;
    cout << "semieje b: " << elipse1.Get_b() << endl;

    Rectangulo rectangulo1(5, 7, 12.0f, 11.0f);
    cout << "informacion del objeto rectangulo" << endl;
    cout << "valor en x: " << rectangulo1.Get_verx() << endl;
    cout << "valor en y: " << rectangulo1.Get_very() << endl;
    cout << " Largo: " << rectangulo1.Get_largo() << endl;
    cout << " ancho: " << rectangulo1.Get_ancho() << endl;

    // muestra del funcionamiento de la clase ProcesadorFigura para calcular areas //

    float area_circulo = ProcesadorFigura<Circulo>::Area(circulo1.GetRadio());
    float area_elipse = ProcesadorFigura<Elipse>::Area(elipse1.Get_a(), elipse1.Get_b());
    float area_rectangulo = ProcesadorFigura<Rectangulo>::Area(rectangulo1.Get_largo(), rectangulo1.Get_ancho());

    cout << "area del circulo1: " << area_circulo << endl;
    cout << " area del elipse1: " << area_elipse << endl;
    cout << " area del rectangulo1: " << area_rectangulo << endl;

    return 0;
}
