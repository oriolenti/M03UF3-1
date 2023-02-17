#include "map.h"

void incicializarTablero(tTablero& tablero) {

	//Bucle que recorre las filas de la matriz

	for (int i = 0; i < TAM; i++)
	{
		//Para cada una de las filas recorremos las columnas
		for (int j = 0; j < TAM; j++)
		{
			//Inicializamos el valor VACIO al dato de la casilla
			tablero[i][j].valor = VACIO;
		}
	}
}

void mostrarTablero(const tTablero& tablero) {

	//Mostrar la parte superior del tablero
	cout << " -------------" << endl;


	for (int i = 0; i < TAM; i++)
	{
		//Para cada una de las filas recorremos las columnas
		for (int j = 0; j < TAM; j++)
		{
			cout << " |";

			//Dependiendo del valor muestro un caracter distinto

			if (tablero[i][j].valor == VACIO) {
				cout << "  ";
			}
			else if (tablero[i][j].valor == X) {
				cout << "X";
			}
			else if (tablero[i][j].valor == O) {
				cout << "O";
			}

			cout << " ";
		}

		cout << " |" << endl;
		cout << " -------------" << endl;
	}
}

