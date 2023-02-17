#pragma once

#include <iostream>

#include "map.h"

//Funciones de Gamne Manager
void askPosition(const tTablero& tablero, int& fila, int& columna);
void rellenarCasilla(tTablero& tablero, int fila, int columna, tDato valor);