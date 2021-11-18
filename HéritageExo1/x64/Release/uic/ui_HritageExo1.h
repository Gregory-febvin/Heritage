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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HritageExo1Class
{
public:
    QAction *actionD_Normal;
    QAction *actionD_Historique;
    QWidget *centralWidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QLineEdit *NbDe;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuListe_Type_D;

    void setupUi(QMainWindow *HritageExo1Class)
    {
        if (HritageExo1Class->objectName().isEmpty())
            HritageExo1Class->setObjectName(QString::fromUtf8("HritageExo1Class"));
        HritageExo1Class->resize(669, 492);
        actionD_Normal = new QAction(HritageExo1Class);
        actionD_Normal->setObjectName(QString::fromUtf8("actionD_Normal"));
        actionD_Historique = new QAction(HritageExo1Class);
        actionD_Historique->setObjectName(QString::fromUtf8("actionD_Historique"));
        centralWidget = new QWidget(HritageExo1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 60, 121, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 150, 121, 61));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 70, 101, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 150, 101, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 190, 101, 31));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(430, 40, 211, 241));
        NbDe = new QLineEdit(centralWidget);
        NbDe->setObjectName(QString::fromUtf8("NbDe"));
        NbDe->setGeometry(QRect(230, 240, 171, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 210, 211, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 270, 131, 41));
        HritageExo1Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(HritageExo1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HritageExo1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HritageExo1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HritageExo1Class->setStatusBar(statusBar);
        menuBar = new QMenuBar(HritageExo1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 21));
        menuListe_Type_D = new QMenu(menuBar);
        menuListe_Type_D->setObjectName(QString::fromUtf8("menuListe_Type_D"));
        HritageExo1Class->setMenuBar(menuBar);

        menuBar->addAction(menuListe_Type_D->menuAction());
        menuListe_Type_D->addAction(actionD_Normal);
        menuListe_Type_D->addAction(actionD_Historique);

        retranslateUi(HritageExo1Class);
        QObject::connect(pushButton, SIGNAL(clicked(bool)), HritageExo1Class, SLOT(LanceDe()));
        QObject::connect(pushButton_2, SIGNAL(clicked(bool)), HritageExo1Class, SLOT(RemiseScoreZero()));
        QObject::connect(pushButton_4, SIGNAL(clicked(bool)), HritageExo1Class, SLOT(AfficheScore()));
        QObject::connect(actionD_Normal, SIGNAL(triggered()), HritageExo1Class, SLOT(DeNormal()));
        QObject::connect(actionD_Historique, SIGNAL(triggered()), HritageExo1Class, SLOT(DeHisto()));
        QObject::connect(pushButton_3, SIGNAL(clicked(bool)), HritageExo1Class, SLOT(DeMultiple()));

        QMetaObject::connectSlotsByName(HritageExo1Class);
    } // setupUi

    void retranslateUi(QMainWindow *HritageExo1Class)
    {
        HritageExo1Class->setWindowTitle(QCoreApplication::translate("HritageExo1Class", "HritageExo1", nullptr));
        actionD_Normal->setText(QCoreApplication::translate("HritageExo1Class", "D\303\251 Normal", nullptr));
        actionD_Historique->setText(QCoreApplication::translate("HritageExo1Class", "D\303\251 Historique", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("HritageExo1Class", "Lancer un d\303\251", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HritageExo1Class", "Score Total", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HritageExo1Class", "Remise a z\303\251ro", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("HritageExo1Class", "Nombre Tir", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("HritageExo1Class", "R\303\251sultat", nullptr));
        NbDe->setText(QString());
        label_3->setText(QCoreApplication::translate("HritageExo1Class", "Choisisez combien de d\303\251 lancez ( jusqu'a 7)", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HritageExo1Class", "Gambling Time", nullptr));
        menuListe_Type_D->setTitle(QCoreApplication::translate("HritageExo1Class", "Liste Type D\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HritageExo1Class: public Ui_HritageExo1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRITAGEEXO1_H
