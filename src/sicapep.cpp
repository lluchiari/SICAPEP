#include "sicapep.h"

SiCApep::SiCApep(QWidget *parent) : QMainWindow(parent), ui(new Ui::SiCApep)
{
    // Configures the GUI auto-generated from the form (.ui)
    ui->setupUi(this);
}

SiCApep::~SiCApep()
{
    delete ui;
}

void SiCApep::on_pushButtonVendas_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);

}

// When pressed the "Produtos Button"
void SiCApep::on_pushButtonProdutos_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(2);
}

void SiCApep::on_pushButtonVendaMenuInicial_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}


void SiCApep::on_pushButtonProdutosMenuInicial_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}
