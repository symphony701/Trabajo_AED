#include "formerror.h"
#include "ui_formerror.h"

FormError::FormError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormError)
{
    ui->setupUi(this);
}

FormError::~FormError()
{
    delete ui;
}
