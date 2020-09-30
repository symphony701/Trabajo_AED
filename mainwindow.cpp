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
    if(log->logearUsuario(ui->lineID->text(),ui->linePass->text())){
        formSocial* principalSocial= new formSocial(nullptr,ui->lineID->text());
        principalSocial->showMaximized();
    }else{
        FormError* formerror= new FormError();
        formerror->show();
    }

}
