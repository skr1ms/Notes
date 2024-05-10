#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void load_post(QString id);

private:
    Ui::Dialog *ui;
    QSqlDatabase db;
};

#endif // DIALOG_H
