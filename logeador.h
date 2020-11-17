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
#include "Lista.h"
#include "User.h"
#include <math.h>
using namespace std;
class login{
    Lista *arreglo;
public:
    login(){
        arreglo=new Lista[20];
        hasheabilador(arreglo);


    }
    ~login(){}
    int hash2(string nick){
      int cont=0;
      int potencia= nick.length();
      for(auto letra:nick){
       cont=cont+((letra-96)*(int)pow(27, (float)potencia));
       --potencia;
      }
      return cont;
    }

    int hash3(string nick){
      return hash2(nick) % nick.length();
    }


      void hasheabilador(Lista arreglo[]){
      string nick,mail,fecha;
      string numero,teki;
       string prueba="Probando";
      ifstream dataUser("users.txt");
        while(getline(dataUser,teki,',')){
            getline(dataUser,numero,',');
            getline(dataUser,mail,',');
            getline(dataUser,nick,',');
            getline(dataUser,fecha);
            nick.erase(nick.begin());
            nick.erase(nick.length()-1);
            nick.erase(nick.begin());
            nick.erase(nick.length()-1);
            arreglo[hash3(nick)].atarashii(new User(nick,mail,atoi(numero.c_str()),fecha));



        }

    }
      bool validadorUsuario(string usuario){
          int posicion = hash3(usuario);
          if(arreglo[posicion].kenshou(usuario)){
              return true;
          }else{return false;}
      }
};
