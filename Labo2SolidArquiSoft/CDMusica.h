#pragma once
#include "Articulo.h"
class CDMusica :
	public Articulo
{
private:
	string artista;
public:
	CDMusica();
	~CDMusica();
	void llenarInformacion();
	string getArtista();
	void setArtista(string newArtista);
	void mostrar();
};

