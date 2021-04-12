#pragma once
#include "Articulo.h"
class Libro : public Articulo
{
private:
	string autor;
	string editorial;

public:
	Libro();
	~Libro();
	void llenarInformacion();
	void mostrar();
};

