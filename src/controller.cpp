#include "controller.h"

Controller::Controller(SiCApep *view, Model *model)
{
   this->_view = view;
   this->_model = model;
}

Controller::~Controller()
{

}
