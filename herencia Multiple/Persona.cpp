#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona() {
    cout << "Constructor de Persona" << endl;
}

Persona::~Persona() {
    cout << "Destructor de Persona" << endl;
}

void Persona::setDni(int doc) {
    dni = doc;
}

void Persona::setNombre(string nom) {
    nombre = nom;
}

void Persona::setDireccion(string dir) {
    direccion = dir;
}

