#include "formsocial.h"
#include "ui_formsocial.h"
#include "User.h"
#include <QScrollArea>
#include <QScrollBar>
#include <chat.h>
#include "Pilas.h"
#include <QDate>
#include <QDateTime>
#include "perfile.h"

formSocial::formSocial(QWidget *parent,QString IDUser) :
    QWidget(parent),
    ui(new Ui::formSocial)
{
    usuario= new User();

    ui->setupUi(this);
    this->IDUser = IDUser;
    ui->nombreUsuario->setText(IDUser);
    QScrollArea* areaPubli;
    areaPubli = formSocial::findChild<QScrollArea*>("areaPublicaciones");
    pila = new Pila<QString>();
    pila->postAnterior();
    //ui->labelPublis->setText(pila->miru());



}

formSocial::~formSocial()
{
    delete ui;
}
/*
void formSocial::on_pushButton_8_clicked()
{
    Chat* chatxd= new Chat(nullptr,IDUser,"Ruka");
    chatxd->show();
}

void formSocial::on_chatKazuya_clicked()
{
    Chat* chatxd= new Chat(nullptr,IDUser,"Kazuya");
    chatxd->show();
}

void formSocial::on_chatRafi_clicked()
{
    Chat* chatxd= new Chat(nullptr,IDUser,"Raphieru");
    chatxd->show();
}

void formSocial::on_chatChizuru_clicked()
{
    Chat* chatxd= new Chat(nullptr,IDUser,"Chizuru");
    chatxd->show();
}
*/
void formSocial::on_cambiarEstado_clicked()
{
   /* QString fecha=QTime::currentTime().toString()+"/"+QDate::currentDate().toString();
    pila->atarashii(ui->lineEdit->text(),IDUser,fecha);
    ui->labelPublis->setText(pila->miru());
    pila->registrarPost(IDUser,ui->lineEdit->text(),fecha);
    ui->lineEdit->setText("");*/

}

void formSocial::on_pushButton_7_clicked()
{
    Perfile* person= new Perfile(nullptr);
    person->show();
}
