#include "../includes/clase2.hpp"

//  comando para compilar manualmente:
// g++ -I../includes ../sources/*.cpp main.cpp -o programa3 -Wall

// comando para ejecutar manualmente:
//    ./programa3

int main()
{
    Clase1<double> vec_double;
    Clase1<string> vec_string;
    Clase1<vector<int>> vec_int;

    vec_double.agregar_elemento(1.3);
    vec_double.agregar_elemento(2.1);
    vec_double.agregar_elemento(3.2);

    vec_string.agregar_elemento("hola");
    vec_string.agregar_elemento("mundo");

    vector<int> lista1 ={1,2};
    vector<int> lista2 ={3,4};

    vec_int.agregar_elemento(lista1);
    vec_int.agregar_elemento(lista2);

    clase2 instancia_clase2;

    instancia_clase2.agregar_etiquetas(vec_double);
    instancia_clase2.agregar_etiquetas(vec_string);
    instancia_clase2.agregar_etiquetas(vec_int);

    instancia_clase2.crear_JSON();

    return 0;

}