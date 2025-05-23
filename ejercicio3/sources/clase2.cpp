#include "../includes/clase2.hpp"

clase2::clase2()
{
    cout << "Constructor de clase2" << endl;
}

void clase2::crear_JSON()
{
    json dats;

    for (size_t i = 0; i < etiquetas.size(); i++)
    {
        dats[etiquetas[i]] = datos[i];
    }
    
    cout << "JSON generado:\n" << dats.dump(4) << endl;

}