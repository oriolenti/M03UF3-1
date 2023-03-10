#pragma once

#include <iostream>

using namespace std;

//Definici?n constante tama?o
const int TAM = 3;


//Enumerado con posibles valores de las casillas
typedef enum tDato { X, O, VACIO };

//Estructura de una casilla
typedef struct tCasilla{

	tDato valor;

};

//Estructura matriz
//typedef tipo_dato nombre_tipo[nfilas][ncols]
typedef tCasilla tTablero[TAM][TAM];

//Funciones de map

//Funci?n que inicializa el tablero
//Paso el tablero por referencia, si se modifica
void incicializarTablero(tTablero &tablero);

//Funci?n que muestra el tablero
//Paso el tablero por valor, no se modifica
void mostrarTablero(const tTablero &tablero);