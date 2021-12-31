#include "regist.h"
#include "ui_regist.h"
#include "QFont"
#include "QPainter"
#include "mapwindow.h"
#include "userwindow.h"
#include "route2window.h"
#include "QDialog"
#include "QMessageBox"
#include "QFile"
#include "QDebug"

regist::regist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regist)
{
    ui->setupUi(this);
    //设置页面属性
    this->setFixedSize(1200,800);
    this->setWindowTitle("登陆页面");
    this->setWindowIcon(QPixmap(":/ui_1/school1.jpg"));
    //设置文本
    ui->label->setText("欢迎使用西安邮电大学校园导航系统！");
    //设置字体
    QFont font ("华文楷体",10,75);
    font.setPointSize(30);
    ui->label->setFixedSize(1100,200);
    ui->label->setFont(font);
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::black);
    ui->label->setPalette(pa);
    QFont font1 ("宋体",5,55);
    font1.setPointSize(20);
    ui->label_2->setFont(font1);
    ui->label_3->setFont(font1);
    ui->radioButton->setFont(font1);
    ui->radioButton_2->setFont(font1);
    ui->pushButton->setFont(font1);
    ui->pushButton_2->setFont(font1);
    ui->lineEdit->setFont(font1);
    //设置文字对齐:水平居中
    ui->label->setAlignment(Qt::AlignCenter);
    //注册功能：
    //在选择注册角色的情况下，账号与密码其中一个没有不能注册，已经注册过的提示注册过(管理员不可以注册)
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        //用户注册
        if(ui->radioButton_2->isChecked())
        {
            QString input1=ui->lineEdit->text();
            QString input2=ui->lineEdit_2->text();
            if(input1.isEmpty()|input2.isEmpty())
            {
                QMessageBox::warning(this,"警告！","请输入账户或者密码！");
            }
            else
            {
                //写入文件
                QFile file("D:\\ClassDesign_picture\\user.TXT");
                if(!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
                {
                    qDebug()<<"Can't open the file!"<<endl;
                }
               // qDebug()<<"用户ID："<<input1<<"密码："<<input2;
                file.write(input1.toStdString().c_str());
                file.write("\n");
                file.write(input2.toStdString().c_str());
                file.close();
                QMessageBox dlg(this);
                dlg.setText("注册成功！");
                dlg.exec();
            }
        }
        else if(ui->radioButton->isChecked())
        {
            QMessageBox::warning(this,"警告！","管理员无法注册！");
        }
        else
        {
            QMessageBox::warning(this,"警告！","请选择身份！");
        }
    });
    //登陆功能
    //管理员内置登陆密码，用户使用注册登陆密码
    connect(ui->pushButton,&QPushButton::clicked,[=]()
    {
        //用户登陆
        if(ui->radioButton_2->isChecked())
        {
            QString input1=ui->lineEdit->text();
            QString input2=ui->lineEdit_2->text();
            if(input1.isEmpty()|input2.isEmpty())
            {
                QMessageBox::warning(this,"警告！","请输入账户或者密码！");
            }
            if(!input1.isEmpty()&&!input2.isEmpty())
            {
                //检查输入是否正确
                QFile file("D:\\ClassDesign_picture\\user.TXT");
                if(!file.open(QIODevice::ReadOnly| QIODevice::Text))
                {
                    qDebug()<<"Can't open the file!"<<endl;
                }
                QString str = file.readAll();
                file.close();
                if(str == "")
                {
                    QMessageBox::warning(this,"警告！","请注册账号！");
                }
                else
                {
                    QStringList read = str.split("\n");
                    int i = read.size();
                    int j = 0;
                    QString ID = "";
                    QString password = "";
                    while (j<i/2)
                    {
                        ID += read[2*j]+" ";
                        password += read[2*j+1]+" ";
                        j++;
                    }
                    //qDebug()<<ID<<password;
                    if(ID.contains(input1)&&password.contains(input2))
                    {
                        QMessageBox dlg(this);
                        dlg.setText("用户登陆成功！");
                        dlg.exec();
                        //连接用户界面
                        user = new Userwindow;
                        //监听用户界面返回信号
                        connect(user,&Userwindow::RegistBack,[=]()
                        {
                            user->player->stop();
                            user->close();
                            this->show();
                        });
                        this->close();
                        user->show();
                    }
                    else
                    {
                        QMessageBox::warning(this,"警告！","账号或密码输入错误！");
                    }
                }

            }
        }
        //管理员登陆
        else if(ui->radioButton->isChecked())
        {
            QString input1=ui->lineEdit->text();
            QString input2=ui->lineEdit_2->text();
            if(input1.isEmpty()|input2.isEmpty())
            {
                QMessageBox::warning(this,"警告！","请输入账户或者密码！");
            }
            if(!input1.isEmpty()&&!input2.isEmpty())
            {
                //检查输入是否正确
                QFile file("D:\\ClassDesign_picture\\adminis.TXT");
                if(!file.open(QIODevice::ReadOnly| QIODevice::Text))
                {
                    qDebug()<<"Can't open the file!"<<endl;
                }
                QString str = file.readAll();
                file.close();
                QStringList read = str.split("\n");
                if(read[0]==input1&&read[1]==input2)
                {
                    QMessageBox dlg(this);
                    dlg.setText("管理员登陆成功！");
                    dlg.exec();
                    //连接管理员界面
                    adm = new AdmWindow;
                    this->close();
                    adm->show();
                    connect(adm,&AdmWindow::AdmBack,[=](){
                        adm->player->stop();
                        adm->close();
                        this->show();
                    });
                }
                else
                {
                     QMessageBox::warning(this,"警告！","账号或密码错误！");
                }
            }
        }
        else
        {
            QMessageBox::warning(this,"警告！","请选择身份！");
        }
    });
}
void regist::paintEvent(QPaintEvent * e)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/new/prefix1/ui2/background2.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}
regist::~regist()
{
    delete ui;
}
