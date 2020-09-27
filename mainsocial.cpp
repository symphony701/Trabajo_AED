#include "mainsocial.h"
#include "ui_mainsocial.h"

mainSocial::mainSocial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainSocial)
{
    ui->setupUi(this);
}

mainSocial::~mainSocial()
{
    delete ui;
}
