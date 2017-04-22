#include <QApplication>
#include "sicapep.h"
#include "controller.h"
#include "model.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("SICAPEP");
    SiCApep sicapepView;
    Model sicapepModel;
    Controller sicapepControl(&sicapepView, &sicapepModel);
    sicapepView.show();

    return app.exec();
}
