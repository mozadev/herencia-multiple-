#include <string>
using namespace std;

class Persona {
protected:
    int dni;
    string nombre;
    string direccion;
public:
    Persona();
    ~Persona();
    void setDni(int doc);
    void setNombre(string nom);
    void setDireccion(string dir);
};

