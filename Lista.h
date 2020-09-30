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

struct Nodo{
    QString mensaje;
    QString emisor;
    Nodo * siguiente;
    int posicion;
};


template<class T>
class Lista {
private:
    Nodo*lista;
    T Receptor;
public:
    Lista(T Receptor){
        this->Receptor=Receptor;
        lista=NULL;
    }
    void atarashii(T mensaje,T emisor){
        Nodo *nuevo_nodo=new Nodo();
        nuevo_nodo->mensaje= mensaje;
        nuevo_nodo->emisor=emisor;
        nuevo_nodo->siguiente=NULL;
        Nodo*aux = new Nodo();
       if(lista==NULL){
           lista=nuevo_nodo;
       }else{
           aux=lista;
           while(aux->siguiente!=NULL){
               aux=aux->siguiente;
           }
           aux->siguiente=nuevo_nodo;
       }

    }
    T miru(){
        T chat="";
        Nodo *actual=new Nodo();
        actual=lista;
        while (actual!=NULL) {
            chat=chat+actual->emisor+": "+actual->mensaje+"\n";
            actual=actual->siguiente;
        }
        return chat;
    }
    void furui(){
        Nodo * ulti = new Nodo();
        Nodo *penulti=new Nodo();
        ulti=lista;
        penulti=lista;
        if(lista!=NULL){
            if(ulti->siguiente==NULL){
                lista=NULL;
                delete ulti;
            }else{
                while(ulti->siguiente!=NULL){
                    penulti=ulti;
                    ulti=ulti->siguiente;
                }
                penulti->siguiente=NULL;
                delete ulti;
            }
        }

    }

    void chatAnterior(T Receptor){
        string emisor, mensaje;
        string nombreArchivo=Receptor.toStdString()+".bin";
        ifstream archivo(nombreArchivo);
        while (getline(archivo,emisor,',')) {
            getline(archivo,mensaje);
            atarashii(QString::fromLocal8Bit(mensaje.c_str()),QString::fromLocal8Bit(emisor.c_str()));
        }

    }

    void registrarChat(T emisor,T mensa){
        string nombreArchivo=Receptor.toStdString();
        ofstream registro(nombreArchivo+".bin",ios::app);
        registro<<emisor.toStdString()<<","<<mensa.toStdString()<<"\n";
        registro.close();

    }

};
