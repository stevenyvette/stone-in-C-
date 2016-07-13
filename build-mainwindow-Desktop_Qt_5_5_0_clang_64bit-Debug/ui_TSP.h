/********************************************************************************
** Form generated from reading UI file 'TSP.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSP_H
#define UI_TSP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_count;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_6;
    QTextBrowser *probrowser;
    QTextBrowser *adjbrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *exit;
    QPushButton *reset;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *result_info;
    QWidget *tab_2;
    QTextBrowser *result_cal;
    QWidget *tab_3;
    QTextBrowser *result_pocc;
    QPushButton *openadj;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_7;
    QLabel *best;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_11;
    QLineEdit *remove;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer;
    QPushButton *confirm_remove;
    QPushButton *openpro;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(769, 512);
        Form->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pic/resourse/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Form->setWindowIcon(icon);
        Form->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.886591, y1:0.04, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        gridLayout_3 = new QGridLayout(Form);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_count = new QLabel(Form);
        label_count->setObjectName(QStringLiteral("label_count"));
        label_count->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);font: 75 18pt \"Agency FB\";"));

        gridLayout_2->addWidget(label_count, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_6 = new QLabel(Form);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_6);

        probrowser = new QTextBrowser(Form);
        probrowser->setObjectName(QStringLiteral("probrowser"));

        formLayout->setWidget(2, QFormLayout::FieldRole, probrowser);

        adjbrowser = new QTextBrowser(Form);
        adjbrowser->setObjectName(QStringLiteral("adjbrowser"));

        formLayout->setWidget(2, QFormLayout::LabelRole, adjbrowser);


        gridLayout_3->addLayout(formLayout, 0, 1, 4, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        exit = new QPushButton(Form);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        horizontalLayout->addWidget(exit);


        gridLayout_3->addLayout(horizontalLayout, 6, 0, 1, 3);

        reset = new QPushButton(Form);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setEnabled(true);
        reset->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout_3->addWidget(reset, 4, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(Form);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        result_info = new QTextBrowser(tab);
        result_info->setObjectName(QStringLiteral("result_info"));
        result_info->setGeometry(QRect(0, 0, 421, 191));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        result_cal = new QTextBrowser(tab_2);
        result_cal->setObjectName(QStringLiteral("result_cal"));
        result_cal->setGeometry(QRect(0, 0, 431, 191));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        result_pocc = new QTextBrowser(tab_3);
        result_pocc->setObjectName(QStringLiteral("result_pocc"));
        result_pocc->setGeometry(QRect(0, 0, 431, 191));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        gridLayout_3->addLayout(verticalLayout, 4, 1, 1, 1);

        openadj = new QPushButton(Form);
        openadj->setObjectName(QStringLiteral("openadj"));
        openadj->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout_3->addWidget(openadj, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 4, 2, 1, 1);

        best = new QLabel(Form);
        best->setObjectName(QStringLiteral("best"));
        best->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);font: 75 14pt \"Agency FB\";"));
        best->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(best, 3, 2, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 0, 3, 1, 1);

        label_4 = new QLabel(Form);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 0, 1, 1, 1);

        remove = new QLineEdit(Form);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setStyleSheet(QLatin1String("rgb:(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        remove->setFrame(true);
        remove->setEchoMode(QLineEdit::Normal);
        remove->setDragEnabled(false);
        remove->setReadOnly(false);
        remove->setCursorMoveStyle(Qt::LogicalMoveStyle);
        remove->setClearButtonEnabled(false);

        gridLayout->addWidget(remove, 1, 2, 1, 2);

        label_5 = new QLabel(Form);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 3, 1, 1);

        confirm_remove = new QPushButton(Form);
        confirm_remove->setObjectName(QStringLiteral("confirm_remove"));
        confirm_remove->setEnabled(true);
        confirm_remove->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout->addWidget(confirm_remove, 2, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 4, 0, 2, 1);

        openpro = new QPushButton(Form);
        openpro->setObjectName(QStringLiteral("openpro"));
        openpro->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/resourse/bullet.jpg);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout_3->addWidget(openpro, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(remove);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(remove, tabWidget);
        QWidget::setTabOrder(tabWidget, result_info);
        QWidget::setTabOrder(result_info, result_cal);
        QWidget::setTabOrder(result_cal, result_pocc);
        QWidget::setTabOrder(result_pocc, exit);
        QWidget::setTabOrder(exit, probrowser);
        QWidget::setTabOrder(probrowser, adjbrowser);

        retranslateUi(Form);
        QObject::connect(reset, SIGNAL(clicked()), remove, SLOT(clear()));
        QObject::connect(exit, SIGNAL(clicked()), remove, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), result_info, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), probrowser, SLOT(clear()));
        QObject::connect(exit, SIGNAL(clicked()), result_info, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), adjbrowser, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), label_count, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), best, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), result_cal, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), result_pocc, SLOT(clear()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "TSP", 0));
        label_3->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0055ff;\">\347\275\221\347\273\234\350\212\202\347\202\271\346\225\260\344\270\272\357\274\232</span></p></body></html>", 0));
        label_count->setText(QString());
        label->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\351\202\273\346\216\245\347\237\251\351\230\265</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\350\212\202\347\202\271\346\200\247\350\264\250\345\210\227\350\241\250</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Form", "Counter-Strike\n"
" By Steven", 0));
        exit->setText(QApplication::translate("Form", "\350\277\224\345\233\236", 0));
        reset->setText(QApplication::translate("Form", "\351\207\215\347\275\256", 0));
        label_7->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\347\273\217\347\256\227\346\263\225\350\256\241\347\256\227\346\211\200\345\276\227\347\273\223\346\236\234\357\274\232</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "\345\237\272\346\234\254\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "\350\256\241\347\256\227\347\273\223\346\236\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "POCC", 0));
        openadj->setText(QApplication::translate("Form", "\346\211\223\345\274\200\347\275\221\347\273\234\347\273\223\346\236\204\346\226\207\344\273\266", 0));
        best->setText(QString());
        label_4->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\350\242\253\347\247\273\351\231\244\347\232\204\351\241\266\347\202\271</span></p></body></html>", 0));
        remove->setText(QString());
        remove->setPlaceholderText(QApplication::translate("Form", "\350\257\267\350\276\223\345\205\245\350\242\253\347\247\273\351\231\244\350\212\202\347\202\271", 0));
        label_5->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">\346\234\200\344\274\230\345\200\231\350\241\245\350\200\205\357\274\232</span></p></body></html>", 0));
        confirm_remove->setText(QApplication::translate("Form", "\347\241\256\345\256\232", 0));
        openpro->setText(QApplication::translate("Form", "\346\211\223\345\274\200\347\275\221\347\273\234\345\261\236\346\200\247\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSP_H
