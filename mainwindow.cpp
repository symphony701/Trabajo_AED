#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <string>


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ifstream arch("yasashii.bin");
    char f[5]={0};
    arch.read(f,sizeof(char)*5);
    arch.close();
    QString::fromStdString(f);
    printf(f);
    QString id=ui->lineID->text();
    QString pass = ui->linePass->text();
    if(id=="admin"&&pass=="admin"){




    }

}
