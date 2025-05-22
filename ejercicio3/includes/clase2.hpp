#include "clase1.hpp"
#include "fstream"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

template<typename T>
class clase2
{
    private:

        vector<string> etiquetas;
        vector<string> datos;

    public:

    clase2(); // constructor de clase2. imprime por consola un mensaje de que se creo correctamente el objeto

    void agregar_etiquetas(Clase1<T> elemen);

    void crear_JSON();
};
