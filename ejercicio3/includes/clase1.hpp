#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class Clase1
{
    private:
        
        vector<double> vector_double;
        vector<string> vector_string;
        vector<vector<int>> vector_int;

    public:
        Clase1();

        void agregar_elemento(T elemento);

};
