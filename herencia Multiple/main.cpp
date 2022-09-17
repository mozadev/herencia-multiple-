#include <iostream>
#include "Docente.h"
using namespace std;

int main()
{
    Docente docente1;
    docente1.setDni(44667788);
    docente1.setNombre("Docente Juan Medrano Suarez");
    docente1.setDireccion("Av. los alamos 23 Jesus Maria");
    docente1.setNumHijos(2);  
    docente1.setNombreHijos("Maria y Luis");
    docente1.setEspecialidad("Ing. de Sistemas");
    docente1.mostrarDatos();

    return 0;
}
