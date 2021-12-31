/********************************************************************************
** Form generated from reading UI file 'route2window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTE2WINDOW_H
#define UI_ROUTE2WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_route2window
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *route2window)
    {
        if (route2window->objectName().isEmpty())
            route2window->setObjectName(QString::fromUtf8("route2window"));
        route2window->resize(1319, 997);
        centralwidget = new QWidget(route2window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1020, 790, 241, 51));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(890, 40, 481, 611));
        route2window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(route2window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1319, 21));
        route2window->setMenuBar(menubar);
        statusbar = new QStatusBar(route2window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        route2window->setStatusBar(statusbar);

        retranslateUi(route2window);

        QMetaObject::connectSlotsByName(route2window);
    } // setupUi

    void retranslateUi(QMainWindow *route2window)
    {
        route2window->setWindowTitle(QCoreApplication::translate("route2window", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("route2window", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class route2window: public Ui_route2window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTE2WINDOW_H
