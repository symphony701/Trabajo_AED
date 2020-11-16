#ifndef FORMSOCIAL_H
#define FORMSOCIAL_H

#include <QWidget>
#include "User.h"
#include "Pilas.h"
namespace Ui {
class formSocial;
}

class formSocial : public QWidget
{
    Q_OBJECT

public:
    explicit formSocial(QWidget *parent = nullptr,QString IDUser="");
    ~formSocial();

private slots:
    void on_pushButton_8_clicked();

    void on_chatKazuya_clicked();

    void on_chatRafi_clicked();

    void on_chatChizuru_clicked();

    void on_cambiarEstado_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::formSocial *ui;
    User*usuario;
    QString IDUser;
    Pila<QString>*pila;
};

#endif // FORMSOCIAL_H
