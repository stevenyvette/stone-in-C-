#include "aboutCT.h"
#include "ui_aboutCT.h"

Help::Help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
}

Help::~Help()
{
    delete ui;
}

void Help::on_pushButton_clicked()
{
    this->close();
}
