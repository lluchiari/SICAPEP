#ifndef SICAPEP_VENDAS_H
#define SICAPEP_VENDAS_H

#include <QMainWindow>
#include "ui_sicapep_vendas.h"
#include "sicapep.h"

//namespace Ui_Vendas {
//class SiCApepVendas;
//}

class SiCApepVendas : public QMainWindow
{
    Q_OBJECT

public:
    explicit SiCApepVendas(QWidget *parent = 0);
    ~SiCApepVendas();

private slots:

private:
    Ui::SiCApepVendas *ui;
};

#endif // SICAPEP_H
