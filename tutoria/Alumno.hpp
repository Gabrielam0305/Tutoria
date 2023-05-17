#include <iostream>
using namespace std;
#ifndef ALUMNO_H
#define ALUMNO_H

class Alumno {
private:
	string nombre;
	int edad;
	double promedio;
public:
	Alumno(string _nombre, int _edad) {
		this->nombre = _nombre;
		this->edad = _edad;
	}
	void setPromedio() {
		int flag = 0, cont = 0;
		double suma = 0.0;
		cout << "Ingrese notas (-1 para salir)" << endl;
		cin >> flag;
		while (flag != -1) {
			suma += (flag + 0.0);
			cont++;
			cout << "Ingrese notas (-1 para salir)" << endl;
			cin >> flag;
		}
		this->promedio = (suma / cont);
	}
	string getNombre() {
		return this->nombre;
	}

	void setNombre(string _nombre) {
		this->nombre = _nombre;
	}

	void setEdad(int _edad) {
		this->edad = _edad;
	}
};



#endif ALUMNO_H