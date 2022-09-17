#include "PadreFamilia.h"
#include <iostream>

using namespace std;

PadreFamilia::PadreFamilia() {
    cout << "Constructor de Persona" << endl;
}

PadreFamilia::~PadreFamilia() {
    cout << "Destructor de Persona" << endl;
}

void PadreFamilia::setNumHijos(int numeroroHijos) {
    nroHijos = numeroroHijos;
}

void PadreFamilia::setNombreHijos(string nomHijos) {
    nombreHijos = nomHijos;
}

