#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
#include "aboutCT.h"
#include "reshape.h"
#include "stone.h"
#include "guide.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_actionExit_triggered();
    void on_actionHelp_triggered();
    void on_actionAbout_CS_triggered();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();

private:
    Form g;
    Help j;
    Guide n;
    Reshape k;
    stone m;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
