/********************************************************************************
** Form generated from reading UI file 'delete_path.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_PATH_H
#define UI_DELETE_PATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delete_path
{
public:
    QWidget *centralwidget;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Delete_path)
    {
        if (Delete_path->objectName().isEmpty())
            Delete_path->setObjectName(QString::fromUtf8("Delete_path"));
        Delete_path->resize(1705, 1275);
        centralwidget = new QWidget(Delete_path);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(820, 250, 571, 361));
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

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(910, 660, 421, 231));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        Delete_path->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Delete_path);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1705, 21));
        Delete_path->setMenuBar(menubar);
        statusbar = new QStatusBar(Delete_path);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Delete_path->setStatusBar(statusbar);

        retranslateUi(Delete_path);

        QMetaObject::connectSlotsByName(Delete_path);
    } // setupUi

    void retranslateUi(QMainWindow *Delete_path)
    {
        Delete_path->setWindowTitle(QCoreApplication::translate("Delete_path", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Delete_path", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Delete_path", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Delete_path", "\345\210\240\351\231\244\350\267\257\345\276\204", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Delete_path", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_path: public Ui_Delete_path {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_PATH_H
