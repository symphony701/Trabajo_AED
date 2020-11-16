#pragma once

#include <QObject>
#include <string>
using namespace std;
class User{
private:
    string nick;
    string mail;
    int nro;
    string fecha;
public:
    User(string nick,string mail,int nro,string fecha){
        this->nick=nick;
        this->mail=mail;
        this->nro=nro;
        this->fecha=fecha;
    }
    User(){}
    string getNick(){return nick;}
    string getMail(){return mail;}
    int getNro(){return nro;}
    string getFecha(){return fecha;}
};
