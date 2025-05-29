#include "../includes/clase2.hpp"

clase2::clase2()
{
    cout << "Constructor de clase2" << endl;
}

void clase2::crear_JSON()
{
   ostringstream json;

   json << "{" ;

   for (size_t i = 0; i < etiquetas.size(); i++)
    {
        json << "  "<< etiquetas[i] << "\": \"" << datos[i];

        if (i < etiquetas.size() - 1) 
        {
            json << ", ";
        }

        json << "\n";
    }

    json << "\n }";

    string json_str = json.str();
    cout << json_str << endl;
}