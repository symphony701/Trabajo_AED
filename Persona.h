#pragma once
#include <QObject>
class Persona{
    QString Nombre;
    int Follow;
    int Followers;
public:
    Persona(){}
    ~Persona(){}
    int getFollow(){return Follow;}
    int getFollowers(){return Followers;}
    QString getNombre(){return Nombre;}
};
