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
    void setFollow(int Follow){this->Follow=Follow;}
    void setFollowers(int Followers){this->Followers=Followers;}
    void SetNombre(QString Nombre){this->Nombre=Nombre;}

};
