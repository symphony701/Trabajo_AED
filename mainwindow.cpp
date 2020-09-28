#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include "formsocial.h"
#include "formerror.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
        QString usuario;
        QTextStream log;
        QFile gin;
        gin.setFileName(":/yasashii.bin");
        gin.open(QIODevice::Text | QIODevice::ReadOnly);
        log.setDevice(&gin);
        usuario= gin.readAll();
        gin.close();
        QString id=ui->lineID->text();
        QString pass = ui->linePass->text();
        if(id==usuario&&pass==usuario){
            //aqui inicializamos el form luego de loguearse
            formSocial* principalSocial= new formSocial();
            principalSocial->showMaximized();
        }else{
            FormError* formerror= new FormError();
            formerror->show();
        }


}
