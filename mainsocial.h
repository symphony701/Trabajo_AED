#ifndef MAINSOCIAL_H
#define MAINSOCIAL_H

#include <QMainWindow>

namespace Ui {
class mainSocial;
}

class mainSocial : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainSocial(QWidget *parent = nullptr);
    ~mainSocial();

private:
    Ui::mainSocial *ui;
};

#endif // MAINSOCIAL_H
