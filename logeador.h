#pragma once
#include <iostream>
#include <QObject>
#include <fstream>
#include <QString>
#include <string>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <cstring>
#include <QDebug>
using namespace std;
class login{
public:
    login(){}
    ~login(){}
    void registrarUsuario(QString ID,QString Pass){

        ofstream registro("usuarios.bin",ios::app);
        registro<<ID.toStdString()<<","<<Pass.toStdString()<<"\n";
        registro.close();

    }
    bool logearUsuario(QString ID,QString Pass){
        bool val=false;
        string us, pass;
        ifstream usuario("usuarios.bin");
        while(getline(usuario,us,',')){
            getline(usuario,pass);
            if((us==ID.toStdString())&&(pass==Pass.toStdString())){
                val=true;

                break;
            }
        }
        return val;
    }
};
