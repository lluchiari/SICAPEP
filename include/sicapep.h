#ifndef SICAPEP_H
#define SICAPEP_H

#include <QMainWindow>
#include <QDebug>
#include <ostream>
#include "sicapep_vendas.h"
#include "ui_sicapep.h"
//#include "controller.h"


class SiCApep : public QMainWindow
{
    Q_OBJECT

public:
    explicit SiCApep(QWidget *parent = 0);
    ~SiCApep();

private slots:
    void on_pushButtonVendas_clicked();
    void on_pushButtonProdutos_clicked();

private:
    Ui::SiCApep *ui;
};

#endif // SICAPEP_H
