#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include "formsocial.h"
#include "formerror.h"
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <fstream>
#include <iostream>
#include <cstring>
#include "logeador.h"

using namespace std;

struct usuariosxd{
    QString Id;
    QString Password;
};


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    log=new login();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Register_clicked()
{
    log->registrarUsuario(ui->lineID->text(),ui->linePass->text());

}

void MainWindow::on_login_clicked()
{

   /* string us, pass;
    ifstream usuario("usuarios.bin");

    while(getline(usuario,us,',')){
         qDebug()<<"entro al while";
        getline(usuario,pass);
        std::cout<<us;
       qDebug()<<us.c_str()<<pass.c_str();
        if((us==ui->lineID->text().toStdString())&&(pass==ui->linePass->text().toStdString())){
           // val=true;

            formSocial* principalSocial= new formSocial(nullptr,ui->lineID->text());
            principalSocial->showMaximized();
            break;
        }
    }*/

    if(log->logearUsuario(ui->lineID->text(),ui->linePass->text())){
        formSocial* principalSocial= new formSocial(nullptr,ui->lineID->text());
        principalSocial->showMaximized();
    }else{
        FormError* formerror= new FormError();
        formerror->show();
    }

}
