#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
class Clase1
{
    private:
        
        vector<T> vector_T;

    public:
        Clase1();

        void agregar_elemento(T elemento);

        string procesar() const;
};
