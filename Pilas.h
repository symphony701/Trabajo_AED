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
#include <QDate>
#include <QDateTime>

using namespace std;

struct Node{
    QString mensaje;
    QString emisor;
    QString fecha;
    Node * siguiente;
    int posicion;
};

template<class T>
class Pila {
private:
     Node*pila;
public:
     Pila(){
          pila=NULL;
     }
     ~Pila(){}
     void atarashii(T mensaje,T emisor,T fecha){
         Node *nuevo_Node=new Node();
         nuevo_Node->mensaje=mensaje;
         nuevo_Node->emisor=emisor;
         nuevo_Node->fecha = fecha;
         nuevo_Node->siguiente = pila;
         pila= nuevo_Node;
     }
     T miru(){
         T todoElPosteo="";
         Node *aux;
         aux=pila;
         while (aux!=NULL) {
             todoElPosteo=todoElPosteo+aux->fecha+": \n"+aux->emisor+": "+aux->mensaje+"\n\n";
             aux=aux->siguiente;
         }
        return todoElPosteo;
     }
     void postAnterior(){
         string emisor, mensaje,fecha;
         string nombreArchivo="posts.bin";
         ifstream archivo(nombreArchivo);
         while (getline(archivo,emisor,',')) {
             getline(archivo,mensaje,',');
             getline(archivo,fecha);
             atarashii(QString::fromLocal8Bit(mensaje.c_str()),QString::fromLocal8Bit(emisor.c_str()),QString::fromLocal8Bit(fecha.c_str()));
         }

     }
     void registrarPost(T emisor,T mensa,T Fecha){

         ofstream registro("posts.bin",ios::app);
         registro<<emisor.toStdString()<<","<<mensa.toStdString()<<","<<Fecha.toStdString()<<"\n";
         registro.close();

     }



};
