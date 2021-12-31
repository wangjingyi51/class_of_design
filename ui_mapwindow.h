/********************************************************************************
** Form generated from reading UI file 'mapwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPWINDOW_H
#define UI_MAPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapWindow
{
public:
    QAction *actionadd;
    QAction *actionclose;
    QWidget *centralwidget;
    QComboBox *comboBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MapWindow)
    {
        if (MapWindow->objectName().isEmpty())
            MapWindow->setObjectName(QString::fromUtf8("MapWindow"));
        MapWindow->resize(1524, 914);
        actionadd = new QAction(MapWindow);
        actionadd->setObjectName(QString::fromUtf8("actionadd"));
        actionclose = new QAction(MapWindow);
        actionclose->setObjectName(QString::fromUtf8("actionclose"));
        centralwidget = new QWidget(MapWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(970, 220, 351, 61));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1020, 430, 261, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        MapWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MapWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1524, 21));
        MapWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MapWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MapWindow->setStatusBar(statusbar);

        retranslateUi(MapWindow);

        QMetaObject::connectSlotsByName(MapWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MapWindow)
    {
        MapWindow->setWindowTitle(QCoreApplication::translate("MapWindow", "MainWindow", nullptr));
        actionadd->setText(QCoreApplication::translate("MapWindow", "\345\257\274\345\205\245", nullptr));
        actionclose->setText(QCoreApplication::translate("MapWindow", "\351\200\200\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MapWindow", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MapWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapWindow: public Ui_MapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPWINDOW_H
