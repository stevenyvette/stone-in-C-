#ifndef GRAPH2_H
#define GRAPH2_H

#include <QWidget>

namespace Ui {
class Graph2;
}

class Graph2 : public QWidget
{
    Q_OBJECT

public:
    explicit Graph2(QWidget *parent = 0);
    ~Graph2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Graph2 *ui;
};

#endif // GRAPH2_H
