#include "dialog.h"
#include <ui_dialog.h>
#include <QMessageBox>
#include <QLabel>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::load_post(QString id) {
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("root");
    db.setPort(3306);
    db.setDatabaseName("Notes");

    if(!db.open())
        QMessageBox::critical(this, "ERROR", "DataBase not connected");
    else{
        QSqlQuery query;
        if(!query.exec("SELECT * FROM notes WHERE id = " + id)) // ORDER BY id DESC - сортировка по убыванию
            QMessageBox::critical(this, "ERROR", "DB Query ERROR");
        else{
            QString mainTitle;
            ui->DialogverticalLayout->setAlignment(Qt::AlignTop); // данный прижаты к верхней стороне
            while(query.next()){
                //QMessageBox::about(this, "DB", query.value("title").toString()); // команда для вывода данных( только title ) в MessageBox
                QLabel *title = new QLabel(query.value("title").toString());
                QLabel *full_text = new QLabel(query.value("full_text").toString());

                title->setProperty("class","title"); // класс для элемента title ( .title )
                full_text->setProperty("class", "full_text"); // класс для элемента anons ( .anons )

                ui->DialogverticalLayout->addWidget(title);
                ui->DialogverticalLayout->addWidget(full_text);

                mainTitle = title->text(); // title->text(), т.к. title указатель
            }
            this->setWindowTitle(mainTitle); // мы не можем сразу подставить title , т.к. это туказатель существует только внутри цикла while
        }
    }
    db.close();
}
