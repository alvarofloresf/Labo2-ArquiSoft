#pragma once
#include "Libro.h"
#include "Pelicula.h"
#include "CDMusica.h"
#include "Articulo.h"

class Administracion
{
private:
	int numArticulos;
	Articulo* listaArticulos[50];

public:
	Administracion();
	~Administracion();
	void agregarArticulo();
	void mostrarArticulos();
	void rentarArticulo();
	int getPosArticulo(string id);
	void devolverArticulo();
};

