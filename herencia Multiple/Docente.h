#pragma once
#include "Persona.h"
#include "PadreFamilia.h"
#include <string>
using namespace std;

class Docente : public Persona,public PadreFamilia { // Docente hereda de multiple , hereda 
// de la clase Persona y PadreFamilia
private:
    string especialidad;
public:
    Docente();
    ~Docente();
    void mostrarDatos();
    void setEspecialidad(string esp);
};




