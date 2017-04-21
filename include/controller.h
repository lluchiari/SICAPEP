#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "sicapep.h"
#include "sicapep.h"
#include "model.h"

class Controller
{
public:
    Controller(SiCApep *, Model *);
    ~Controller();
private:
    SiCApep *_view;
    Model *_model;
};

#endif // CONTROLLER_H
