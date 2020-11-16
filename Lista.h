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
#include "User.h"
using namespace std;

struct Nodo{
    User *Persona;
    Nodo * siguiente;
    int posicion;
public:
    Nodo(){};
};



class Lista {

private:
    Nodo*lista;

public:
    Lista(){

        lista=NULL;
    }
    void atarashii(User* element){
        Nodo *nuevo_nodo=new Nodo();
        nuevo_nodo->Persona=element;
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
    string miru(){
        string chat="";
        Nodo *actual=new Nodo();
        actual=lista;
        while (actual!=NULL) {
            chat=chat+actual->Persona->getNick()+" "+"\n";
            actual=actual->siguiente;
        }
        return chat;
    }

    bool kenshou(string form){
        Nodo *actual=new Nodo();
        actual=lista;
        while (actual!=NULL) {
            if(actual->Persona->getNick()==form){
                return true;
                break;
            }

        }
        return false;

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

};
