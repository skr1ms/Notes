#ifndef ADDPOST_H
#define ADDPOST_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class addPost;
}

class addPost : public QDialog
{
    Q_OBJECT

public:
    explicit addPost(QWidget *parent = nullptr);
    ~addPost();

private slots:
    void on_addpost_clicked();

private:
    Ui::addPost *ui;
    QSqlDatabase db;
};

#endif // ADDPOST_H
