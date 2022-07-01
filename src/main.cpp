#include <iostream>		// entradas salidas en consola y string
#include <fstream> 		// manejo de archivos
#include "../lib/global.h"

using namespace std;

void leerArchivo(string pathFile)
{
	string s;
    fstream f;

	cout << "leer archivo"  << endl;
    f.open(pathFile, ios_base::in);  // in  out app 
    if ( !f.is_open() ) 
		cerr << "Error al abrir el archivo: " << pathFile << endl;
	else
		do 
		{
			getline( f, s );
			cout << s << endl;
		}while( !f.eof() );
	f.close();
}

void escribirArchivo(string pathFile)
{
    fstream f;
	cout << "escribir archivo"  << endl;
    f.open(pathFile, ios_base::app | ios_base::in );  // in  out app 
    if ( !f.is_open() ) 
		cerr << "Error al abrir el archivo: " << pathFile << endl;
	else
	{
		for (int i = 1; i < 12; i++)
		{
			switch (i)
			{
				case ENE : f << "enero" 	<< ENTER; break;
				case FEB : f << "febrero" << ENTER; break;
				case MAR : f << "marzo" 	<< ENTER; break;
				case ABR : f << "abril" 	<< ENTER; break;
				case MAY : f << "mayo" 	<< ENTER; break;
				case JUN : f << "junio" 	<< ENTER; break;
				default:
					f << "otro mes" << ENTER;
					break;
			}
		}
	}
	f.close();
}

int main()
{
	escribirArchivo("files/texto.txt");
	leerArchivo("files/texto.txt");

	// int a=10;
	// printf("ingrese el valor de a = ");
	// scanf("%d", &a);	
	// printf("a= %c \n", a);

	// cout << "ingrese el valor de a = ";
	// cin >> a;
	// cout << "a= " << a << endl;

	// cout << "Hello pat-mic...!" << endl;
	// return 0;
}