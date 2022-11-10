/*
* @file Interface.h
* @brief Archivo de cabecera para la clase Interface.h
* @version 1.0
* @autor Danny Quingaluisa
* @date 2021-09-15
* @copyright Copyright (c) 2021, Danny Quingaluisa
* @license MIT License
*/

#pragma once
#include "Cproceso.h""

class Interfaz
{
public:
	/*
	* @brief Constructor de la clase Interfaz
	*/	
	virtual void racional(Cproceso numer, Cproceso deno) = 0;
	/*
	* @brief Destructor de la clase Interfaz
	*/
	virtual void imprimirObjeto(Cproceso objeto) = 0;

protected:
private:

};