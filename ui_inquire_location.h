/********************************************************************************
** Form generated from reading UI file 'inquire_location.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRE_LOCATION_H
#define UI_INQUIRE_LOCATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inquire_location
{
public:
    QWidget *centralwidget;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextBrowser *textBrowser_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Inquire_location)
    {
        if (Inquire_location->objectName().isEmpty())
            Inquire_location->setObjectName(QString::fromUtf8("Inquire_location"));
        Inquire_location->resize(1926, 1423);
        centralwidget = new QWidget(Inquire_location);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(950, 110, 481, 541));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textBrowser_2 = new QTextBrowser(widget_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_2->addWidget(textBrowser_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        textBrowser_3 = new QTextBrowser(widget_3);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        horizontalLayout_3->addWidget(textBrowser_3);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        textBrowser_4 = new QTextBrowser(widget_4);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        horizontalLayout_4->addWidget(textBrowser_4);


        verticalLayout->addWidget(widget_4);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1070, 790, 251, 71));
        Inquire_location->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Inquire_location);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1926, 21));
        Inquire_location->setMenuBar(menubar);
        statusbar = new QStatusBar(Inquire_location);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Inquire_location->setStatusBar(statusbar);

        retranslateUi(Inquire_location);

        QMetaObject::connectSlotsByName(Inquire_location);
    } // setupUi

    void retranslateUi(QMainWindow *Inquire_location)
    {
        Inquire_location->setWindowTitle(QCoreApplication::translate("Inquire_location", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Inquire_location", "\345\234\260\347\202\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Inquire_location", "\346\250\252\345\235\220\346\240\207\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Inquire_location", "\347\272\265\345\235\220\346\240\207\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Inquire_location", "\345\212\237\350\203\275\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Inquire_location", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inquire_location: public Ui_Inquire_location {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRE_LOCATION_H
