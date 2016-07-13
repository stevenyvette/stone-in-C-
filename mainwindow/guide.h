#ifndef GUIDE_H
#define GUIDE_H

#include <QWidget>

namespace Ui {
class Guide;
}

class Guide : public QWidget
{
    Q_OBJECT

public:
    explicit Guide(QWidget *parent = 0);
    ~Guide();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Guide *ui;
};

#endif // GUIDE_H
