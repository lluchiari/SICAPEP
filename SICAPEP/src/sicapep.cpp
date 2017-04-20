#include "sicapep.h"
#include "ui_sicapep.h"

SiCApep::SiCApep(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SiCApep)
{
    ui->setupUi(this);
}

SiCApep::~SiCApep()
{
    delete ui;
}
