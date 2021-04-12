#pragma once
#include <iostream>
#include <string>
using namespace std;

class Articulo
{
protected:
	string ID;
	string nombre;
	int cantCopias;
	int cantDisponibles;
	int precio;

public:
	Articulo();
	~Articulo();
	virtual void llenarInformacion();
	virtual void mostrar();
	void prestar();
	void devolver();
	string getID();
};

