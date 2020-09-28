#ifndef FORMSOCIAL_H
#define FORMSOCIAL_H

#include <QWidget>
#include "User.h"
namespace Ui {
class formSocial;
}

class formSocial : public QWidget
{
    Q_OBJECT

public:
    explicit formSocial(QWidget *parent = nullptr,QString IDUser="");
    ~formSocial();

private:
    Ui::formSocial *ui;
    User*usuario;
};

#endif // FORMSOCIAL_H
