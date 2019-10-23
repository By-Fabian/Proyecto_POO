//
// Created by utec on 16/10/19.
//

#ifndef PROYECTO_POO_FUNCIONES_H
#define PROYECTO_POO_FUNCIONES_H

#include <windef.h>
#include <vector>
using namespace std;

typedef bool t_button;              //Tipo Button hace referencia a True(1) o False(0).
typedef unsigned t_no_negative;     //Tipo T_no_negative hace referecnia a valores no negativos.
typedef double t_decimals;          //Tipo t_decimales hace referencia a valores decimales.

//Definition of Class:

class C_Robots
{
private:
    t_button pr_disponibilidad;          //Disponibilidad: Ocupado(0) y Libre (1).
    t_no_negative pr_estado;             //Estado del Robot: Apagado(0)/Prendido(1),Suspendido(2).
    vector<t_no_negative>pr_home[3];     //Home(Direccion): (Filas, Columnas y Profundidad).
    t_no_negative pr_serie;              //Unidad del Robot: Numero de Serie.
    t_decimals pr_medidas;               //Medidas del Robot: Largo,Ancho y Alto).
    t_no_negative pr_bateria;            //Porcentaje de Bateria.
    t_decimals pr_carga_maxima;          //Peso maximo que soporta el robot.
    t_no_negative pr_ubicación;          //Ubicacion del robot

public:
    //falta añadir

};

//inputs

//outpouts

#endif //PROYECTO_POO_FUNCIONES_H

/*

//Notes of Proyect
//Inputs:

//Outpouts:

//Clases:



//Obejtos:

-Robots
-Cajas
-Slots
-Producto
-Almacen

//Atributos:

-Robots:(Libre/Ocupada),(Prendido/Apagado),(Largo,Ancho,Alto),(#Unidad),(Home),(Carga maxima),(Ubicacion:fila,columna,nivel de slot).
-Cajas:(Libre/Ocupada),(Largo,Ancho,Alto),(Peso),(Producto),(Ubicacion:fila,columna,nivel de slot).
-Slots:(Libre/Ocupada),(Producto),(Capacidad),(Posición:filas,columnas))
-Almacen: (Libre/Ocupada),(Largo,Ancho,Niveles),(Unidad)

//Metodos:

-Robots:(Crear)(Recoger/Ingresar),(Prenderse/Apagarse),(Moverse/Pararse)
-Cajas:(Crear)
-Slots:(Crear)
-
-Almacen:(Crear)

//Constructores:

//Setters:

//Getters:

//Funciones:

 Nombre del Proyecto: "DisBik"

 gaaaav2
 */

