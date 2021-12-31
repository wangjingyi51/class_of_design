/********************************************************************************
** Form generated from reading UI file 'admwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMWINDOW_H
#define UI_ADMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdmWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdmWindow)
    {
        if (AdmWindow->objectName().isEmpty())
            AdmWindow->setObjectName(QString::fromUtf8("AdmWindow"));
        AdmWindow->resize(1352, 999);
        centralwidget = new QWidget(AdmWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(840, 90, 481, 601));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        verticalLayout->addWidget(widget_2);

        AdmWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdmWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1352, 21));
        AdmWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdmWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdmWindow->setStatusBar(statusbar);

        retranslateUi(AdmWindow);

        QMetaObject::connectSlotsByName(AdmWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdmWindow)
    {
        AdmWindow->setWindowTitle(QCoreApplication::translate("AdmWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("AdmWindow", "\345\242\236\345\212\240\345\234\260\347\202\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdmWindow", "\345\210\240\351\231\244\345\234\260\347\202\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AdmWindow", "\345\242\236\345\212\240\350\267\257\345\276\204", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AdmWindow", "\345\210\240\351\231\244\350\267\257\345\276\204", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AdmWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdmWindow: public Ui_AdmWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMWINDOW_H
