#include "addpost.h"
#include "ui_addpost.h"
#include <QMessageBox>
#include <QSqlQuery>

addPost::addPost(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addPost)
{
    ui->setupUi(this);
}

addPost::~addPost()
{
    delete ui;
}

void addPost::on_addpost_clicked()
{
    QString title = ui->text_title_3->text();
    QString full_text = ui->box_text_3->toPlainText();

    if(title.isEmpty()){
        QMessageBox::information(this, "Error", "title is empty");
        return;
    }
    if(full_text.isEmpty()){
        QMessageBox::information(this, "Error", "text is empty");
        return;
    }

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("root");
    db.setPort(3306);
    db.setDatabaseName("news");

    if(!db.open())
        QMessageBox::critical(this, "ERROR", "DataBase not connected");
    else{
        QSqlQuery query;
        query.prepare("INSERT INTO notes(title, full_text) VALUES(:title, :full_text,)"); // функция , которая позволяет подготовить SQL команду для дальнейшего подставления значений
        // :title и другие - заглушик, в которые мы позже подставим значения
        query.bindValue(":title", title); // подстановка значений в заглушку
        query.bindValue(":full_text", full_text);

        if(!query.exec())
            QMessageBox::critical(this, "Error", "The article has not been added to the database");
        else{
            ui->text_title_3->setText(" ");
            ui->box_text_3->setText(" ");
            ui->addpost->setText("Готово");
        }
    }
    db.close();
}
