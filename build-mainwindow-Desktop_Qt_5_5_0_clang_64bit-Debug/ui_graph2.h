/********************************************************************************
** Form generated from reading UI file 'graph2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH2_H
#define UI_GRAPH2_H

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

class Ui_Graph2
{
public:
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Graph2)
    {
        if (Graph2->objectName().isEmpty())
            Graph2->setObjectName(QStringLiteral("Graph2"));
        Graph2->resize(381, 287);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Graph2->setWindowIcon(icon);
        Graph2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        horizontalLayout = new QHBoxLayout(Graph2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        graphicsView = new QGraphicsView(Graph2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(Graph2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Graph2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Graph2);

        QMetaObject::connectSlotsByName(Graph2);
    } // setupUi

    void retranslateUi(QWidget *Graph2)
    {
        Graph2->setWindowTitle(QApplication::translate("Graph2", "\351\207\215\345\241\221\345\220\216\347\275\221\347\273\234\346\250\241\345\236\213\345\233\276", 0));
        pushButton->setText(QApplication::translate("Graph2", "\345\273\272\345\233\276", 0));
        pushButton_2->setText(QApplication::translate("Graph2", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Graph2: public Ui_Graph2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH2_H
