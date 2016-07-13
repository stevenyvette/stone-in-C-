/********************************************************************************
** Form generated from reading UI file 'first.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_H
#define UI_FIRST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionAbout_CS;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(671, 493);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pic/resourse/help.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHelp->setIcon(icon1);
        actionAbout_CS = new QAction(MainWindow);
        actionAbout_CS->setObjectName(QStringLiteral("actionAbout_CS"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionAbout_CS->setIcon(icon2);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pic/resourse/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon3);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pic/resourse/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pic/resourse/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        actionExit->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setAcceptDrops(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/pic/resourse/\345\274\227\351\207\214\346\233\274.jpg);\n"
"background-image: url(:/pic/resourse/\345\274\227\351\207\214\346\233\274.jpg);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pic/resourse/\345\274\227\351\207\214\346\233\274.jpg")));
        label_2->setScaledContents(true);

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213"));
        font.setItalic(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 23));
        menuBar->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_CS);
        mainToolBar->addAction(actionHelp);
        mainToolBar->addAction(actionAbout_CS);
        mainToolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Counter-Strike", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
#ifndef QT_NO_STATUSTIP
        actionHelp->setStatusTip(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
#endif // QT_NO_STATUSTIP
        actionAbout_CS->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216CT", 0));
#ifndef QT_NO_STATUSTIP
        actionAbout_CS->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216CS", 0));
#endif // QT_NO_STATUSTIP
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
#endif // QT_NO_STATUSTIP
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", 0));
#endif // QT_NO_STATUSTIP
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "\345\215\225\344\270\200\346\201\220\346\200\226\345\210\206\345\255\220\347\247\273\351\231\244\351\227\256\351\242\230", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton->setStatusTip(QApplication::translate("MainWindow", "\345\215\225\344\270\200\346\201\220\346\200\226\345\210\206\345\255\220\347\247\273\351\231\244\351\227\256\351\242\230", 0));
#endif // QT_NO_STATUSTIP
        pushButton->setText(QApplication::translate("MainWindow", "\346\201\220\346\200\226\345\210\206\345\255\220\347\273\247\344\273\273\350\200\205\351\227\256\351\242\230(TSP)", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "TSP\351\207\215\345\241\221\347\275\221\347\273\234", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_2->setStatusTip(QApplication::translate("MainWindow", "TSP\351\207\215\345\241\221\347\275\221\347\273\234", 0));
#endif // QT_NO_STATUSTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "TSP\351\207\215\345\241\221\347\275\221\347\273\234(TSP-reshape)", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("MainWindow", "\351\207\215\345\241\221\346\201\220\346\200\226\347\273\204\347\273\207\347\275\221\347\273\234", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_5->setStatusTip(QApplication::translate("MainWindow", "\351\207\215\345\241\221\346\201\220\346\200\226\347\273\204\347\273\207\347\275\221\347\273\234", 0));
#endif // QT_NO_STATUSTIP
        pushButton_5->setText(QApplication::translate("MainWindow", "\351\207\215\345\241\221\346\201\220\346\200\226\347\273\204\347\273\207\347\275\221\347\273\234(TNRP)", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "\350\275\257\344\273\266\345\270\256\345\212\251", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_3->setStatusTip(QApplication::translate("MainWindow", "\350\275\257\344\273\266\345\270\256\345\212\251", 0));
#endif // QT_NO_STATUSTIP
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_4->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#endif // QT_NO_STATUSTIP
        pushButton_4->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("MainWindow", "        Copyright 2014 By Steven. All rights reserved.", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_H
