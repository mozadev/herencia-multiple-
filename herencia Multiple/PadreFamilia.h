#pragma once
#include <string>
using namespace std;

class PadreFamilia {
protected:
    int nroHijos;
    string nombreHijos;
   
public:
    PadreFamilia();
    ~PadreFamilia();
    void setNumHijos(int doc);
    void setNombreHijos(string nom);
 
};
