/********************************************************************************
** Form generated from reading UI file 'delete_location.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_LOCATION_H
#define UI_DELETE_LOCATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete_location
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *delete_location)
    {
        if (delete_location->objectName().isEmpty())
            delete_location->setObjectName(QString::fromUtf8("delete_location"));
        delete_location->resize(1644, 944);
        centralwidget = new QWidget(delete_location);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(960, 330, 311, 91));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(960, 570, 291, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        delete_location->setCentralWidget(centralwidget);
        menubar = new QMenuBar(delete_location);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1644, 21));
        delete_location->setMenuBar(menubar);
        statusbar = new QStatusBar(delete_location);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        delete_location->setStatusBar(statusbar);

        retranslateUi(delete_location);

        QMetaObject::connectSlotsByName(delete_location);
    } // setupUi

    void retranslateUi(QMainWindow *delete_location)
    {
        delete_location->setWindowTitle(QCoreApplication::translate("delete_location", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("delete_location", "\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("delete_location", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_location: public Ui_delete_location {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_LOCATION_H
