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
             qDebug()<<"entro al while";
            getline(usuario,pass);
            std::cout<<us;
           qDebug()<<us.c_str()<<pass.c_str();
            if((us==ID.toStdString())&&(pass==Pass.toStdString())){
                val=true;

                break;
            }
        }
        return val;
    }
};
