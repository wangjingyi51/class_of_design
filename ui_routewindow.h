/********************************************************************************
** Form generated from reading UI file 'routewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEWINDOW_H
#define UI_ROUTEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RouteWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RouteWindow)
    {
        if (RouteWindow->objectName().isEmpty())
            RouteWindow->setObjectName(QString::fromUtf8("RouteWindow"));
        RouteWindow->resize(1592, 913);
        centralwidget = new QWidget(RouteWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(880, 140, 521, 221));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(920, 500, 391, 311));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        RouteWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RouteWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1592, 21));
        RouteWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RouteWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RouteWindow->setStatusBar(statusbar);

        retranslateUi(RouteWindow);

        QMetaObject::connectSlotsByName(RouteWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RouteWindow)
    {
        RouteWindow->setWindowTitle(QCoreApplication::translate("RouteWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("RouteWindow", "\350\265\267\345\247\213\345\234\260\347\202\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RouteWindow", "\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        pushButton_4->setText(QCoreApplication::translate("RouteWindow", "\346\237\245\350\257\242\344\273\273\346\204\217\350\267\257\345\276\204", nullptr));
        pushButton->setText(QCoreApplication::translate("RouteWindow", "\346\237\245\350\257\242\344\270\255\350\275\254\346\234\200\345\260\221\350\267\257\345\276\204", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RouteWindow", "\346\237\245\350\257\242\346\235\203\345\200\274\346\234\200\345\260\217\350\267\257\345\276\204", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RouteWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RouteWindow: public Ui_RouteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEWINDOW_H
