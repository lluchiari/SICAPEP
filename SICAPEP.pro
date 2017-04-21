#-------------------------------------------------
#
# Project created by QtCreator 2017-04-12T13:21:57
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SICAPEP
TEMPLATE = app
DESTDIR = bin
VERSION = 1.0

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH *= . ./src ./include ./form

SOURCES += src/main.cpp\
           src/sicapep.cpp \
    src/controller.cpp \
    src/sicapep_vendas.cpp \
    src/model.cpp

HEADERS  += include/sicapep.h \
    include/controller.h \
    include/sicapep_vendas.h \
    include/model.h

FORMS    += form/sicapep.ui \
    form/sicapep_vendas.ui
