#ifndef SICAPEP_H
#define SICAPEP_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class SiCApep;
}

class SiCApep : public QMainWindow
{
    Q_OBJECT

public:
    explicit SiCApep(QWidget *parent = 0);
    ~SiCApep();

private:
    Ui::SiCApep *ui;
    QSqlRelationalTableModel *model;
};

#endif // SICAPEP_H
