/********************************************************************************
** Form generated from reading UI file 'addpost.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOST_H
#define UI_ADDPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPost
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *text_title;
    QLabel *label_5;
    QTextEdit *text_anons;
    QLabel *label_3;
    QTextEdit *box_text;
    QLabel *label_4;
    QLineEdit *text_author;
    QPushButton *addPost;

    void setupUi(QDialog *AddPost)
    {
        if (AddPost->objectName().isEmpty())
            AddPost->setObjectName("AddPost");
        AddPost->resize(600, 541);
        AddPost->setMinimumSize(QSize(600, 541));
        AddPost->setMaximumSize(QSize(600, 541));
        AddPost->setStyleSheet(QString::fromUtf8("#pushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"	border: 2px solid rgb(255, 170, 0);\n"
"	border-radius: 10px;\n"
"}\n"
"#AddPost {\n"
"	background-color: rgb(90, 90, 90);\n"
"}\n"
"\n"
"QLineEdit {\n"
"	background-color: rgb(150, 150, 150);\n"
"}\n"
"\n"
"QTextEdit {\n"
"	\n"
"	background-color: rgb(150, 150, 150);\n"
"}"));
        horizontalLayoutWidget = new QWidget(AddPost);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 601, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        formLayoutWidget = new QWidget(AddPost);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(9, 80, 581, 421));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        text_title = new QLineEdit(formLayoutWidget);
        text_title->setObjectName("text_title");

        formLayout->setWidget(0, QFormLayout::FieldRole, text_title);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        text_anons = new QTextEdit(formLayoutWidget);
        text_anons->setObjectName("text_anons");

        formLayout->setWidget(1, QFormLayout::FieldRole, text_anons);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        box_text = new QTextEdit(formLayoutWidget);
        box_text->setObjectName("box_text");

        formLayout->setWidget(2, QFormLayout::FieldRole, box_text);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        text_author = new QLineEdit(formLayoutWidget);
        text_author->setObjectName("text_author");

        formLayout->setWidget(4, QFormLayout::FieldRole, text_author);

        addPost = new QPushButton(AddPost);
        addPost->setObjectName("addPost");
        addPost->setGeometry(QRect(510, 510, 80, 24));

        retranslateUi(AddPost);

        QMetaObject::connectSlotsByName(AddPost);
    } // setupUi

    void retranslateUi(QDialog *AddPost)
    {
        AddPost->setWindowTitle(QCoreApplication::translate("AddPost", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddPost", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\275\320\276\320\262\320\276\321\201\321\202\321\214</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AddPost", "title", nullptr));
        label_5->setText(QCoreApplication::translate("AddPost", "anons", nullptr));
        label_3->setText(QCoreApplication::translate("AddPost", "tetx", nullptr));
        label_4->setText(QCoreApplication::translate("AddPost", "author", nullptr));
        addPost->setText(QCoreApplication::translate("AddPost", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPost: public Ui_AddPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOST_H
