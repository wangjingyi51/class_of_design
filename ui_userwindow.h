/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Userwindow
{
public:
    QAction *actionopen;
    QAction *actionclose;
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Userwindow)
    {
        if (Userwindow->objectName().isEmpty())
            Userwindow->setObjectName(QString::fromUtf8("Userwindow"));
        Userwindow->resize(1464, 857);
        actionopen = new QAction(Userwindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionclose = new QAction(Userwindow);
        actionclose->setObjectName(QString::fromUtf8("actionclose"));
        centralwidget = new QWidget(Userwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, 660, 251, 71));
        pushButton_2->setIconSize(QSize(20, 20));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(940, 280, 441, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(pushButton_3);

        Userwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Userwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1464, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Userwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Userwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Userwindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionopen);
        menu->addAction(actionclose);

        retranslateUi(Userwindow);

        QMetaObject::connectSlotsByName(Userwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Userwindow)
    {
        Userwindow->setWindowTitle(QCoreApplication::translate("Userwindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("Userwindow", "\346\211\223\345\274\200", nullptr));
        actionclose->setText(QCoreApplication::translate("Userwindow", "\351\200\200\345\207\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Userwindow", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("Userwindow", "\346\237\245\350\257\242\345\234\260\347\202\271\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Userwindow", "\346\237\245\350\257\242\350\267\257\345\276\204\344\277\241\346\201\257", nullptr));
        menu->setTitle(QCoreApplication::translate("Userwindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Userwindow: public Ui_Userwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
