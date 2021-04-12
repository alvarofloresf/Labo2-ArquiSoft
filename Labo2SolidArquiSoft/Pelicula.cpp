#include "Pelicula.h"

Pelicula::Pelicula()
{
}

Pelicula::~Pelicula()
{
}

void Pelicula::llenarInformacion()
{
	cout << "Ingrese los datos de la pelicula" << endl;
	Articulo::llenarInformacion();
	cout << "Director: ";
	cin >> director;
	cout << "Genero: ";
	cin >> genero;
}

void Pelicula::mostrar()
{
	cout << "Pelicula:" << endl;
	Articulo::mostrar();
	cout << "Director: " << director << endl;
	cout << "Genero: " << genero << endl;
}