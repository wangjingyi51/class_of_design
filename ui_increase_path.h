/********************************************************************************
** Form generated from reading UI file 'increase_path.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCREASE_PATH_H
#define UI_INCREASE_PATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Increase_path
{
public:
    QWidget *centralwidget;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Increase_path)
    {
        if (Increase_path->objectName().isEmpty())
            Increase_path->setObjectName(QString::fromUtf8("Increase_path"));
        Increase_path->resize(1669, 936);
        centralwidget = new QWidget(Increase_path);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(780, 180, 661, 331));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(widget_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addWidget(widget_5);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(870, 610, 451, 261));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        Increase_path->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Increase_path);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1669, 21));
        Increase_path->setMenuBar(menubar);
        statusbar = new QStatusBar(Increase_path);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Increase_path->setStatusBar(statusbar);

        retranslateUi(Increase_path);

        QMetaObject::connectSlotsByName(Increase_path);
    } // setupUi

    void retranslateUi(QMainWindow *Increase_path)
    {
        Increase_path->setWindowTitle(QCoreApplication::translate("Increase_path", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Increase_path", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Increase_path", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Increase_path", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Increase_path", "\345\242\236\345\212\240\350\267\257\345\276\204", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Increase_path", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Increase_path: public Ui_Increase_path {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCREASE_PATH_H
