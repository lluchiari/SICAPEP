#include "sicapep.h"
#include "ui_sicapep_vendas.h"
#include "controller.h"
#include "sicapep_vendas.h"

SiCApepVendas::SiCApepVendas(QWidget *parent) : QMainWindow(parent), ui(new Ui_Vendas::SiCApepVendas)
{
    this->ui->setupUi(this);
}

SiCApepVendas::~SiCApepVendas()
{
    delete ui;
}
