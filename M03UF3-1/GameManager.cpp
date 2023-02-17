#include "GameManager.h"

void askPosition(const tTablero& tablero, int& fila, int& columna) {

	//Bucle para repetir parametro o ejecutarlo
	//Repite mientras fila y columna o posición ocupada
	do
	{
		cout << "Introduce fila: ";
		cin >> fila;
		cout << "Introduce columna";
		cin >> columna;

	} while ((fila < 0 || fila > 2) || (columna < 0 || columna > 2) || tablero[fila][columna].valor != VACIO);

}

void rellenarCasilla(tTablero& tablero, int fila, int columna, tDato valor) {

	tablero[fila][columna].valor = valor;

}