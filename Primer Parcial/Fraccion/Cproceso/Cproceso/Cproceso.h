/*
* @flie Cproeso.h
* @author Quingaluisa Danny - Estructura de Datos
* @date 27/10/2022
* @brief Archivo de cabecera para la clase Cproceso.h
* @version 1.0
* 
*@copyright Copyright (c) 2022, Danny Quingaluisa 
*@license MIT License
*/
#pragma once
#include <iostream>


class Cproceso{
private:
    /**
     * @brief atributo privado de la clase Cproceso
     * 
     */
    int num;
    /**
     * @brief atributo privado de la clase Cproceso
     * 
     */
    int den;
public:
    /**
     * @brief Construct a new Cproceso object
     * 
     * @param num 
     * @param den 
     */
    int getNum() const;
    /**
     * @brief Get the Num object
     * 
     * @return int 
     */
    void setNum(int num);
    /**
     * @brief Set the Num object
     * 
     * @param num 
     */

    int getDen() const;
    /**
     * @brief Get the Den object
     * 
     * @return int 
     */

    void setDen(int den);
    /**
     * @brief Set the Den object
     * 
     * @param den 
     */

    Cproceso(int num, int den);
    /**
     * @brief Construct a new Cproceso object
     * 
     * @param num 
     * @param den 
     */

    ~Cproceso();
    /**
     * @brief Destroy the Cproceso object
     * 
     */
};

