#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QFrame>
#include <QPushButton>
#include <QHBoxLayout>
#include <QCursor>
#include <QObject>
#include "dialog.h"
#include "addpost.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("root");
    db.setPort(3306);
    db.setDatabaseName("Notes");

    QSqlQuery query;
    if(!query.exec("SELECT * FROM notes ORDER BY id DESC")) // ORDER BY id DESC - сортировка по убыванию
        QMessageBox::critical(this, "ERROR", "DB Query ERROR");
    else

    ui->verticalLayout->setAlignment(Qt::AlignTop); // данный прижаты к верхней стороне
    while(query.next()){
        QLabel *title = new QLabel(query.value("title").toString());
            // код для добавления горизонатльной линии и класс QFrame позволяет создавать другие фигуры
        QFrame* line = new QFrame(this);
        line->setFrameShape(QFrame::HLine);

        QPushButton* btn = new QPushButton("Ознакомиться подробнее");
        btn->setProperty("class", "pushbuttom");
        btn->setObjectName("b_" + query.value("id").toString()); // присвоили id кнопке
        btn->setCursor(QCursor(Qt::PointingHandCursor));
        QObject::connect(btn, &QPushButton::clicked, this, &MainWindow::show_post); // реализация нажатия на кнопку ( круглые скопки в конце метода не ставлю, т.к.
            // новое окно должно открывать не в этом файле в dialog.ui

        QHBoxLayout* box = new QHBoxLayout;
        box->addWidget(btn);

        title->setProperty("class","title"); // класс для элемента title ( .title )
        line->setObjectName("qline"); // теперь мы можем использовать CSS стили на объекте qline ( #qline ) ( qline - имя должно быт ьуникальным !  )

        ui->verticalLayout->addWidget(title);
        ui->verticalLayout->addLayout(box);
        ui->verticalLayout->addWidget(line);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show_post() {
    QString name = qobject_cast<QPushButton*> (sender())->objectName(); // присваиваем значение объекта btn к name
    QStringList list_name = name.split("_");
    Dialog* form = new Dialog(this);
    form->load_post(list_name.at(1));
    form->setModal(true);
    form->exec();
}

void MainWindow::on_add_clicked()
{
    addPost* form = new addPost(this);
    form->setModal(true);
    form->exec();
}

