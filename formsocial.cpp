#include "formsocial.h"
#include "ui_formsocial.h"
#include "User.h"
formSocial::formSocial(QWidget *parent,QString IDUser) :
    QWidget(parent),
    ui(new Ui::formSocial)
{
    usuario= new User(IDUser);

    ui->setupUi(this);
    ui->nombreUsuario->setText(IDUser);


}

formSocial::~formSocial()
{
    delete ui;
}
