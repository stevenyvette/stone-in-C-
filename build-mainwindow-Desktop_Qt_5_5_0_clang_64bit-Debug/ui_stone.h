/********************************************************************************
** Form generated from reading UI file 'stone.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STONE_H
#define UI_STONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stone
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *reshape;
    QVBoxLayout *verticalLayout;
    QPushButton *go;
    QPushButton *back;

    void setupUi(QWidget *stone)
    {
        if (stone->objectName().isEmpty())
            stone->setObjectName(QStringLiteral("stone"));
        stone->resize(488, 368);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        stone->setWindowIcon(icon);
        stone->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        horizontalLayout = new QHBoxLayout(stone);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        reshape = new QTextBrowser(stone);
        reshape->setObjectName(QStringLiteral("reshape"));
        reshape->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.724, y1:0.505591, x2:0, y2:1, stop:0.101695 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout->addWidget(reshape);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        go = new QPushButton(stone);
        go->setObjectName(QStringLiteral("go"));
        go->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(go);

        back = new QPushButton(stone);
        back->setObjectName(QStringLiteral("back"));
        back->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(back);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(stone);

        QMetaObject::connectSlotsByName(stone);
    } // setupUi

    void retranslateUi(QWidget *stone)
    {
        stone->setWindowTitle(QApplication::translate("stone", "TNRP", 0));
        go->setText(QApplication::translate("stone", "\350\277\233\350\241\214\347\275\221\347\273\234\n"
"\351\207\215\345\241\221\345\210\206\346\236\220", 0));
        back->setText(QApplication::translate("stone", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class stone: public Ui_stone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STONE_H
