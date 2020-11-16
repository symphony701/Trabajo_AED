#include "perfile.h"
#include "ui_perfile.h"

Perfile::Perfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Perfile)
{
    ui->setupUi(this);
}

Perfile::~Perfile()
{
    delete ui;
}
