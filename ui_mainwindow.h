/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *news;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *add;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 622);
        MainWindow->setMinimumSize(QSize(600, 600));
        MainWindow->setMaximumSize(QSize(600, 1200));
        MainWindow->setBaseSize(QSize(0, 0));
        MainWindow->setStyleSheet(QString::fromUtf8(".title {\n"
"	font-size: 48px;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
".anons {\n"
"	font-size:  24px;\n"
"	margin-top: 5px;\n"
"	font-weight: bold;\n"
"	color: rgb(170, 170, 170);\n"
"}\n"
"\n"
"#qauthor {\n"
"	font-size:  10px;\n"
"	margin-top: 10px;\n"
"	font-weight: bold;\n"
"	color: rgb(255, 255, 0);\n"
"}\n"
"#qline {\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
".pushbuttom {\n"
"	border:2px solid rgb(0, 0, 0);\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255, 85, 0);\n"
"	color:rgb(255, 255, 255);\n"
"	padding-bottom: 7px;\n"
"	padding-top: 7px;\n"
"}\n"
"#MainWindow, #scrollAreaWidgetContents {\n"
"	background-color: rgb(90, 90, 90);\n"
"}\n"
"QLabel {\n"
"	\n"
"	color: rgb(253, 253, 253);\n"
"}\n"
"#add{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 85, 0);\n"
"	border:2px solid rgb(255, 85, 0);\n"
"	border-radius: 10px;\n"
"}\n"
"#scrollArea {\n"
"	border: 0;\n"
"}"));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        news = new QLabel(centralwidget);
        news->setObjectName("news");
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        news->setFont(font);

        gridLayout->addWidget(news, 1, 1, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 582, 487));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 3, 0, 1, 3);

        add = new QPushButton(centralwidget);
        add->setObjectName("add");

        gridLayout->addWidget(add, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\276\321\201\321\202\320\270", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272", nullptr));
#if QT_CONFIG(tooltip)
        news->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\235\320\276\320\262\320\276\321\201\321\202\320\270</span></p><p><span style=\" font-weight:700;\"><br/></span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        news->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\235\320\276\320\262\320\276\321\201\321\202\320\270</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        news->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\276\321\201\321\202\320\270", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 ", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
