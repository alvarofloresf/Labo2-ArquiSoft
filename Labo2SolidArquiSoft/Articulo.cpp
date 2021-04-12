#include "Articulo.h"

Articulo::Articulo()
{
}

Articulo::~Articulo()
{
}

void Articulo::llenarInformacion()
{
	cout << "Ingrese el ID: ";
	cin >> ID;
	cout << "Ingrese el nombre: ";
	cin >> nombre;
	cout << "Ingrese el numero de copias: ";
	cin >> cantCopias;
	cantDisponibles = cantCopias;
	cout << "Ingrese el precio: ";
	cin >> precio;
}

void Articulo::mostrar()
{
	cout << "ID: " << ID << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Copias: " << cantCopias << endl;
	cout << "Disponibles: " << cantDisponibles << endl;
	cout << "Precio por dia: " << precio << endl;
}

string Articulo::getID()
{
	return ID;
}

void Articulo::prestar()
{
	cantDisponibles = cantDisponibles - 1;
}

void Articulo::devolver()
{
	cantDisponibles++;
}