#include "chat.h"
#include "ui_chat.h"

#include <QDebug>
#include <QtDebug>

template <class LISTA>

Chat::Chat(QWidget *parent,QString IDUser,QString Receptor,LISTA lista) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
    this->IDUser = IDUser;
    this->Receptor=Receptor;
    lista = new Lista<QString>(Receptor);
    ui->emisor->setText(IDUser);
    ui->receptor->setText(Receptor);
    lista->chatAnterior(Receptor);
    ui->label->setText(lista->miru());



}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_enviarButton_clicked(LISTA lista)
{
    lista->atarashii(ui->lineEdit->text(),IDUser);
    ui->label->setText(lista->miru());
    lista->registrarChat(IDUser,ui->lineEdit->text());
    ui->lineEdit->setText("");

}

void Chat::on_eliminar_clicked(LISTA lista)
{
    lista->furui();
    ui->label->setText(lista->miru());
}
