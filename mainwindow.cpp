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
#include <QScrollBar>

using namespace std;




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    log=new login();
  /*  QPushButton *button = new QPushButton(this);
       button->move(100, 100);
        button->show();*/
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{


    if(log->validadorUsuario(ui->lineID->text().toStdString())){
        formSocial* principalSocial= new formSocial(nullptr,ui->lineID->text());
        principalSocial->showMaximized();
    }else{
        FormError* formerror= new FormError();
        formerror->show();

    }


}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
  /*  if(arg1==2){
      //  ui->groupBox->setStyleSheet("Background-color:White;");
        ui->lineID->setStyleSheet("Background-color:Black;");
        ui->linePass->setStyleSheet("Background-color:Black;");
        ui->lineID->setStyleSheet("Color:White;");
        ui->linePass->setStyleSheet("Color:White;");
    }else{//ui->groupBox->setStyleSheet("Background-color:Black;");
        ui->lineID->setStyleSheet("Background-color:White;");
        ui->linePass->setStyleSheet("Background-color:White;");
        ui->lineID->setStyleSheet("Color:Black;");
        ui->linePass->setStyleSheet("Color:Black;");
    }

    qDebug()<<arg1;*/
}
