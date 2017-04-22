#include "sicapep_vendas.h"

SiCApepVendas::SiCApepVendas(QWidget *parent) : QMainWindow(parent), ui(new Ui::SiCApepVendas)
{
    this->ui->setupUi(this);
}

SiCApepVendas::~SiCApepVendas()
{
    delete ui;
}
