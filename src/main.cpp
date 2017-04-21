#include "sicapep.h"
#include "controller.h"
#include "model.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("SICAPEP");
    SiCApep window;
    Model model;
    Controller control(&window, &model);
    window.show();

    return app.exec();
}
