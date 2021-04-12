#include "Administracion.h"

int Menu()
{
	int resp;
	system("cls");
	cout << "Tienda de Articulos " << endl;
	cout << "--------------------------" << endl;
	cout << "1- Mostrar Articulos" << endl;
	cout << "2- Agregar Articulo" << endl;
	cout << "3- Rentar Articulo" << endl;
	cout << "4- Devolver Articulo" << endl;
	cout << "0- Salir" << endl;
	cout << "Ingrese su opcion --->  ";
	cin >> resp;
	cout << endl;
	return resp;
}

int main()
{
	Administracion adminTienda1 = Administracion();
	int opcion;
	do
	{
		opcion = Menu();
		system("cls");
		switch (opcion)
		{
		case 1:
			adminTienda1.mostrarArticulos();
			system("pause");
			break;
		case 2:
			adminTienda1.agregarArticulo();
			system("pause");
			break;
		case 3:
			adminTienda1.rentarArticulo();
			system("pause");
			break;
		case 4:
			adminTienda1.devolverArticulo();
			system("pause");
			break;
		}
	} while (opcion != 0);
	return 0;
}