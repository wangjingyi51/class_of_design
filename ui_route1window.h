/********************************************************************************
** Form generated from reading UI file 'route1window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTE1WINDOW_H
#define UI_ROUTE1WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_route1window
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *route1window)
    {
        if (route1window->objectName().isEmpty())
            route1window->setObjectName(QString::fromUtf8("route1window"));
        route1window->resize(1364, 990);
        centralwidget = new QWidget(route1window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(870, 50, 521, 581));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1030, 810, 211, 51));
        route1window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(route1window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1364, 21));
        route1window->setMenuBar(menubar);
        statusbar = new QStatusBar(route1window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        route1window->setStatusBar(statusbar);

        retranslateUi(route1window);

        QMetaObject::connectSlotsByName(route1window);
    } // setupUi

    void retranslateUi(QMainWindow *route1window)
    {
        route1window->setWindowTitle(QCoreApplication::translate("route1window", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("route1window", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class route1window: public Ui_route1window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTE1WINDOW_H
