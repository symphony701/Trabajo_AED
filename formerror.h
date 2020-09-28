#ifndef FORMERROR_H
#define FORMERROR_H

#include <QDialog>

namespace Ui {
class FormError;
}

class FormError : public QDialog
{
    Q_OBJECT

public:
    explicit FormError(QWidget *parent = nullptr);
    ~FormError();

private:
    Ui::FormError *ui;
};

#endif // FORMERROR_H
