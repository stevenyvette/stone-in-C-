#include "guide.h"
#include "ui_guide.h"

Guide::Guide(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Guide)
{
    ui->setupUi(this);
}

Guide::~Guide()
{
    delete ui;
}

void Guide::on_pushButton_clicked()
{
    this->close();
}
