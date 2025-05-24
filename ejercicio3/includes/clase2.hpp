#include "clase1.hpp"
#include "fstream"
#include <nlohmann/json.hpp>
using json = nlohmann::json;

class clase2
{
    private:

        vector<string> etiquetas;
        vector<string> datos;

    public:

        clase2(); // constructor de clase2. imprime por consola un mensaje de que se creo correctamente el objeto

        template<typename T>
        void agregar_etiquetas(Clase1<T> elemen) // guarda la etiqueta y el string asociado en el mismo orden en vectores separados
        {
            datos.push_back(elemen.procesar());

            if (is_same<T, double>::value)
            {
                etiquetas.push_back("vec_doubles");
            }
            else if (is_same<T, string>::value)
            {
                etiquetas.push_back("palabras");
            }
            else if (is_same<T, vector<int>>::value)
            {
                etiquetas.push_back("listas");
            }
            else
            {
                etiquetas.push_back("desconocido");
            }
        }
        void crear_JSON(); // crear un JSON
};
