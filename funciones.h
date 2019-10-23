//
// Created by utec on 16/10/19.
//

#ifndef PROYECTO_POO_FUNCIONES_H
#define PROYECTO_POO_FUNCIONES_H

#include <windef.h>
#include <vector>
#include <iostream>
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
    t_no_negative pr_ubicacion;          //Ubicacion del robot

public:
    //Metodos:
    void m_encender();
    void m_apagar();
    void m_suspendido();
    void m_cargar_bateria();
    void m_moverse();
    void recoger();
    void ingresar();
    //Setters:
    void SetDisponibilidad (t_button set_disponibilidad){pr_disponibilidad = set_disponibilidad;}
    void SetEstado (t_no_negative set_estado){pr_estado = set_estado;}
    void SertHome(vector<t_no_negative> set_home[3]){set_home[3] = pr_home[3];}
    void SetSerie(t_no_negative set_serie){set_serie=pr_serie;}
    void SetMedidas(t_decimals set_medidas){set_medidas = pr_medidas;}
    void SetBateria(t_no_negative set_bateria){set_bateria = pr_bateria;}
    void SetCargaMaxima(t_decimals set_carga_maxima){set_carga_maxima = pr_carga_maxima}
    void SetUbicacion(t_no_negative set_ubicacion){set_ubicacion = pr_ubicacion}
    //Getters:
    t_button getDisponibilidad(){return pr_disponibilidad ;}
    t_no_negative getEstado(){return pr_estado;}
    vector<t_no_negative>[3] getHome(){return pr_home;}
    t_no_negative getSerie(){return pr_serie;}
    t_decimals getMedidas(){return pr_medidas;}
    t_no_negative getBateria(){return pr_bateria;}
    t_decimals getCargaMaxima(){return pr_carga_maxima;}
    t_no_negative getUbicacion(){return pr_ubicacion;}


};

typedef bool t_buttom;
typedef unsigned t_num_product;
typedef double t_decimal;
typedef size_t t_tamano;

typedef string t_producto;

typedef int number_t;
typedef vector<number_t> t_col_y;
typedef vector<t_col_y> t_ubicacion;
typedef vector<t_ubicacion> t_cantidad;

class CSTORE {
private:
    t_tamano p_tamano_slot;
    t_producto p_tipo_producto;
    t_num_product p_cantidad_producto;
    t_ubicacion p_ubicacion;

    t_ubicacion set_encontrar_producto();

public:
    //constructor
    CSTORE();
    //metodos setter-recibir
    void set_producto(t_producto producto_in){p_tipo_producto = producto_in;}
    void set_cantidad(t_num_product cantidad_in){p_cantidad_producto = cantidad_in;}
    //metodos getter-dar
    t_ubicacion get_ubicacion(){ return set_encontrar_producto();}

};

//inputs

//outpouts

#endif //PROYECTO_POO_FUNCIONES_H

/*

//Notes of Proyect
//Inputs:

//Outpouts:

//Clases:

 -Robot
 -Almacen
 -Slots
 -Cajas

//Obejtos:

-Robots
-Cajas
-Slots
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

