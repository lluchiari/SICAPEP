#ifndef SICAPEP_H
#define SICAPEP_H

#include <QMainWindow>
#include <QtSql>
#include "sicapep_vendas.h"

namespace Ui {
class SiCApep;
}

class SiCApep : public QMainWindow
{
    Q_OBJECT

public:
    explicit SiCApep(QWidget *parent = 0);
    ~SiCApep();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButtonVendas_clicked();

private:
    Ui::SiCApep *ui;
    QSqlRelationalTableModel *model;
};

#endif // SICAPEP_H
