/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QStringLiteral("Graph"));
        Graph->resize(381, 287);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Graph->setWindowIcon(icon);
        Graph->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        horizontalLayout = new QHBoxLayout(Graph);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        graphicsView = new QGraphicsView(Graph);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(Graph);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Graph);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QApplication::translate("Graph", "\345\216\237\347\275\221\347\273\234\346\250\241\345\236\213\345\233\276", 0));
        pushButton->setText(QApplication::translate("Graph", "\345\273\272\345\233\276", 0));
        pushButton_2->setText(QApplication::translate("Graph", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
