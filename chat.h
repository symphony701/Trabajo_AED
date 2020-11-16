#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include "Lista.h"

namespace Ui {

class Chat;
}

class Chat : public QWidget
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr,QString IDUser="",QString Receptor="");
    ~Chat();

private slots:
    void on_enviarButton_clicked();

    void on_eliminar_clicked();

private:
    Ui::Chat *ui;
    QString Receptor,IDUser;
    //Lista<QString>*lista;
};

#endif // CHAT_H
