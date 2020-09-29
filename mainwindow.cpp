#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include "formsocial.h"
#include "formerror.h"
#include <QFile>
#include <QDataStream>
#include <QDebug>

using namespace std;

struct usuariosxd{
    QString Id;
    QString Password;
};

inline QDataStream &operator<<(QDataStream &d, const usuariosxd &p){
    return d << p.Id << p.Password;
}


QDataStream &operator>>(QDataStream &d, usuariosxd &p){
    QString Id;
    QString Password;
    d>> Id>>Password;
    p.Id=Id;
    p.Password=Password;
    return d;
}



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
     /*   QFile usuarios(":/usuarios.bin");
        usuarios.open(QIODevice::Text | QIODevice::ReadOnly);
        QDataStream usua(&usuarios);
*/


}

void MainWindow::on_Register_clicked()
{
   QFile usuarios("c:\\usuarios.bin");
   // usuarios.setFieName(":/usuarios.bin");
    if(!usuarios.open(QIODevice::WriteOnly)){
        qDebug()<<"Error: "<<usuarios.errorString();
    }
 //   usuarios.open(QIODevice::Text  | QIODevice::WriteOnly);
   // usuarios.open(QIODevice::WriteOnly);
    QDataStream usua(&usuarios);
    //usua.setVersion(QDataStream::Q)
    usuariosxd users[1];
    usua.setVersion(QDataStream::Qt_DefaultCompiledVersion);
    users[0].Id="Ruka_Sarahina";
    users[0].Password="hazmecasokazuya";
    usua<<users[0];
    usuarios.flush();
    usuarios.close();

}

void MainWindow::on_login_clicked()
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
        formSocial* principalSocial= new formSocial(nullptr,id);
        principalSocial->showMaximized();
    }else{
        FormError* formerror= new FormError();
        formerror->show();
    }


}
