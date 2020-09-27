#ifndef FORMSOCIAL_H
#define FORMSOCIAL_H

#include <QWidget>

namespace Ui {
class formSocial;
}

class formSocial : public QWidget
{
    Q_OBJECT

public:
    explicit formSocial(QWidget *parent = nullptr);
    ~formSocial();

private:
    Ui::formSocial *ui;
};

#endif // FORMSOCIAL_H
