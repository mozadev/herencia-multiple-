#include "Docente.h"
#include <iostream>

using namespace std;

Docente::Docente() {
    cout << "Constructor de Docente" << endl;
}

Docente::~Docente() {
    cout << "Destructor de Docente" << endl;
}

void Docente::mostrarDatos() {
    cout << "nombre: " << nombre << endl;
    cout<<"direccion: " << direccion << endl;
    cout <<"dni: " << dni << endl;
    cout << "numero de hijos: "<<nroHijos << endl;
    cout <<"nombre de los hijos: " << nombreHijos << endl;
    cout <<"especialidad: " << especialidad << endl;
    
}

void Docente::setEspecialidad(string esp) {
    especialidad = esp;
}

