#ifndef PERFILE_H
#define PERFILE_H

#include <QWidget>

namespace Ui {
class Perfile;
}

class Perfile : public QWidget
{
    Q_OBJECT

public:
    explicit Perfile(QWidget *parent = nullptr);
    ~Perfile();

private:
    Ui::Perfile *ui;
};

#endif // PERFILE_H
