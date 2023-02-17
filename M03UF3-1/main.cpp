#include <iostream>

#include "GameManager.h"

int main() {
	
	tTablero tablero;
	int fila = 0, columna = 0;

	incicializarTablero(tablero);
	mostrarTablero(tablero);
	askPosition(tablero, fila, columna);
	rellenarCasilla(tablero, fila, columna, X);
	mostrarTablero(tablero);
}

