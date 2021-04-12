#pragma once
#include "Articulo.h"
class Pelicula : public Articulo
{
private:
	string director;
	string genero;

public:
	Pelicula();
	~Pelicula();
	void llenarInformacion();
	void mostrar();
};

