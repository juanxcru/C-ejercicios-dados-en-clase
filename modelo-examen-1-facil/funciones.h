#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "structs.h"
#include "headers.h"

void    buscarDni (struct datos[],short);
void    loguearAdmin (struct datos[]);
bool    existeDNI (struct datos[],short);
bool    existeUserName (struct datos[],short);
short   ingresarDatos (struct datos[],short);
void    hardcodeaDatos(struct datos[]);
bool    verificarPass_8ch(char[]);
void    ocultaIngresoPass(struct datos[], short);
void    mostrarDatos(struct datos [], short);
short   menuImprimir();
short   menuFunciones(struct datos[],short, short);

#endif // FUNCIONES_H
