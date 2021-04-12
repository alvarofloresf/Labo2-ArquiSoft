#include "CDMusica.h"

CDMusica::CDMusica()
{
}

CDMusica::~CDMusica()
{
}

void CDMusica::llenarInformacion()
{
	Articulo::llenarInformacion();
	cout << "ingrese el nombre de la banda: ";
	cin >> artista;
}

string CDMusica::getArtista()
{
	return artista;
}

void CDMusica::setArtista(string newArtista)
{
	this->artista = newArtista;
}

void CDMusica::mostrar()
{
	cout << "CD de musica: " << endl;
	Articulo::mostrar();
	cout << "Artista: " << artista << endl;
}