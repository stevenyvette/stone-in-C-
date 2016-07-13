/********************************************************************************
** Form generated from reading UI file 'reshape.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESHAPE_H
#define UI_RESHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reshape
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirm;
    QPushButton *showorigingraph;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *showreshapegraph;
    QLabel *remove_label;
    QLabel *replace_label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *origin_info;
    QWidget *tab_2;
    QTextBrowser *origin_adj;
    QWidget *tab_5;
    QTextBrowser *origin_pro;
    QWidget *tab_8;
    QGraphicsView *showgraph;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *quit;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTextBrowser *reshape_info;
    QWidget *tab_4;
    QTextBrowser *reshape_adj;
    QWidget *tab_6;
    QTextBrowser *reshape_pro;
    QWidget *tab_7;
    QTextBrowser *reshape_more;

    void setupUi(QWidget *Reshape)
    {
        if (Reshape->objectName().isEmpty())
            Reshape->setObjectName(QStringLiteral("Reshape"));
        Reshape->resize(653, 408);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Reshape->setWindowIcon(icon);
        Reshape->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.724, y1:0.505591, x2:0, y2:1, stop:0.101695 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0.886591, y1:0.04, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        gridLayout_2 = new QGridLayout(Reshape);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(Reshape);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(Reshape);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        confirm = new QPushButton(Reshape);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setAutoFillBackground(false);
        confirm->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout->addWidget(confirm, 1, 2, 1, 1);

        showorigingraph = new QPushButton(Reshape);
        showorigingraph->setObjectName(QStringLiteral("showorigingraph"));
        showorigingraph->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout->addWidget(showorigingraph, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        showreshapegraph = new QPushButton(Reshape);
        showreshapegraph->setObjectName(QStringLiteral("showreshapegraph"));
        showreshapegraph->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout->addWidget(showreshapegraph, 2, 3, 1, 1);

        remove_label = new QLabel(Reshape);
        remove_label->setObjectName(QStringLiteral("remove_label"));

        gridLayout->addWidget(remove_label, 0, 1, 1, 1);

        replace_label = new QLabel(Reshape);
        replace_label->setObjectName(QStringLiteral("replace_label"));

        gridLayout->addWidget(replace_label, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        label_2 = new QLabel(Reshape);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(Reshape);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 1, 1, 1);

        tabWidget = new QTabWidget(Reshape);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        origin_info = new QTextBrowser(tab);
        origin_info->setObjectName(QStringLiteral("origin_info"));
        origin_info->setGeometry(QRect(0, 0, 311, 221));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        origin_adj = new QTextBrowser(tab_2);
        origin_adj->setObjectName(QStringLiteral("origin_adj"));
        origin_adj->setGeometry(QRect(0, 0, 311, 221));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        origin_pro = new QTextBrowser(tab_5);
        origin_pro->setObjectName(QStringLiteral("origin_pro"));
        origin_pro->setGeometry(QRect(0, 0, 311, 221));
        tabWidget->addTab(tab_5, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        showgraph = new QGraphicsView(tab_8);
        showgraph->setObjectName(QStringLiteral("showgraph"));
        showgraph->setGeometry(QRect(0, 0, 311, 221));
        tabWidget->addTab(tab_8, QString());

        gridLayout_2->addWidget(tabWidget, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Reshape);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quit = new QPushButton(Reshape);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        horizontalLayout->addWidget(quit);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);

        tabWidget_2 = new QTabWidget(Reshape);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setTabPosition(QTabWidget::North);
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tabWidget_2->setElideMode(Qt::ElideNone);
        tabWidget_2->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_3->setLayoutDirection(Qt::LeftToRight);
        reshape_info = new QTextBrowser(tab_3);
        reshape_info->setObjectName(QStringLiteral("reshape_info"));
        reshape_info->setGeometry(QRect(0, 0, 311, 221));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        reshape_adj = new QTextBrowser(tab_4);
        reshape_adj->setObjectName(QStringLiteral("reshape_adj"));
        reshape_adj->setGeometry(QRect(0, 0, 311, 221));
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        reshape_pro = new QTextBrowser(tab_6);
        reshape_pro->setObjectName(QStringLiteral("reshape_pro"));
        reshape_pro->setGeometry(QRect(0, 0, 311, 221));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        reshape_more = new QTextBrowser(tab_7);
        reshape_more->setObjectName(QStringLiteral("reshape_more"));
        reshape_more->setGeometry(QRect(0, 0, 311, 221));
        tabWidget_2->addTab(tab_7, QString());

        gridLayout_2->addWidget(tabWidget_2, 2, 1, 1, 1);

        tabWidget_2->raise();
        label_2->raise();
        label_5->raise();
        tabWidget->raise();
        QWidget::setTabOrder(confirm, showorigingraph);
        QWidget::setTabOrder(showorigingraph, showreshapegraph);
        QWidget::setTabOrder(showreshapegraph, tabWidget);
        QWidget::setTabOrder(tabWidget, origin_info);
        QWidget::setTabOrder(origin_info, origin_adj);
        QWidget::setTabOrder(origin_adj, origin_pro);
        QWidget::setTabOrder(origin_pro, showgraph);
        QWidget::setTabOrder(showgraph, tabWidget_2);
        QWidget::setTabOrder(tabWidget_2, reshape_info);
        QWidget::setTabOrder(reshape_info, reshape_adj);
        QWidget::setTabOrder(reshape_adj, reshape_pro);
        QWidget::setTabOrder(reshape_pro, reshape_more);
        QWidget::setTabOrder(reshape_more, quit);

        retranslateUi(Reshape);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Reshape);
    } // setupUi

    void retranslateUi(QWidget *Reshape)
    {
        Reshape->setWindowTitle(QApplication::translate("Reshape", "TSP-reshape", 0));
        label_4->setText(QApplication::translate("Reshape", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\346\234\200\344\274\230\345\200\231\350\241\245\350\212\202\347\202\271\357\274\232</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("Reshape", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\350\242\253\347\247\273\345\216\273\347\232\204\350\212\202\347\202\271\357\274\232</span></p></body></html>", 0));
        confirm->setText(QApplication::translate("Reshape", "\347\241\256\345\256\232", 0));
        showorigingraph->setText(QApplication::translate("Reshape", "\345\216\237\347\275\221\347\273\234\346\250\241\345\236\213\345\233\276", 0));
        showreshapegraph->setText(QApplication::translate("Reshape", "\351\207\215\345\241\221\345\220\216\347\275\221\347\273\234\346\250\241\345\236\213\345\233\276", 0));
        remove_label->setText(QString());
        replace_label->setText(QString());
        label_2->setText(QApplication::translate("Reshape", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\345\216\237\347\275\221\347\273\234\344\277\241\346\201\257\350\241\250</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("Reshape", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\351\207\215\345\241\221\345\220\216\347\275\221\347\273\234\344\277\241\346\201\257\350\241\250</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Reshape", "\345\237\272\346\234\254\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Reshape", "\351\202\273\346\216\245\347\237\251\351\230\265", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Reshape", "\345\261\236\346\200\247\347\237\251\351\230\265", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("Reshape", "\346\250\241\345\236\213\345\233\276", 0));
        label->setText(QApplication::translate("Reshape", "Counter-Strike\n"
" By Steven", 0));
        quit->setText(QApplication::translate("Reshape", "\350\277\224\345\233\236", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Reshape", "\345\237\272\346\234\254\344\277\241\346\201\257", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Reshape", "\351\202\273\346\216\245\347\237\251\351\230\265", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("Reshape", "\345\261\236\346\200\247\347\237\251\351\230\265", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("Reshape", "\345\205\266\344\273\226\345\217\257\350\203\275\347\273\223\346\236\234", 0));
    } // retranslateUi

};

namespace Ui {
    class Reshape: public Ui_Reshape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESHAPE_H
