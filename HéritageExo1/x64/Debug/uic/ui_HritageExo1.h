/********************************************************************************
** Form generated from reading UI file 'HritageExo1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRITAGEEXO1_H
#define UI_HRITAGEEXO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HritageExo1Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HritageExo1Class)
    {
        if (HritageExo1Class->objectName().isEmpty())
            HritageExo1Class->setObjectName(QString::fromUtf8("HritageExo1Class"));
        HritageExo1Class->resize(455, 400);
        centralWidget = new QWidget(HritageExo1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 80, 101, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 250, 101, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 210, 101, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 210, 121, 61));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 60, 121, 61));
        HritageExo1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HritageExo1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 455, 21));
        HritageExo1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HritageExo1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HritageExo1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HritageExo1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HritageExo1Class->setStatusBar(statusBar);

        retranslateUi(HritageExo1Class);
        QObject::connect(pushButton, SIGNAL(clicked(bool)), HritageExo1Class, SLOT(LanceDe()));
        QObject::connect(pushButton_4, SIGNAL(clicked(bool)), HritageExo1Class, SLOT(AfficheScore()));
        QObject::connect(pushButton_2, SIGNAL(clicked(bool)), HritageExo1Class, SLOT(RemiseScoreZero()));

        QMetaObject::connectSlotsByName(HritageExo1Class);
    } // setupUi

    void retranslateUi(QMainWindow *HritageExo1Class)
    {
        HritageExo1Class->setWindowTitle(QCoreApplication::translate("HritageExo1Class", "HritageExo1", nullptr));
        pushButton->setText(QCoreApplication::translate("HritageExo1Class", "Lancer un d\303\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HritageExo1Class", "Remise a z\303\251ro", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HritageExo1Class", "Score Total", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HritageExo1Class: public Ui_HritageExo1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRITAGEEXO1_H
