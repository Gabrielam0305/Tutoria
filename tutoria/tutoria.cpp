
#include <iostream>

#include "Alumno.hpp"

int main()
{
    Alumno* a = new Alumno("Andres", 22);
    a->setNombre("Marcela");
    cout << a->getNombre();

}


