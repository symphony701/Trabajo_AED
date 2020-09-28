#pragma once

#include <QObject>

class User{
    QString Nombre;
    int cantidadSeguidores;
    int cantidadSeguidos;


public:
    User(QString Nombre){this->Nombre=Nombre;}
    ~User(){}
    QString getNombre(){return Nombre;}
    int getCantidadSeguidores(){return cantidadSeguidores;}
    int getCantidadSeguidos(){return cantidadSeguidos;}
    void setNombre(QString Nombre){this->Nombre=Nombre;}
    void setcantidadSeguidores(int cantidadSeguidores){this->cantidadSeguidores=cantidadSeguidores;}
    void setCantidadSeguidos(int cantidadSeguidos){this->cantidadSeguidos=cantidadSeguidos;}
};
