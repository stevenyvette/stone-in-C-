#include "mainwindow.h"
#include "ui_first.h"
#include <QApplication>
#include <QtWidgets>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//open TSM
void MainWindow::on_pushButton_clicked()
{
    g.show();
}

//reshape
void MainWindow::on_pushButton_2_clicked()
{
    k.inti();
    k.show();
}

//open help
void MainWindow::on_pushButton_3_clicked()
{
    n.show();
}

//quit mainwindow
void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionHelp_triggered()
{
    n.show();
}

void MainWindow::on_actionAbout_CS_triggered()
{
    j.show();
}

void MainWindow::on_pushButton_5_clicked()
{
    m.show();
}
