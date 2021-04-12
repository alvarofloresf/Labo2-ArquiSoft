#include "Administracion.h"

Administracion::Administracion()
{
	this->numArticulos = 0;
}

Administracion::~Administracion()
{
}

void Administracion::agregarArticulo()
{
	int auxiliar;
	cout << "Ingrese el tipo de articulo " << endl;
	cout << "1. Libro" << endl;
	cout << "2. Pelicula" << endl;
	cout << "3. CDMusical" << endl;
	cin >> auxiliar;
	if (auxiliar == 1)
	{
		listaArticulos[numArticulos] = new Libro();
		listaArticulos[numArticulos]->llenarInformacion();
	}
	if (auxiliar == 2)
	{
		listaArticulos[numArticulos] = new Pelicula();
		listaArticulos[numArticulos]->llenarInformacion();
	}
	if (auxiliar == 3)
	{
		listaArticulos[numArticulos] = new CDMusica();
		listaArticulos[numArticulos]->llenarInformacion();
	}
	numArticulos++;
}

void Administracion::rentarArticulo()
{
	string idBuscado;
	cout << "ingrese el ID del articulo";
	cin >> idBuscado;
	int posicion = getPosArticulo(idBuscado);
	if (posicion == -1)
		cout << "El articulo ingresado no esta registrado" << endl;
	else
	{
		listaArticulos[posicion]->prestar();
		cout << "El articulo es rentado exitosamente" << endl;
	}
}

int Administracion::getPosArticulo(string idBuscado)
{
	for (int i = 0; i < numArticulos; i++)
		if (listaArticulos[i]->getID() == idBuscado)
			return i;
	return -1;
}


void Administracion::devolverArticulo()
{
	string idBuscado;
	cout << "ingrese el ID del articulo";
	cin >> idBuscado;
	int posicion = getPosArticulo(idBuscado);
	if (posicion == -1)
		cout << "El articulo ingresado no esta registrado" << endl;
	else
	{
		listaArticulos[posicion]->devolver();
		cout << "El articulo ha sido devuelto exitosamente" << endl;
	}

}

void Administracion::mostrarArticulos()
{
	if (numArticulos == 0)
		cout << "No se ingresaron articulos aun" << endl;
	else
	{
		for (int i = 0; i < numArticulos; i++)
		{
			listaArticulos[i]->mostrar();
			cout << endl;
		}
	}
}