/********************************************************************************
** Form generated from reading UI file 'guide.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDE_H
#define UI_GUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Guide
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Guide)
    {
        if (Guide->objectName().isEmpty())
            Guide->setObjectName(QStringLiteral("Guide"));
        Guide->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        Guide->setWindowIcon(icon);
        Guide->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.724, y1:0.505591, x2:0, y2:1, stop:0.101695 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(Guide);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 260, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));
        label = new QLabel(Guide);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 331, 221));

        retranslateUi(Guide);

        QMetaObject::connectSlotsByName(Guide);
    } // setupUi

    void retranslateUi(QWidget *Guide)
    {
        Guide->setWindowTitle(QApplication::translate("Guide", "\345\270\256\345\212\251", 0));
        pushButton->setText(QApplication::translate("Guide", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("Guide", "\346\210\221\346\235\245\346\225\231\344\275\240\347\224\250\350\275\257\344\273\266\345\225\246\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201N", 0));
    } // retranslateUi

};

namespace Ui {
    class Guide: public Ui_Guide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDE_H
