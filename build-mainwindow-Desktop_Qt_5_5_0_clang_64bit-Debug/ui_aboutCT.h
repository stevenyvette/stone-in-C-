/********************************************************************************
** Form generated from reading UI file 'aboutCT.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTCT_H
#define UI_ABOUTCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setWindowIcon(icon);
        Help->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.724, y1:0.505591, x2:0, y2:1, stop:0.101695 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(Help);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 230, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));
        label = new QLabel(Help);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 401, 221));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(false);
        label->raise();
        pushButton->raise();
#ifndef QT_NO_SHORTCUT
        label->setBuddy(pushButton);
#endif // QT_NO_SHORTCUT

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "\345\205\263\344\272\216CT", 0));
        pushButton->setText(QApplication::translate("Help", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\346\201\220\346\200\226\347\273\204\347\273\207\347\275\221\347\273\234\345\210\206\346\236\220\350\275\257\344\273\266</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;"
                        "\">Version 1.2</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\212\346\265\267\344\272\244\351\200\232\345\244\247\345\255\246</p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\265\345\255\220\344\277\241\346\201\257\344\270\216\347\224\265\346\260\224\345\267\245\347\250\213\345\255\246\351\231\242\350\207\252\345\212\250\345\214\226\347\263\273</p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2011\347\272\247 \346\257\225\344\270\232\347\224\237 </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\253\230\344\272\246\344\271\220 </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bot"
                        "tom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\257\225\344\270\232\350\256\276\350\256\241</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTCT_H
