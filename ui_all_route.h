/********************************************************************************
** Form generated from reading UI file 'all_route.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_ROUTE_H
#define UI_ALL_ROUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_All_route
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *All_route)
    {
        if (All_route->objectName().isEmpty())
            All_route->setObjectName(QString::fromUtf8("All_route"));
        All_route->resize(1588, 1242);
        textBrowser = new QTextBrowser(All_route);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(860, 90, 531, 641));
        pushButton = new QPushButton(All_route);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1030, 840, 171, 61));

        retranslateUi(All_route);

        QMetaObject::connectSlotsByName(All_route);
    } // setupUi

    void retranslateUi(QWidget *All_route)
    {
        All_route->setWindowTitle(QCoreApplication::translate("All_route", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("All_route", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class All_route: public Ui_All_route {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_ROUTE_H
