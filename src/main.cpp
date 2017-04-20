#include "sicapep.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("SICAPEP");
    SiCApep window;
    window.show();

    return app.exec();
}
