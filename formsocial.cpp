#include "formsocial.h"
#include "ui_formsocial.h"

formSocial::formSocial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formSocial)
{
    ui->setupUi(this);
}

formSocial::~formSocial()
{
    delete ui;
}
